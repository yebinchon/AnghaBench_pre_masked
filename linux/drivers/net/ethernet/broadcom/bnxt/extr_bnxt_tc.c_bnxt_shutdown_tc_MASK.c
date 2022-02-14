
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_tc_info {int encap_table; int decap_table; int decap_l2_table; int l2_table; int flow_table; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;


 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt_tc_info*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct bnxt *VAR_0)
{
 struct bnxt_tc_info *VAR_1 = VAR_0->tc_info;

 if (!FUNC_0(VAR_0))
  return;

 FUNC_2(&VAR_1->flow_table);
 FUNC_2(&VAR_1->l2_table);
 FUNC_2(&VAR_1->decap_l2_table);
 FUNC_2(&VAR_1->decap_table);
 FUNC_2(&VAR_1->encap_table);
 FUNC_1(VAR_1);
 VAR_0->tc_info = ((void*)0);
}
