
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,char*,int*,int*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

bool FUNC_3(char *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 char *VAR_3 = VAR_0;


 if (!VAR_0 || !VAR_1 || !VAR_2) {
  FUNC_0("GetHexValueFromString(): Invalid input arguments! szStr: %p, pu4bVal: %p, pu4bMove: %p\n",
    VAR_0, VAR_1, VAR_2);
  return 0;
 }


 *VAR_2 = 0;
 *VAR_1 = 0;


 while (*VAR_3 != '\0' && (*VAR_3 == ' ' || *VAR_3 == '\t')) {
  VAR_3++;
  (*VAR_2)++;
 }


 if (*VAR_3 == '0' && (*(VAR_3+1) == 'x' || *(VAR_3+1) == 'X')) {
  VAR_3 += 2;
  (*VAR_2) += 2;
 }



 if (!FUNC_1(*VAR_3))
  return 0;


 do {
  (*VAR_1) <<= 4;
  *VAR_1 += FUNC_2(*VAR_3);

  VAR_3++;
  (*VAR_2)++;
 } while (FUNC_1(*VAR_3));

 return 1;
}
