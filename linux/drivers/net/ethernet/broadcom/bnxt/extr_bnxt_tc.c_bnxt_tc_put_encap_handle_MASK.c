
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_tc_tunnel_node {scalar_t__ tunnel_handle; } ;
struct bnxt_tc_info {int encap_ht_params; int encap_table; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;
typedef scalar_t__ __le32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnxt*,int *,int *,struct bnxt_tc_tunnel_node*) ;
 int FUNC_1 (struct bnxt*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_1,
         struct bnxt_tc_tunnel_node *VAR_2)
{
 __le32 VAR_3 = VAR_2->tunnel_handle;
 struct bnxt_tc_info *VAR_4 = VAR_1->tc_info;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4->encap_table,
         &VAR_4->encap_ht_params, VAR_2);
 if (!VAR_5 && VAR_3 != VAR_0)
  FUNC_1(VAR_1, VAR_3);
}
