
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ elem_type; } ;
struct TYPE_5__ {TYPE_3__ data; } ;
struct ice_sched_node {scalar_t__ tx_sched_layer; struct ice_sched_node** children; int num_children; TYPE_2__ info; } ;
struct ice_port_info {TYPE_1__* hw; struct ice_sched_node* root; } ;
struct TYPE_4__ {scalar_t__ sw_entry_point_layer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ice_port_info*,struct ice_sched_node*) ;
 int FUNC_1 (struct ice_port_info*) ;

__attribute__((used)) static void FUNC_2(struct ice_port_info *VAR_2)
{
 struct ice_sched_node *VAR_3;

 FUNC_1(VAR_2);


 VAR_3 = VAR_2->root;
 while (VAR_3) {
  if (VAR_3->tx_sched_layer >= VAR_2->hw->sw_entry_point_layer &&
      VAR_3->info.data.elem_type != VAR_1 &&
      VAR_3->info.data.elem_type != VAR_0) {
   FUNC_0(VAR_2, VAR_3);
   break;
  }

  if (!VAR_3->num_children)
   break;
  VAR_3 = VAR_3->children[0];
 }
}
