
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_3__ {scalar_t__ elem_type; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct ice_sched_node {size_t num_children; scalar_t__ tx_sched_layer; struct ice_sched_node** children; TYPE_2__ info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ice_sched_node*) ;

struct ice_sched_node *
FUNC_1(struct ice_sched_node *VAR_2, u32 VAR_3)
{
 u16 VAR_4;


 if (FUNC_0(VAR_2) == VAR_3)
  return VAR_2;


 if (!VAR_2->num_children ||
     VAR_2->tx_sched_layer >= VAR_1 ||
     VAR_2->info.data.elem_type == VAR_0)
  return ((void*)0);


 for (VAR_4 = 0; VAR_4 < VAR_2->num_children; VAR_4++)
  if (FUNC_0(VAR_2->children[VAR_4]) == VAR_3)
   return VAR_2->children[VAR_4];


 for (VAR_4 = 0; VAR_4 < VAR_2->num_children; VAR_4++) {
  struct ice_sched_node *VAR_5;

  VAR_5 = FUNC_1(VAR_2->children[VAR_4],
        VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 return ((void*)0);
}
