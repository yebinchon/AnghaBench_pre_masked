
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ice_sched_node {int in_use; size_t tx_sched_layer; int info; int num_children; struct ice_sched_node** children; struct ice_sched_node* parent; } ;
struct ice_port_info {int root; struct ice_hw* hw; } ;
struct ice_hw {scalar_t__* max_children; } ;
struct ice_aqc_txsched_elem_data {int node_teid; int parent_teid; } ;
struct ice_aqc_get_elem {int * generic; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ice_sched_node** FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (int ,struct ice_sched_node*) ;
 struct ice_sched_node* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct ice_hw*,int ,char*,int ) ;
 int FUNC_4 (struct ice_hw*) ;
 struct ice_sched_node* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ice_hw*,int ,struct ice_aqc_get_elem*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int) ;

enum ice_status
FUNC_9(struct ice_port_info *VAR_4, u8 VAR_5,
     struct ice_aqc_txsched_elem_data *VAR_6)
{
 struct ice_sched_node *VAR_7;
 struct ice_aqc_get_elem VAR_8;
 struct ice_sched_node *VAR_9;
 enum ice_status VAR_10;
 struct ice_hw *VAR_11;

 if (!VAR_4)
  return VAR_3;

 VAR_11 = VAR_4->hw;


 VAR_7 = FUNC_5(VAR_4->root,
          FUNC_7(VAR_6->parent_teid));
 if (!VAR_7) {
  FUNC_3(VAR_11, VAR_1,
     "Parent Node not found for parent_teid=0x%x\n",
     FUNC_7(VAR_6->parent_teid));
  return VAR_3;
 }




 VAR_10 = FUNC_6(VAR_11, FUNC_7(VAR_6->node_teid), &VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_2(FUNC_4(VAR_11), sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return VAR_2;
 if (VAR_11->max_children[VAR_5]) {

  VAR_9->children = FUNC_0(FUNC_4(VAR_11),
           VAR_11->max_children[VAR_5],
           sizeof(*VAR_9), VAR_0);
  if (!VAR_9->children) {
   FUNC_1(FUNC_4(VAR_11), VAR_9);
   return VAR_2;
  }
 }

 VAR_9->in_use = 1;
 VAR_9->parent = VAR_7;
 VAR_9->tx_sched_layer = VAR_5;
 VAR_7->children[VAR_7->num_children++] = VAR_9;
 FUNC_8(&VAR_9->info, &VAR_8.generic[0], sizeof(VAR_9->info));
 return 0;
}
