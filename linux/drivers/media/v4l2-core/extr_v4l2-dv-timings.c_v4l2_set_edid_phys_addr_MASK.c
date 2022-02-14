
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 unsigned int FUNC_0 (int*,unsigned int) ;

void FUNC_1(u8 *VAR_0, unsigned int VAR_1, u16 VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0, VAR_1);
 u8 VAR_4 = 0;
 unsigned int VAR_5;

 if (VAR_3 == 0)
  return;
 VAR_0[VAR_3] = VAR_2 >> 8;
 VAR_0[VAR_3 + 1] = VAR_2 & 0xff;
 VAR_3 &= ~0x7f;


 for (VAR_5 = VAR_3; VAR_5 < VAR_3 + 127; VAR_5++)
  VAR_4 += VAR_0[VAR_5];
 VAR_0[VAR_5] = 256 - VAR_4;
}
