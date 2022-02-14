
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tc_cls_matchall_offload {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nfp_repr {TYPE_2__* app; struct nfp_flower_repr_priv* app_priv; } ;
struct TYPE_3__ {int port; } ;
struct nfp_police_config {TYPE_1__ head; int netdev_port_id; } ;
struct nfp_flower_repr_priv {struct nfp_police_config qos_table; } ;
struct nfp_flower_priv {int qos_stats_work; int qos_rate_limiters; } ;
struct nfp_fl_qos {int dummy; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_police_config*,int ,int) ;
 struct nfp_repr* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (TYPE_2__*,int,int ,int ) ;
 struct nfp_police_config* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int
FUNC_10(struct nfp_app *VAR_4, struct net_device *VAR_5,
          struct tc_cls_matchall_offload *VAR_6,
          struct netlink_ext_ack *VAR_7)
{
 struct nfp_flower_priv *VAR_8 = VAR_4->priv;
 struct nfp_flower_repr_priv *VAR_9;
 struct nfp_police_config *VAR_10;
 struct nfp_repr *VAR_11;
 struct sk_buff *VAR_12;
 u32 VAR_13;

 if (!FUNC_8(VAR_5)) {
  FUNC_0(VAR_7, "unsupported offload: qos rate limit offload not supported on higher level port");
  return -VAR_1;
 }
 VAR_11 = FUNC_4(VAR_5);

 VAR_13 = FUNC_9(VAR_5);
 VAR_9 = VAR_11->app_priv;

 if (!VAR_9->qos_table.netdev_port_id) {
  FUNC_0(VAR_7, "unsupported offload: cannot remove qos entry that does not exist");
  return -VAR_1;
 }

 VAR_12 = FUNC_6(VAR_11->app, sizeof(struct nfp_police_config),
        VAR_3, VAR_2);
 if (!VAR_12)
  return -VAR_0;


 FUNC_3(&VAR_9->qos_table, 0, sizeof(struct nfp_fl_qos));
 VAR_8->qos_rate_limiters--;
 if (!VAR_8->qos_rate_limiters)
  FUNC_1(&VAR_8->qos_stats_work);

 VAR_10 = FUNC_7(VAR_12);
 FUNC_3(VAR_10, 0, sizeof(struct nfp_police_config));
 VAR_10->head.port = FUNC_2(VAR_13);
 FUNC_5(VAR_11->app->ctrl, VAR_12);

 return 0;
}
