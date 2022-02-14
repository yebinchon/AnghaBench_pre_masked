
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u8 *VAR_2, u32 VAR_3, u32 *VAR_4,
       u32 *VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;

 while (VAR_3 > 0) {
  VAR_8 = VAR_2[*VAR_5];
  VAR_6 |= (((VAR_8 >> (VAR_0 - *VAR_4))
   & (0xff >> (VAR_0 - *VAR_4))) << VAR_7);

  if (VAR_3 <= *VAR_4) {
   VAR_6 &= (0xffff >> (VAR_1 - (VAR_3 + VAR_7)));
   *VAR_4 -= VAR_3;
   VAR_3 = 0;
  } else {
   ++(*VAR_5);
   VAR_7 += *VAR_4;
   VAR_3 -= *VAR_4;
   *VAR_4 = VAR_0;
  }
 }

 return VAR_6;
}
