
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0,
    u8 *VAR_1,
    u32 VAR_2,
    u32 VAR_3,
    u32 VAR_4)




{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_3;
 VAR_7 = VAR_2 + VAR_4;
 for (VAR_5 = VAR_2; VAR_5 < VAR_7; ++VAR_5, ++VAR_6) {
  if (VAR_0[VAR_6 >> 3] & (1 << (VAR_6 & 7)))
   VAR_1[VAR_5 >> 3] |= (1 << (VAR_5 & 7));
  else
   VAR_1[VAR_5 >> 3] &= ~(u32)(1 << (VAR_5 & 7));

 }
}
