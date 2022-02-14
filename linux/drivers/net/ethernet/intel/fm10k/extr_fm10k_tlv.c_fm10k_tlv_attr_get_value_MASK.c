
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;

s32 FUNC_0(u32 *VAR_2, void *VAR_3, u32 VAR_4)
{

 if (!VAR_2 || !VAR_3)
  return VAR_0;

 if ((*VAR_2 >> VAR_1) != VAR_4)
  return VAR_0;

 if (VAR_4 == 8)
  *(u64 *)VAR_3 = ((u64)VAR_2[2] << 32) | VAR_2[1];
 else if (VAR_4 == 4)
  *(u32 *)VAR_3 = VAR_2[1];
 else if (VAR_4 == 2)
  *(u16 *)VAR_3 = (u16)VAR_2[1];
 else
  *(u8 *)VAR_3 = (u8)VAR_2[1];

 return 0;
}
