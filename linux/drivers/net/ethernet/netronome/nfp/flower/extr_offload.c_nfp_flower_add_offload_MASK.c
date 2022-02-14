
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_port {int tc_offload_cnt; } ;
struct nfp_flower_priv {int flow_table; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct nfp_fl_payload {int in_hw; struct nfp_fl_payload* unmasked_data; struct nfp_fl_payload* mask_data; struct nfp_fl_payload* action_data; int fl_node; TYPE_2__ pre_tun_rule; int tc_flower_cookie; } ;
struct nfp_fl_key_ls {int in_hw; struct nfp_fl_key_ls* unmasked_data; struct nfp_fl_key_ls* mask_data; struct nfp_fl_key_ls* action_data; int fl_node; TYPE_2__ pre_tun_rule; int tc_flower_cookie; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {int cookie; TYPE_1__ common; } ;
typedef enum nfp_flower_tun_type { ____Placeholder_nfp_flower_tun_type } nfp_flower_tun_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_fl_payload*) ;
 struct nfp_fl_payload* FUNC_3 (int,int ) ;
 int FUNC_4 (struct nfp_app*,struct flow_cls_offload*,struct nfp_fl_payload*,struct net_device*,struct netlink_ext_ack*) ;
 struct nfp_fl_payload* FUNC_5 (struct nfp_fl_payload*) ;
 int FUNC_6 (struct nfp_app*,struct net_device*,struct nfp_fl_payload*,struct flow_cls_offload*,int*,struct netlink_ext_ack*) ;
 int FUNC_7 (struct nfp_app*,struct flow_cls_offload*,struct net_device*,struct nfp_fl_payload*,struct netlink_ext_ack*) ;
 int FUNC_8 (struct nfp_app*,struct flow_cls_offload*,struct nfp_fl_payload*,struct net_device*,struct nfp_fl_payload*,int,struct netlink_ext_ack*) ;
 int VAR_4 ;
 int FUNC_9 (struct nfp_app*,struct nfp_fl_payload*,struct netlink_ext_ack*) ;
 int FUNC_10 (struct nfp_app*,struct nfp_fl_payload*,int ) ;
 int FUNC_11 (struct nfp_app*,struct nfp_fl_payload*) ;
 int FUNC_12 (struct nfp_app*,struct nfp_fl_payload*) ;
 scalar_t__ FUNC_13 (struct net_device*) ;
 struct nfp_port* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_17(struct nfp_app *VAR_5, struct net_device *VAR_6,
         struct flow_cls_offload *VAR_7)
{
 enum nfp_flower_tun_type VAR_8 = VAR_3;
 struct nfp_flower_priv *VAR_9 = VAR_5->priv;
 struct netlink_ext_ack *VAR_10 = ((void*)0);
 struct nfp_fl_payload *VAR_11;
 struct nfp_fl_key_ls *VAR_12;
 struct nfp_port *VAR_13 = ((void*)0);
 int VAR_14;

 VAR_10 = VAR_7->common.extack;
 if (FUNC_13(VAR_6))
  VAR_13 = FUNC_14(VAR_6);

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_14 = FUNC_6(VAR_5, VAR_6, VAR_12, VAR_7,
           &VAR_8, VAR_10);
 if (VAR_14)
  goto err_free_key_ls;

 VAR_11 = FUNC_5(VAR_12);
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto err_free_key_ls;
 }

 VAR_14 = FUNC_8(VAR_5, VAR_7, VAR_12, VAR_6,
         VAR_11, VAR_8, VAR_10);
 if (VAR_14)
  goto err_destroy_flow;

 VAR_14 = FUNC_7(VAR_5, VAR_7, VAR_6, VAR_11, VAR_10);
 if (VAR_14)
  goto err_destroy_flow;

 if (VAR_11->pre_tun_rule.dev) {
  VAR_14 = FUNC_9(VAR_5, VAR_11, VAR_10);
  if (VAR_14)
   goto err_destroy_flow;
 }

 VAR_14 = FUNC_4(VAR_5, VAR_7, VAR_11, VAR_6, VAR_10);
 if (VAR_14)
  goto err_destroy_flow;

 VAR_11->tc_flower_cookie = VAR_7->cookie;
 VAR_14 = FUNC_15(&VAR_9->flow_table, &VAR_11->fl_node,
         VAR_4);
 if (VAR_14) {
  FUNC_0(VAR_10, "invalid entry: cannot insert flow into tables for offloads");
  goto err_release_metadata;
 }

 if (VAR_11->pre_tun_rule.dev)
  VAR_14 = FUNC_11(VAR_5, VAR_11);
 else
  VAR_14 = FUNC_10(VAR_5, VAR_11,
        VAR_2);
 if (VAR_14)
  goto err_remove_rhash;

 if (VAR_13)
  VAR_13->tc_offload_cnt++;

 VAR_11->in_hw = 1;


 FUNC_2(VAR_12);

 return 0;

err_remove_rhash:
 FUNC_1(FUNC_16(&VAR_9->flow_table,
         &VAR_11->fl_node,
         VAR_4));
err_release_metadata:
 FUNC_12(VAR_5, VAR_11);
err_destroy_flow:
 FUNC_2(VAR_11->action_data);
 FUNC_2(VAR_11->mask_data);
 FUNC_2(VAR_11->unmasked_data);
 FUNC_2(VAR_11);
err_free_key_ls:
 FUNC_2(VAR_12);
 return VAR_14;
}
