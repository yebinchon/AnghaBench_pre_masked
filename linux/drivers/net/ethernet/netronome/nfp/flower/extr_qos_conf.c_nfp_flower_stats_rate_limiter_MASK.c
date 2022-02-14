
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct tc_cls_matchall_offload {int stats; } ;
struct nfp_stat_pair {scalar_t__ bytes; scalar_t__ pkts; } ;
struct nfp_repr {struct nfp_flower_repr_priv* app_priv; } ;
struct TYPE_2__ {int last_update; struct nfp_stat_pair prev_stats; struct nfp_stat_pair curr_stats; int netdev_port_id; } ;
struct nfp_flower_repr_priv {TYPE_1__ qos_table; } ;
struct nfp_flower_priv {int qos_stats_lock; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 struct nfp_repr* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct nfp_app *VAR_1, struct net_device *VAR_2,
         struct tc_cls_matchall_offload *VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 struct nfp_flower_priv *VAR_5 = VAR_1->priv;
 struct nfp_flower_repr_priv *VAR_6;
 struct nfp_stat_pair *VAR_7;
 struct nfp_stat_pair *VAR_8;
 u64 VAR_9, VAR_10;
 struct nfp_repr *VAR_11;

 if (!FUNC_3(VAR_2)) {
  FUNC_0(VAR_4, "unsupported offload: qos rate limit offload not supported on higher level port");
  return -VAR_0;
 }
 VAR_11 = FUNC_2(VAR_2);

 VAR_6 = VAR_11->app_priv;
 if (!VAR_6->qos_table.netdev_port_id) {
  FUNC_0(VAR_4, "unsupported offload: cannot find qos entry for stats update");
  return -VAR_0;
 }

 FUNC_4(&VAR_5->qos_stats_lock);
 VAR_7 = &VAR_6->qos_table.curr_stats;
 VAR_8 = &VAR_6->qos_table.prev_stats;
 VAR_10 = VAR_7->pkts - VAR_8->pkts;
 VAR_9 = VAR_7->bytes - VAR_8->bytes;
 VAR_8->pkts = VAR_7->pkts;
 VAR_8->bytes = VAR_7->bytes;
 FUNC_5(&VAR_5->qos_stats_lock);

 FUNC_1(&VAR_3->stats, VAR_9, VAR_10,
     VAR_6->qos_table.last_update);
 return 0;
}
