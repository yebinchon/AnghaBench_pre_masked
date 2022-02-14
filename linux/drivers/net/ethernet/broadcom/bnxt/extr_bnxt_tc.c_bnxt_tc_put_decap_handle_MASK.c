
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_tc_info {int decap_ht_params; int decap_table; } ;
struct bnxt_tc_flow_node {TYPE_1__* decap_node; scalar_t__ decap_l2_node; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {scalar_t__ tunnel_handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnxt*,struct bnxt_tc_flow_node*) ;
 int FUNC_1 (struct bnxt*,int *,int *,TYPE_1__*) ;
 int FUNC_2 (struct bnxt*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_1,
         struct bnxt_tc_flow_node *VAR_2)
{
 __le32 VAR_3 = VAR_2->decap_node->tunnel_handle;
 struct bnxt_tc_info *VAR_4 = VAR_1->tc_info;
 int VAR_5;

 if (VAR_2->decap_l2_node)
  FUNC_0(VAR_1, VAR_2);

 VAR_5 = FUNC_1(VAR_1, &VAR_4->decap_table,
         &VAR_4->decap_ht_params,
         VAR_2->decap_node);
 if (!VAR_5 && VAR_3 != VAR_0)
  FUNC_2(VAR_1, VAR_3);
}
