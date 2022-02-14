
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; int tx_pending; int rx_max_pending; int tx_max_pending; } ;
struct ena_adapter {TYPE_1__* rx_ring; TYPE_2__* tx_ring; int max_rx_ring_size; int max_tx_ring_size; } ;
struct TYPE_4__ {int ring_size; } ;
struct TYPE_3__ {int ring_size; } ;


 struct ena_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
         struct ethtool_ringparam *VAR_1)
{
 struct ena_adapter *VAR_2 = FUNC_0(VAR_0);

 VAR_1->tx_max_pending = VAR_2->max_tx_ring_size;
 VAR_1->rx_max_pending = VAR_2->max_rx_ring_size;
 VAR_1->tx_pending = VAR_2->tx_ring[0].ring_size;
 VAR_1->rx_pending = VAR_2->rx_ring[0].ring_size;
}
