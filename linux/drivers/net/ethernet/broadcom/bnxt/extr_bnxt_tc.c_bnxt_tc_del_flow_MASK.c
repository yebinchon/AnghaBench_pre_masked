
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_cls_offload {int cookie; } ;
struct bnxt_tc_info {int flow_ht_params; int flow_table; } ;
struct bnxt_tc_flow_node {int dummy; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,struct bnxt_tc_flow_node*) ;
 struct bnxt_tc_flow_node* FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_1,
       struct flow_cls_offload *VAR_2)
{
 struct bnxt_tc_info *VAR_3 = VAR_1->tc_info;
 struct bnxt_tc_flow_node *VAR_4;

 VAR_4 = FUNC_1(&VAR_3->flow_table,
        &VAR_2->cookie,
        VAR_3->flow_ht_params);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_4);
}
