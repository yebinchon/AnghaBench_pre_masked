
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {int priv_flags; int req_tx_queues; int req_rx_queues; void* max_tx_queues; void* max_rx_queues; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; int tx_count; int rx_count; scalar_t__ max_combined; scalar_t__ max_other; void* max_tx; void* max_rx; } ;


 void* VAR_0 ;
 int VAR_1 ;
 struct ibmvnic_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
     struct ethtool_channels *VAR_3)
{
 struct ibmvnic_adapter *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->priv_flags & VAR_1) {
  VAR_3->max_rx = VAR_4->max_rx_queues;
  VAR_3->max_tx = VAR_4->max_tx_queues;
 } else {
  VAR_3->max_rx = VAR_0;
  VAR_3->max_tx = VAR_0;
 }

 VAR_3->max_other = 0;
 VAR_3->max_combined = 0;
 VAR_3->rx_count = VAR_4->req_rx_queues;
 VAR_3->tx_count = VAR_4->req_tx_queues;
 VAR_3->other_count = 0;
 VAR_3->combined_count = 0;
}
