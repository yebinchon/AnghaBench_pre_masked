
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int num_queues; int max_queues; } ;
struct TYPE_4__ {int num_queues; int max_queues; } ;
struct gve_priv {TYPE_1__ tx_cfg; TYPE_2__ rx_cfg; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; int tx_count; int rx_count; scalar_t__ max_combined; scalar_t__ max_other; int max_tx; int max_rx; } ;


 struct gve_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
        struct ethtool_channels *VAR_1)
{
 struct gve_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->max_rx = VAR_2->rx_cfg.max_queues;
 VAR_1->max_tx = VAR_2->tx_cfg.max_queues;
 VAR_1->max_other = 0;
 VAR_1->max_combined = 0;
 VAR_1->rx_count = VAR_2->rx_cfg.num_queues;
 VAR_1->tx_count = VAR_2->tx_cfg.num_queues;
 VAR_1->other_count = 0;
 VAR_1->combined_count = 0;
}
