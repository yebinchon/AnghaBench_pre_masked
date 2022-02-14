
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;



bool FUNC_0(
 char *VAR_0, u8 *VAR_1, u8 *VAR_2, u32 *VAR_3
)
{
 char *VAR_4 = VAR_0;


 *VAR_3 = 0;
 *VAR_1 = 0;
 *VAR_2 = 0;


 while (*VAR_4 != '\0' && (*VAR_4 == ' ' || *VAR_4 == '\t')) {
  ++VAR_4;
  ++(*VAR_3);
 }


 do {
  (*VAR_1) *= 10;
  *VAR_1 += (*VAR_4 - '0');

  ++VAR_4;
  ++(*VAR_3);

  if (*VAR_4 == '.') {
   ++VAR_4;
   ++(*VAR_3);

   if (*VAR_4 < '0' || *VAR_4 > '9')
    return 0;
   else {
    *VAR_2 = *VAR_4 - '0';
    ++VAR_4;
    ++(*VAR_3);
    return 1;
   }
  }
 } while (*VAR_4 >= '0' && *VAR_4 <= '9');

 return 1;
}
