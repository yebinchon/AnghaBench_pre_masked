
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {int priv_flags; int req_tx_entries_per_subcrq; int req_rx_add_entries_per_subcrq; void* max_tx_entries_per_subcrq; void* max_rx_add_entries_per_subcrq; } ;
struct ethtool_ringparam {scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; int tx_pending; int rx_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; void* tx_max_pending; void* rx_max_pending; } ;


 void* VAR_0 ;
 int VAR_1 ;
 struct ibmvnic_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
      struct ethtool_ringparam *VAR_3)
{
 struct ibmvnic_adapter *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->priv_flags & VAR_1) {
  VAR_3->rx_max_pending = VAR_4->max_rx_add_entries_per_subcrq;
  VAR_3->tx_max_pending = VAR_4->max_tx_entries_per_subcrq;
 } else {
  VAR_3->rx_max_pending = VAR_0;
  VAR_3->tx_max_pending = VAR_0;
 }
 VAR_3->rx_mini_max_pending = 0;
 VAR_3->rx_jumbo_max_pending = 0;
 VAR_3->rx_pending = VAR_4->req_rx_add_entries_per_subcrq;
 VAR_3->tx_pending = VAR_4->req_tx_entries_per_subcrq;
 VAR_3->rx_mini_pending = 0;
 VAR_3->rx_jumbo_pending = 0;
}
