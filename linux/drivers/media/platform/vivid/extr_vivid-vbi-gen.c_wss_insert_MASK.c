
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u32 VAR_1, unsigned VAR_2)
{
 while (VAR_2--)
  *VAR_0++ = (VAR_1 & (1 << VAR_2)) ? 0xc0 : 0x10;
}
