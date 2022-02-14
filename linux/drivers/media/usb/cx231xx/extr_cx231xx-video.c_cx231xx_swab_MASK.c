
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



void FUNC_0(u16 *VAR_0, u16 *VAR_1, u16 VAR_2)
{
 u16 VAR_3;

 if (VAR_2 <= 0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2 / 2; VAR_3++)
  VAR_1[VAR_3] = (VAR_0[VAR_3] << 8) | (VAR_0[VAR_3] >> 8);
}
