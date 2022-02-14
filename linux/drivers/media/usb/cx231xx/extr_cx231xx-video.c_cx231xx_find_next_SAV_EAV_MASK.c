
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



u8 FUNC_0(u8 *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 u32 VAR_3;
 u8 VAR_4 = 0;






 if (VAR_1 < 4) {
  *VAR_2 = VAR_1;
  return 0;
 }

 for (VAR_3 = 0; VAR_3 < (VAR_1 - 3); VAR_3++) {

  if ((VAR_0[VAR_3] == 0xFF) &&
      (VAR_0[VAR_3 + 1] == 0x00) && (VAR_0[VAR_3 + 2] == 0x00)) {

   *VAR_2 = VAR_3 + 4;
   VAR_4 = VAR_0[VAR_3 + 3];
   return VAR_4;
  }
 }

 *VAR_2 = VAR_1;
 return 0;
}
