
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtnl_link_stats64 {int dummy; } ;
struct i40e_vsi {int num_queue_pairs; int stat_offsets_loaded; TYPE_2__** tx_rings; TYPE_1__** rx_rings; struct rtnl_link_stats64 eth_stats_offsets; struct rtnl_link_stats64 eth_stats; struct rtnl_link_stats64 net_stats_offsets; } ;
struct TYPE_4__ {struct rtnl_link_stats64 tx_stats; struct rtnl_link_stats64 stats; } ;
struct TYPE_3__ {struct rtnl_link_stats64 rx_stats; struct rtnl_link_stats64 stats; } ;


 struct rtnl_link_stats64* FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct rtnl_link_stats64*,int ,int) ;

void FUNC_2(struct i40e_vsi *VAR_0)
{
 struct rtnl_link_stats64 *VAR_1;
 int VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(&VAR_0->net_stats_offsets, 0, sizeof(VAR_0->net_stats_offsets));
 FUNC_1(&VAR_0->eth_stats, 0, sizeof(VAR_0->eth_stats));
 FUNC_1(&VAR_0->eth_stats_offsets, 0, sizeof(VAR_0->eth_stats_offsets));
 if (VAR_0->rx_rings && VAR_0->rx_rings[0]) {
  for (VAR_2 = 0; VAR_2 < VAR_0->num_queue_pairs; VAR_2++) {
   FUNC_1(&VAR_0->rx_rings[VAR_2]->stats, 0,
          sizeof(VAR_0->rx_rings[VAR_2]->stats));
   FUNC_1(&VAR_0->rx_rings[VAR_2]->rx_stats, 0,
          sizeof(VAR_0->rx_rings[VAR_2]->rx_stats));
   FUNC_1(&VAR_0->tx_rings[VAR_2]->stats, 0,
          sizeof(VAR_0->tx_rings[VAR_2]->stats));
   FUNC_1(&VAR_0->tx_rings[VAR_2]->tx_stats, 0,
          sizeof(VAR_0->tx_rings[VAR_2]->tx_stats));
  }
 }
 VAR_0->stat_offsets_loaded = 0;
}
