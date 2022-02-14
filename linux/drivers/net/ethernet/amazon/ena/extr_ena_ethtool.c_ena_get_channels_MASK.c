
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; int tx_count; int rx_count; scalar_t__ max_combined; scalar_t__ max_other; int max_tx; int max_rx; } ;
struct ena_adapter {int num_queues; } ;


 struct ena_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
        struct ethtool_channels *VAR_1)
{
 struct ena_adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_1->max_rx = VAR_2->num_queues;
 VAR_1->max_tx = VAR_2->num_queues;
 VAR_1->max_other = 0;
 VAR_1->max_combined = 0;
 VAR_1->rx_count = VAR_2->num_queues;
 VAR_1->tx_count = VAR_2->num_queues;
 VAR_1->other_count = 0;
 VAR_1->combined_count = 0;
}
