
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int s8 ;


 size_t FUNC_0 (int) ;

__attribute__((used)) static s8 FUNC_1(u8 VAR_0, const u16 *VAR_1, u16 VAR_2,
    u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5;
 u8 VAR_6;

 VAR_5 = VAR_1[FUNC_0(VAR_2)];
 VAR_6 = (VAR_5 & VAR_3) >> VAR_4;
 if (VAR_6 == 0xFF)
  VAR_6 = 2;
 if (VAR_0 == 1) {

  VAR_6 <<= 2;
 } else {

  VAR_6 = ((VAR_6 & 0xC0) >> 6) | ((VAR_6 & 0x3F) << 2);
 }

 return (s8)VAR_6;
}
