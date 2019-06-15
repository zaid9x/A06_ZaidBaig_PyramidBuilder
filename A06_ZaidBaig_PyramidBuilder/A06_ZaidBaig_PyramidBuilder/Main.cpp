// Zaid Baig 
// BIT 2400
// Assignment 6


// Libraries
#include <iostream>
using namespace std;


void main()
{
	// Variables & Declarations
	int rows, count = 0, count1 = 0, k = 0;

	// Welcoming & Prompting the User
	cout << "Welcome to Pyramid Maker!\n\n";
	cout << "Enter number of rows: ";
	cin >> rows;

	cout << "\n\n";

	// Printing rows
	for (int i = 1; i <= rows; ++i)
	{
		// Printing Space
		for (int space = 1; space <= rows - i; ++space)
		{
			cout << "  ";
			++count;
		}

		// Subtracting Row & Space Size after it prints
		while (k != 2 * i - 1)
		{
			if (count <= rows - 1)
			{
				cout << i + k << " ";
				++count;
			}
			else
			{
				++count1;
				cout << i + k - 2 * count1 << " ";
			}
			++k;
		}
		count1 = count = k = 0;

		cout << endl;
	}

	cout << "\n\n";
	rows = 0;

	// Welcoming & Prompting the User
	cout << "Welcome to the Opposite Pyramid Maker!\n\n";
	cout << "Enter number of rows: ";
	cin >> rows;

	cout << "\n\n";

	// Printing rows
	for (int i = rows; i >= 1; --i)
	{
		// Printing Space
		for (int space = 0; space < rows - i; ++space)
			cout << "  ";

		// Subtracting Row & Space Size after it prints
		for (int j = i; j <= 2 * i - 1; ++j)
			cout << "* ";

		for (int j = 0; j < i - 1; ++j)
			cout << "* ";

		cout << endl;
	}
	// End of Program
}