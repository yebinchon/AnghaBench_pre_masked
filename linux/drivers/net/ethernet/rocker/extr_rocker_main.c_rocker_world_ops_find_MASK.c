
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rocker_world_ops {scalar_t__ mode; } ;


 int VAR_0 ;
 struct rocker_world_ops** VAR_1 ;

__attribute__((used)) static struct rocker_world_ops *FUNC_0(u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3]->mode == VAR_2)
   return VAR_1[VAR_3];
 return ((void*)0);
}
