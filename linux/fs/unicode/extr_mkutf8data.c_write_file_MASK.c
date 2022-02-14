
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int maxage; char* type; } ;
typedef int FILE ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_5(void)
{
 FILE *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_9 > 0)
  FUNC_4("Writing %s\n", VAR_6);
 VAR_10 = FUNC_1(VAR_6, "w");
 if (!VAR_10)
  FUNC_3(VAR_6, VAR_2);

 FUNC_2(VAR_10, "/* This file is generated code, do not edit. */\n");
 FUNC_2(VAR_10, "#ifndef __INCLUDED_FROM_UTF8NORM_C__\n");
 FUNC_2(VAR_10, "#error Only nls_utf8-norm.c should include this file.\n");
 FUNC_2(VAR_10, "#endif\n");
 FUNC_2(VAR_10, "\n");
 FUNC_2(VAR_10, "static const unsigned int utf8vers = %#x;\n",
  VAR_5);
 FUNC_2(VAR_10, "\n");
 FUNC_2(VAR_10, "static const unsigned int utf8agetab[] = {\n");
 for (VAR_11 = 0; VAR_11 != VAR_1; VAR_11++)
  FUNC_2(VAR_10, "\t%#x%s\n", VAR_0[VAR_11],
   VAR_0[VAR_11] == VAR_5 ? "" : ",");
 FUNC_2(VAR_10, "};\n");
 FUNC_2(VAR_10, "\n");
 FUNC_2(VAR_10, "static const struct utf8data utf8nfdicfdata[] = {\n");
 VAR_13 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  FUNC_2(VAR_10, "\t{ %#x, %d }%s\n",
   VAR_0[VAR_14], VAR_3[VAR_13].index,
   VAR_0[VAR_14] == VAR_5 ? "" : ",");
  if (VAR_3[VAR_13].maxage == VAR_0[VAR_14])
   VAR_13 += 2;
 }
 FUNC_2(VAR_10, "};\n");
 FUNC_2(VAR_10, "\n");
 FUNC_2(VAR_10, "static const struct utf8data utf8nfdidata[] = {\n");
 VAR_13 = 1;
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  FUNC_2(VAR_10, "\t{ %#x, %d }%s\n",
   VAR_0[VAR_14], VAR_3[VAR_13].index,
   VAR_0[VAR_14] == VAR_5 ? "" : ",");
  if (VAR_3[VAR_13].maxage == VAR_0[VAR_14])
   VAR_13 += 2;
 }
 FUNC_2(VAR_10, "};\n");
 FUNC_2(VAR_10, "\n");
 FUNC_2(VAR_10, "static const unsigned char utf8data[%zd] = {\n",
  VAR_8);
 VAR_13 = 0;
 for (VAR_11 = 0; VAR_11 != VAR_8; VAR_11 += 16) {
  if (VAR_11 == VAR_3[VAR_13].index) {
   FUNC_2(VAR_10, "\t/* %s_%x */\n",
    VAR_3[VAR_13].type, VAR_3[VAR_13].maxage);
   if (VAR_13 < VAR_4-1)
    VAR_13++;
  }
  FUNC_2(VAR_10, "\t");
  for (VAR_12 = VAR_11; VAR_12 != VAR_11 + 16; VAR_12++)
   FUNC_2(VAR_10, "0x%.2x%s", VAR_7[VAR_12],
    (VAR_12 < VAR_8 -1 ? "," : ""));
  FUNC_2(VAR_10, "\n");
 }
 FUNC_2(VAR_10, "};\n");
 FUNC_0(VAR_10);
}
