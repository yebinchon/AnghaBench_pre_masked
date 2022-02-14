
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {scalar_t__ elem_type; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct ice_sched_node {size_t num_children; TYPE_2__ info; struct ice_sched_node** children; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ice_sched_node *VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_children; VAR_2++)
  if (FUNC_0(VAR_1->children[VAR_2]))
   return 1;

 return (VAR_1->info.data.elem_type == VAR_0);
}
