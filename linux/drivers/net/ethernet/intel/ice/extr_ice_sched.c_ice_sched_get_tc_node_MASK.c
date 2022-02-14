
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ice_sched_node {size_t tc_num; } ;
struct ice_port_info {TYPE_1__* root; } ;
struct TYPE_2__ {size_t num_children; struct ice_sched_node** children; } ;



struct ice_sched_node *FUNC_0(struct ice_port_info *VAR_0, u8 VAR_1)
{
 u8 VAR_2;

 if (!VAR_0 || !VAR_0->root)
  return ((void*)0);
 for (VAR_2 = 0; VAR_2 < VAR_0->root->num_children; VAR_2++)
  if (VAR_0->root->children[VAR_2]->tc_num == VAR_1)
   return VAR_0->root->children[VAR_2];
 return ((void*)0);
}
