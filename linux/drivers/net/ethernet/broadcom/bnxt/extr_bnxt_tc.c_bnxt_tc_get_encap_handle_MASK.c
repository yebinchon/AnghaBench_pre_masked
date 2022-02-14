
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_tunnel_key {int dummy; } ;
struct bnxt_tc_tunnel_node {scalar_t__ tunnel_handle; int l2_info; } ;
struct bnxt_tc_info {int encap_ht_params; int encap_table; } ;
struct bnxt_tc_flow_node {struct bnxt_tc_tunnel_node* encap_node; } ;
struct TYPE_2__ {struct ip_tunnel_key tun_encap_key; } ;
struct bnxt_tc_flow {TYPE_1__ actions; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct bnxt_tc_tunnel_node* FUNC_0 (struct bnxt*,int *,int *,struct ip_tunnel_key*) ;
 int FUNC_1 (struct bnxt*,int *,int *,struct bnxt_tc_tunnel_node*) ;
 int FUNC_2 (struct bnxt*,struct ip_tunnel_key*,int *) ;
 int FUNC_3 (struct bnxt*,struct ip_tunnel_key*,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_2, struct bnxt_tc_flow *VAR_3,
        struct bnxt_tc_flow_node *VAR_4,
        __le32 *VAR_5)
{
 struct ip_tunnel_key *VAR_6 = &VAR_3->actions.tun_encap_key;
 struct bnxt_tc_info *VAR_7 = VAR_2->tc_info;
 struct bnxt_tc_tunnel_node *VAR_8;
 int VAR_9;





 VAR_8 = FUNC_0(VAR_2, &VAR_7->encap_table,
          &VAR_7->encap_ht_params,
          VAR_6);
 if (!VAR_8)
  return -VAR_0;

 VAR_4->encap_node = VAR_8;

 if (VAR_8->tunnel_handle != VAR_1)
  goto done;

 VAR_9 = FUNC_2(VAR_2, VAR_6, &VAR_8->l2_info);
 if (VAR_9)
  goto put_encap;


 VAR_9 = FUNC_3(VAR_2, VAR_6, &VAR_8->l2_info,
      &VAR_8->tunnel_handle);
 if (VAR_9)
  goto put_encap;

done:
 *VAR_5 = VAR_8->tunnel_handle;
 return 0;

put_encap:
 FUNC_1(VAR_2, &VAR_7->encap_table,
    &VAR_7->encap_ht_params, VAR_8);
 return VAR_9;
}
