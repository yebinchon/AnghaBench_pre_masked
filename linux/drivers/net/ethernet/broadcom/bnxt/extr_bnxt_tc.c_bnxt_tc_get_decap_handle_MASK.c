
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int src; int dst; } ;
struct TYPE_6__ {TYPE_2__ ipv4; } ;
struct ip_tunnel_key {int tp_dst; TYPE_3__ u; scalar_t__ tp_src; int member_0; } ;
struct TYPE_4__ {int member_0; } ;
struct bnxt_tc_l2_key {int inner_vlan_tci; int inner_vlan_tpid; scalar_t__ num_vlans; int smac; int dmac; TYPE_1__ member_0; } ;
struct bnxt_tc_tunnel_node {scalar_t__ tunnel_handle; struct bnxt_tc_l2_key l2_info; } ;
struct bnxt_tc_info {int decap_ht_params; int decap_table; } ;
struct bnxt_tc_flow_node {struct bnxt_tc_tunnel_node* decap_node; } ;
struct bnxt_tc_flow {int flags; struct ip_tunnel_key tun_key; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bnxt*,struct bnxt_tc_flow*,struct bnxt_tc_l2_key*,struct bnxt_tc_flow_node*,scalar_t__*) ;
 struct bnxt_tc_tunnel_node* FUNC_1 (struct bnxt*,int *,int *,struct ip_tunnel_key*) ;
 int FUNC_2 (struct bnxt*,struct bnxt_tc_flow_node*) ;
 int FUNC_3 (struct bnxt*,int *,int *,struct bnxt_tc_tunnel_node*) ;
 int FUNC_4 (struct bnxt*,struct ip_tunnel_key*,struct bnxt_tc_l2_key*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct bnxt*,struct bnxt_tc_flow*,struct bnxt_tc_l2_key*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_7(struct bnxt *VAR_3, struct bnxt_tc_flow *VAR_4,
        struct bnxt_tc_flow_node *VAR_5,
        __le32 *VAR_6)
{
 struct ip_tunnel_key *VAR_7 = &VAR_4->tun_key;
 struct bnxt_tc_info *VAR_8 = VAR_3->tc_info;
 struct bnxt_tc_l2_key VAR_9 = { 0 };
 struct bnxt_tc_tunnel_node *VAR_10;
 struct ip_tunnel_key VAR_11 = { 0 };
 struct bnxt_tc_l2_key *VAR_12;
 __le32 VAR_13;
 int VAR_14;






 VAR_7->tp_src = 0;
 VAR_10 = FUNC_1(VAR_3, &VAR_8->decap_table,
          &VAR_8->decap_ht_params,
          VAR_7);
 if (!VAR_10)
  return -VAR_1;

 VAR_5->decap_node = VAR_10;

 if (VAR_10->tunnel_handle != VAR_2)
  goto done;





 VAR_11.u.ipv4.dst = VAR_4->tun_key.u.ipv4.src;
 VAR_11.tp_dst = VAR_4->tun_key.tp_dst;
 VAR_14 = FUNC_4(VAR_3, &VAR_11, &VAR_9);
 if (VAR_14)
  goto put_decap;

 VAR_12 = &VAR_10->l2_info;

 FUNC_5(VAR_12->dmac, VAR_9.smac);
 if (VAR_9.num_vlans) {
  VAR_12->num_vlans = VAR_9.num_vlans;
  VAR_12->inner_vlan_tpid = VAR_9.inner_vlan_tpid;
  VAR_12->inner_vlan_tci = VAR_9.inner_vlan_tci;
 }
 VAR_4->flags |= VAR_0;






 VAR_14 = FUNC_0(VAR_3, VAR_4, VAR_12, VAR_5,
       &VAR_13);
 if (VAR_14)
  goto put_decap;


 VAR_14 = FUNC_6(VAR_3, VAR_4, VAR_12,
      VAR_13,
      &VAR_10->tunnel_handle);
 if (VAR_14)
  goto put_decap_l2;

done:
 *VAR_6 = VAR_10->tunnel_handle;
 return 0;

put_decap_l2:
 FUNC_2(VAR_3, VAR_5);
put_decap:
 FUNC_3(VAR_3, &VAR_8->decap_table,
    &VAR_8->decap_ht_params,
    VAR_5->decap_node);
 return VAR_14;
}
