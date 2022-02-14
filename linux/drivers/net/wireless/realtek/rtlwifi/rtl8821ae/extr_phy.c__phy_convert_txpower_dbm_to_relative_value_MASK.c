
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0, u8 VAR_1,
      u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;
 u32 VAR_6 = 0;

 for (VAR_4 = 3; VAR_4 >= 0; --VAR_4) {
  if (VAR_4 >= VAR_1 && VAR_4 <= VAR_2) {

   VAR_5 = (u8)(*VAR_0 >> (VAR_4 * 8)) & 0xF;
   VAR_5 += ((u8)((*VAR_0 >> (VAR_4 * 8 + 4)) & 0xF)) * 10;


   VAR_5 = (VAR_5 > VAR_3) ? VAR_5 -
     VAR_3 : VAR_3 - VAR_5;
  } else {
   VAR_5 = (u8)(*VAR_0 >> (VAR_4 * 8)) & 0xFF;
  }
  VAR_6 <<= 8;
  VAR_6 |= VAR_5;
 }
 *VAR_0 = VAR_6;
}
