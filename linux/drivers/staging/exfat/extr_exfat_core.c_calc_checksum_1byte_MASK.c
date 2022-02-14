
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;



u8 FUNC_0(void *VAR_0, s32 VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 *VAR_4 = (u8 *)VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++, VAR_4++)
  VAR_2 = (((VAR_2 & 1) << 7) | ((VAR_2 & 0xFE) >> 1)) + *VAR_4;

 return VAR_2;
}
