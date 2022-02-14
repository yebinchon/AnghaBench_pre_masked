
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static void
FUNC_0(u8 *VAR_0, u16 *VAR_1,
    u8 VAR_2, u8 VAR_3,
    u8 VAR_4)
{
 u8 VAR_5;
 u8 VAR_6, VAR_7;
 u8 VAR_8;

 for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5++) {
  VAR_6 = (VAR_5 - VAR_3) >> 2;
  VAR_7 = (VAR_5 - VAR_3) & 0x3;
  VAR_8 = (VAR_1[VAR_6] >> 4 * VAR_7) & 0xf;

  VAR_0[VAR_5] = VAR_2 - 2 * VAR_8;
 }
}
