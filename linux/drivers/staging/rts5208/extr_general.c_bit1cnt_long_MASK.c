
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



int FUNC_0(u32 VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {
  if (VAR_0 & 0x01)
   VAR_2++;
  VAR_0 >>= 1;
 }
 return VAR_2;
}
