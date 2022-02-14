
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 unsigned char VAR_0 ;
 unsigned short* VAR_1 ;

u64 FUNC_0(unsigned char VAR_2, u64 VAR_3, u64 VAR_4)
{
 unsigned short VAR_5;

 VAR_5 = VAR_1[VAR_2 % VAR_0];

 VAR_4 += (u64)VAR_5;

 return VAR_3 - VAR_4;
}
