
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ elem_type; } ;
struct TYPE_3__ {int node_teid; TYPE_2__ data; } ;
struct ice_sched_node {int parent; TYPE_1__ info; struct ice_sched_node** children; int num_children; } ;
struct ice_port_info {int hw; struct ice_sched_node* root; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ice_port_info*,struct ice_sched_node*) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ice_port_info *VAR_1)
{
 struct ice_sched_node *VAR_2;

 VAR_2 = VAR_1->root;
 while (VAR_2) {
  if (!VAR_2->num_children)
   break;
  VAR_2 = VAR_2->children[0];
 }
 if (VAR_2 && VAR_2->info.data.elem_type == VAR_0) {
  u32 VAR_3 = FUNC_2(VAR_2->info.node_teid);
  enum ice_status VAR_4;


  VAR_4 = FUNC_1(VAR_1->hw, VAR_2->parent, 1, &VAR_3);
  if (!VAR_4)
   FUNC_0(VAR_1, VAR_2);
 }
}
