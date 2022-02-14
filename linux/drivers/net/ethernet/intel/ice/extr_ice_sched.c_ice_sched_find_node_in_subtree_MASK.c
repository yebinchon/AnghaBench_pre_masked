
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ice_sched_node {size_t num_children; scalar_t__ tx_sched_layer; struct ice_sched_node** children; } ;
struct ice_hw {int dummy; } ;



__attribute__((used)) static bool
FUNC_0(struct ice_hw *VAR_0, struct ice_sched_node *VAR_1,
          struct ice_sched_node *VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_children; VAR_3++) {
  struct ice_sched_node *VAR_4 = VAR_1->children[VAR_3];

  if (VAR_2 == VAR_4)
   return 1;

  if (VAR_4->tx_sched_layer > VAR_2->tx_sched_layer)
   return 0;




  if (FUNC_0(VAR_0, VAR_4, VAR_2))
   return 1;
 }
 return 0;
}
