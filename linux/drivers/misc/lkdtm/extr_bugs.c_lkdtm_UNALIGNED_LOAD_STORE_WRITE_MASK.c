
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



void FUNC_0(void)
{
 static u8 VAR_0[5] __attribute__((aligned(4))) = {1, 2, 3, 4, 5};
 u32 *VAR_1;
 u32 VAR_2 = 0x12345678;

 VAR_1 = (u32 *)(VAR_0 + 1);
 if (*VAR_1 == 0)
  VAR_2 = 0x87654321;
 *VAR_1 = VAR_2;
}
