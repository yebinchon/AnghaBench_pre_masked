
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u64 ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;

u64 FUNC_0(u8 VAR_2, u64 VAR_3, u64 VAR_4)
{
 return VAR_3 - VAR_4 - (u64)VAR_1[VAR_2 % VAR_0];
}
