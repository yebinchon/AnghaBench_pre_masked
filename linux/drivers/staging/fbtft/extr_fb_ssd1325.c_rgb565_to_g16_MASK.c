
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u16 ;



__attribute__((used)) static uint8_t FUNC_0(u16 VAR_0)
{
 u16 VAR_1 = VAR_0 & 0x1f;
 u16 VAR_2 = (VAR_0 & (0x3f << 5)) >> 5;
 u16 VAR_3 = (VAR_0 & (0x1f << (5 + 6))) >> (5 + 6);

 VAR_0 = (299 * VAR_3 + 587 * VAR_2 + 114 * VAR_1) / 195;
 if (VAR_0 > 255)
  VAR_0 = 255;
 return (uint8_t)VAR_0 / 16;
}
