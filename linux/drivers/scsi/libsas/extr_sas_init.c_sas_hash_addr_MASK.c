
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;

void FUNC_0(u8 *VAR_1, const u8 *VAR_2)
{
 const u32 VAR_3 = 0x00DB2777;
 u32 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  int VAR_6;

  for (VAR_6 = (VAR_0 - 1); VAR_6 >= 0; VAR_6--) {
   VAR_4 <<= 1;
   if ((1 << VAR_6) & VAR_2[VAR_5]) {
    if (!(VAR_4 & 0x01000000))
     VAR_4 ^= VAR_3;
   } else if (VAR_4 & 0x01000000) {
    VAR_4 ^= VAR_3;
   }
  }
 }

 VAR_1[0] = (VAR_4 >> 16) & 0xFF;
 VAR_1[1] = (VAR_4 >> 8) & 0xFF;
 VAR_1[2] = VAR_4 & 0xFF;
}
