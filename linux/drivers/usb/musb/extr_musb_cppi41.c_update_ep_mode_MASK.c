
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(unsigned VAR_0, unsigned VAR_1, u32 VAR_2)
{
 unsigned VAR_3;

 VAR_3 = (VAR_0 - 1) * 2;
 VAR_2 &= ~(3 << VAR_3);
 VAR_2 |= VAR_1 << VAR_3;
 return VAR_2;
}
