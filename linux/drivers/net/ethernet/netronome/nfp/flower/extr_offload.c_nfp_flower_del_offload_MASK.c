
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_port {int tc_offload_cnt; } ;
struct nfp_flower_priv {int flow_table; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct nfp_fl_payload {int fl_node; int unmasked_data; int mask_data; int action_data; TYPE_2__ pre_tun_rule; int in_hw; scalar_t__ nfp_tun_ipv4_addr; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct netlink_ext_ack* extack; } ;
struct flow_cls_offload {int cookie; TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_fl_payload*,int ) ;
 int FUNC_4 (struct nfp_app*,struct nfp_fl_payload*) ;
 struct nfp_fl_payload* FUNC_5 (struct nfp_app*,int ,struct net_device*) ;
 int VAR_2 ;
 int FUNC_6 (struct nfp_app*,struct nfp_fl_payload*,int ) ;
 int FUNC_7 (struct nfp_app*,struct nfp_fl_payload*) ;
 int FUNC_8 (struct nfp_app*,struct nfp_fl_payload*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 struct nfp_port* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct nfp_app*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_12 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_13(struct nfp_app *VAR_4, struct net_device *VAR_5,
         struct flow_cls_offload *VAR_6)
{
 struct nfp_flower_priv *VAR_7 = VAR_4->priv;
 struct netlink_ext_ack *VAR_8 = ((void*)0);
 struct nfp_fl_payload *VAR_9;
 struct nfp_port *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_8 = VAR_6->common.extack;
 if (FUNC_9(VAR_5))
  VAR_10 = FUNC_10(VAR_5);

 VAR_9 = FUNC_5(VAR_4, VAR_6->cookie, VAR_5);
 if (!VAR_9) {
  FUNC_0(VAR_8, "invalid entry: cannot remove flow that does not exist");
  return -VAR_0;
 }

 VAR_11 = FUNC_8(VAR_4, VAR_9);
 if (VAR_11)
  goto err_free_merge_flow;

 if (VAR_9->nfp_tun_ipv4_addr)
  FUNC_11(VAR_4, VAR_9->nfp_tun_ipv4_addr);

 if (!VAR_9->in_hw) {
  VAR_11 = 0;
  goto err_free_merge_flow;
 }

 if (VAR_9->pre_tun_rule.dev)
  VAR_11 = FUNC_7(VAR_4, VAR_9);
 else
  VAR_11 = FUNC_6(VAR_4, VAR_9,
        VAR_1);


err_free_merge_flow:
 FUNC_4(VAR_4, VAR_9);
 if (VAR_10)
  VAR_10->tc_offload_cnt--;
 FUNC_2(VAR_9->action_data);
 FUNC_2(VAR_9->mask_data);
 FUNC_2(VAR_9->unmasked_data);
 FUNC_1(FUNC_12(&VAR_7->flow_table,
         &VAR_9->fl_node,
         VAR_2));
 FUNC_3(VAR_9, VAR_3);
 return VAR_11;
}
