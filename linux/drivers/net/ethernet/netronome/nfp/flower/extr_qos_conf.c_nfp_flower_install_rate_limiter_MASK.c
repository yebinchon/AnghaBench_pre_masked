
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_11__ {int prio; } ;
struct tc_cls_matchall_offload {TYPE_3__ common; TYPE_2__* rule; } ;
struct sk_buff {int dummy; } ;
struct nfp_repr {TYPE_7__* app; TYPE_1__* port; struct nfp_flower_repr_priv* app_priv; } ;
struct TYPE_13__ {void* port; } ;
struct nfp_police_config {void* cir; void* pir; void* cbs; void* pbs; void* bkt_tkn_c; void* bkt_tkn_p; TYPE_5__ head; } ;
struct TYPE_14__ {int netdev_port_id; } ;
struct nfp_flower_repr_priv {TYPE_6__ qos_table; scalar_t__ block_shared; } ;
struct nfp_flower_priv {int qos_rate_limiters; int qos_stats_work; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_12__ {int rate_bytes_ps; int burst; } ;
struct flow_action_entry {scalar_t__ id; TYPE_4__ police; } ;
struct TYPE_16__ {struct flow_action_entry* entries; } ;
struct TYPE_15__ {int ctrl; } ;
struct TYPE_10__ {TYPE_8__ action; } ;
struct TYPE_9__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (struct nfp_police_config*,int ,int) ;
 struct nfp_repr* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (TYPE_7__*,int,int ,int ) ;
 struct nfp_police_config* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int
FUNC_13(struct nfp_app *VAR_8, struct net_device *VAR_9,
    struct tc_cls_matchall_offload *VAR_10,
    struct netlink_ext_ack *VAR_11)
{
 struct flow_action_entry *VAR_12 = &VAR_10->rule->action.entries[0];
 struct nfp_flower_priv *VAR_13 = VAR_8->priv;
 struct nfp_flower_repr_priv *VAR_14;
 struct nfp_police_config *VAR_15;
 struct nfp_repr *VAR_16;
 struct sk_buff *VAR_17;
 u32 VAR_18;
 u64 VAR_19, VAR_20;

 if (!FUNC_10(VAR_9)) {
  FUNC_0(VAR_11, "unsupported offload: qos rate limit offload not supported on higher level port");
  return -VAR_1;
 }
 VAR_16 = FUNC_6(VAR_9);
 VAR_14 = VAR_16->app_priv;

 if (VAR_14->block_shared) {
  FUNC_0(VAR_11, "unsupported offload: qos rate limit offload not supported on shared blocks");
  return -VAR_1;
 }

 if (VAR_16->port->type != VAR_6) {
  FUNC_0(VAR_11, "unsupported offload: qos rate limit offload not supported on non-VF ports");
  return -VAR_1;
 }

 if (!FUNC_4(&VAR_10->rule->action)) {
  FUNC_0(VAR_11, "unsupported offload: qos rate limit offload requires a single action");
  return -VAR_1;
 }

 if (VAR_10->common.prio != 1) {
  FUNC_0(VAR_11, "unsupported offload: qos rate limit offload requires highest priority");
  return -VAR_1;
 }

 if (VAR_12->id != VAR_2) {
  FUNC_0(VAR_11, "unsupported offload: qos rate limit offload requires police action");
  return -VAR_1;
 }

 VAR_20 = VAR_12->police.rate_bytes_ps;
 VAR_19 = FUNC_3(VAR_20 * FUNC_1(VAR_12->police.burst),
   VAR_7);
 VAR_18 = FUNC_11(VAR_9);

 VAR_17 = FUNC_8(VAR_16->app, sizeof(struct nfp_police_config),
        VAR_4, VAR_3);
 if (!VAR_17)
  return -VAR_0;

 VAR_15 = FUNC_9(VAR_17);
 FUNC_5(VAR_15, 0, sizeof(struct nfp_police_config));
 VAR_15->head.port = FUNC_2(VAR_18);
 VAR_15->bkt_tkn_p = FUNC_2(VAR_19);
 VAR_15->bkt_tkn_c = FUNC_2(VAR_19);
 VAR_15->pbs = FUNC_2(VAR_19);
 VAR_15->cbs = FUNC_2(VAR_19);
 VAR_15->pir = FUNC_2(VAR_20);
 VAR_15->cir = FUNC_2(VAR_20);
 FUNC_7(VAR_16->app->ctrl, VAR_17);

 VAR_14->qos_table.netdev_port_id = VAR_18;
 VAR_13->qos_rate_limiters++;
 if (VAR_13->qos_rate_limiters == 1)
  FUNC_12(&VAR_13->qos_stats_work,
          VAR_5);

 return 0;
}
