
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s8 ;



__attribute__((used)) static inline u8 FUNC_0(u8 *VAR_0, int VAR_1)
{
 s8 VAR_2 = (VAR_0[2] & 0xfc) >> 2;
 u8 VAR_3 = VAR_1 / 2;





 if (VAR_2 & 0x20) {
  VAR_2 &= ~0x20;
  VAR_2 |= 0xe0;
 }






 VAR_2 += VAR_3;


 if (VAR_2 < 0 || VAR_2 > VAR_1 - 1)
  VAR_2 = 0;

 return VAR_2;
}
