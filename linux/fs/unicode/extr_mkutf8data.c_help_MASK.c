
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(void)
{
 FUNC_0("Usage: %s [options]\n", VAR_8);
 FUNC_0("\n");
 FUNC_0("This program creates an a data trie used for parsing and\n");
 FUNC_0("normalization of UTF-8 strings. The trie is derived from\n");
 FUNC_0("a set of input files from the Unicode character database\n");
 FUNC_0("found at: http://www.unicode.org/Public/UCD/latest/ucd/\n");
 FUNC_0("\n");
 FUNC_0("The generated tree supports two normalization forms:\n");
 FUNC_0("\n");
 FUNC_0("\tnfdi:\n");
 FUNC_0("\t- Apply unicode normalization form NFD.\n");
 FUNC_0("\t- Remove any Default_Ignorable_Code_Point.\n");
 FUNC_0("\n");
 FUNC_0("\tnfdicf:\n");
 FUNC_0("\t- Apply unicode normalization form NFD.\n");
 FUNC_0("\t- Remove any Default_Ignorable_Code_Point.\n");
 FUNC_0("\t- Apply a full casefold (C + F).\n");
 FUNC_0("\n");
 FUNC_0("These forms were chosen as being most useful when dealing\n");
 FUNC_0("with file names: NFD catches most cases where characters\n");
 FUNC_0("should be considered equivalent. The ignorables are mostly\n");
 FUNC_0("invisible, making names hard to type.\n");
 FUNC_0("\n");
 FUNC_0("The options to specify the files to be used are listed\n");
 FUNC_0("below with their default values, which are the names used\n");
 FUNC_0("by version 11.0.0 of the Unicode Character Database.\n");
 FUNC_0("\n");
 FUNC_0("The input files:\n");
 FUNC_0("\t-a %s\n", VAR_0);
 FUNC_0("\t-c %s\n", VAR_1);
 FUNC_0("\t-p %s\n", VAR_5);
 FUNC_0("\t-d %s\n", VAR_2);
 FUNC_0("\t-f %s\n", VAR_3);
 FUNC_0("\t-n %s\n", VAR_4);
 FUNC_0("\n");
 FUNC_0("Additionally, the generated tables are tested using:\n");
 FUNC_0("\t-t %s\n", VAR_6);
 FUNC_0("\n");
 FUNC_0("Finally, the output file:\n");
 FUNC_0("\t-o %s\n", VAR_7);
 FUNC_0("\n");
}
