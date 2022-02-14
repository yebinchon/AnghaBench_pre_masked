
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, u32 VAR_1)
{
 u32 VAR_2 = (VAR_0 > VAR_1) ? VAR_0 - VAR_1
       : VAR_1 - VAR_0;

 if (VAR_2 > 8)
  VAR_2 >>= 3;

 if (VAR_0 > VAR_1)
  return VAR_1 + VAR_2;
 else
  return VAR_1 - VAR_2;
}
