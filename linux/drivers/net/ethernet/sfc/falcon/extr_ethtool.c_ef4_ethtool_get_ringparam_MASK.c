
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; void* tx_max_pending; void* rx_max_pending; } ;
struct ef4_nic {int txq_entries; int rxq_entries; } ;


 void* VAR_0 ;
 struct ef4_nic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
          struct ethtool_ringparam *VAR_2)
{
 struct ef4_nic *VAR_3 = FUNC_0(VAR_1);

 VAR_2->rx_max_pending = VAR_0;
 VAR_2->tx_max_pending = VAR_0;
 VAR_2->rx_pending = VAR_3->rxq_entries;
 VAR_2->tx_pending = VAR_3->txq_entries;
}
