
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct mvs_info {struct mvs_device* devices; } ;
struct mvs_device {scalar_t__ taskfileset; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

struct mvs_device *FUNC_0(struct mvs_info *VAR_2,
      u8 VAR_3)
{
 u32 VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->devices[VAR_4].taskfileset == VAR_0)
   continue;

  if (VAR_2->devices[VAR_4].taskfileset == VAR_3)
   return &VAR_2->devices[VAR_4];
 }
 return ((void*)0);
}
