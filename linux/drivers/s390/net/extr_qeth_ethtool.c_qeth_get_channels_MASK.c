
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_out_queues; } ;
struct qeth_card {TYPE_1__ qdio; } ;
struct net_device {int real_num_tx_queues; int real_num_rx_queues; int num_rx_queues; struct qeth_card* ml_priv; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; int tx_count; int rx_count; scalar_t__ max_combined; scalar_t__ max_other; int max_tx; int max_rx; } ;



__attribute__((used)) static void FUNC_0(struct net_device *VAR_0,
         struct ethtool_channels *VAR_1)
{
 struct qeth_card *VAR_2 = VAR_0->ml_priv;

 VAR_1->max_rx = VAR_0->num_rx_queues;
 VAR_1->max_tx = VAR_2->qdio.no_out_queues;
 VAR_1->max_other = 0;
 VAR_1->max_combined = 0;
 VAR_1->rx_count = VAR_0->real_num_rx_queues;
 VAR_1->tx_count = VAR_0->real_num_tx_queues;
 VAR_1->other_count = 0;
 VAR_1->combined_count = 0;
}
