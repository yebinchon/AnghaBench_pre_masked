
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 32; VAR_1++, VAR_0 >>= 1) {
  if (VAR_0 & 0x01)
   break;
 }

 return (VAR_1);
}
