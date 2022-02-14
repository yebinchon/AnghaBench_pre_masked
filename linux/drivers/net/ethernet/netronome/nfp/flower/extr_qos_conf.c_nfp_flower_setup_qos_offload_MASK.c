
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct netlink_ext_ack* extack; } ;
struct tc_cls_matchall_offload {int command; TYPE_1__ common; } ;
struct nfp_flower_priv {int flower_ext_feats; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;



 int FUNC_1 (struct nfp_app*,struct net_device*,struct tc_cls_matchall_offload*,struct netlink_ext_ack*) ;
 int FUNC_2 (struct nfp_app*,struct net_device*,struct tc_cls_matchall_offload*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct nfp_app*,struct net_device*,struct tc_cls_matchall_offload*,struct netlink_ext_ack*) ;

int FUNC_4(struct nfp_app *VAR_2, struct net_device *VAR_3,
     struct tc_cls_matchall_offload *VAR_4)
{
 struct netlink_ext_ack *VAR_5 = VAR_4->common.extack;
 struct nfp_flower_priv *VAR_6 = VAR_2->priv;

 if (!(VAR_6->flower_ext_feats & VAR_1)) {
  FUNC_0(VAR_5, "unsupported offload: loaded firmware does not support qos rate limit offload");
  return -VAR_0;
 }

 switch (VAR_4->command) {
 case 129:
  return FUNC_1(VAR_2, VAR_3, VAR_4,
             VAR_5);
 case 130:
  return FUNC_2(VAR_2, VAR_3, VAR_4,
            VAR_5);
 case 128:
  return FUNC_3(VAR_2, VAR_3, VAR_4,
           VAR_5);
 default:
  return -VAR_0;
 }
}
