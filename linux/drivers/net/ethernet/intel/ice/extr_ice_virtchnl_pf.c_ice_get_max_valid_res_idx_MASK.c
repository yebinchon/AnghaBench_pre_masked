
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_res_tracker {int num_entries; int* list; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ice_res_tracker *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 for (VAR_3 = VAR_2->num_entries - 1; VAR_3 >= 0; VAR_3--)
  if (VAR_2->list[VAR_3] & VAR_1)
   return VAR_3;

 return 0;
}
