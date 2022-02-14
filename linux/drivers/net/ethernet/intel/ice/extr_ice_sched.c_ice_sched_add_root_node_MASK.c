
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_sched_node {int info; int children; } ;
struct ice_port_info {struct ice_sched_node* root; struct ice_hw* hw; } ;
struct ice_hw {int * max_children; } ;
struct ice_aqc_txsched_elem_data {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,struct ice_sched_node*) ;
 struct ice_sched_node* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (int *,struct ice_aqc_txsched_elem_data*,int) ;

__attribute__((used)) static enum ice_status
FUNC_5(struct ice_port_info *VAR_3,
   struct ice_aqc_txsched_elem_data *VAR_4)
{
 struct ice_sched_node *VAR_5;
 struct ice_hw *VAR_6;

 if (!VAR_3)
  return VAR_2;

 VAR_6 = VAR_3->hw;

 VAR_5 = FUNC_2(FUNC_3(VAR_6), sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return VAR_1;


 VAR_5->children = FUNC_0(FUNC_3(VAR_6), VAR_6->max_children[0],
          sizeof(*VAR_5), VAR_0);
 if (!VAR_5->children) {
  FUNC_1(FUNC_3(VAR_6), VAR_5);
  return VAR_1;
 }

 FUNC_4(&VAR_5->info, VAR_4, sizeof(*VAR_4));
 VAR_3->root = VAR_5;
 return 0;
}
