
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_tc_l2_node {scalar_t__ refcount; int node; } ;
struct bnxt_tc_info {int decap_l2_ht_params; int decap_l2_table; } ;
struct bnxt_tc_flow_node {int decap_l2_list_node; struct bnxt_tc_l2_node* decap_l2_node; } ;
struct bnxt {int dev; struct bnxt_tc_info* tc_info; } ;


 int FUNC_0 (struct bnxt_tc_l2_node*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct bnxt *VAR_1,
          struct bnxt_tc_flow_node *VAR_2)
{
 struct bnxt_tc_l2_node *VAR_3 = VAR_2->decap_l2_node;
 struct bnxt_tc_info *VAR_4 = VAR_1->tc_info;
 int VAR_5;


 FUNC_1(&VAR_2->decap_l2_list_node);
 if (--VAR_3->refcount == 0) {
  VAR_5 = FUNC_3(&VAR_4->decap_l2_table,
          &VAR_3->node,
          VAR_4->decap_l2_ht_params);
  if (VAR_5)
   FUNC_2(VAR_1->dev, "rhashtable_remove_fast rc=%d", VAR_5);
  FUNC_0(VAR_3, VAR_0);
 }
}
