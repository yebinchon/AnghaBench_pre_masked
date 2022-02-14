
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;
struct efx_nic {int txq_entries; int rxq_entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
          struct ethtool_ringparam *VAR_2)
{
 struct efx_nic *VAR_3 = FUNC_1(VAR_1);

 VAR_2->rx_max_pending = VAR_0;
 VAR_2->tx_max_pending = FUNC_0(VAR_3);
 VAR_2->rx_pending = VAR_3->rxq_entries;
 VAR_2->tx_pending = VAR_3->txq_entries;
}
