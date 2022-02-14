
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet32_private {int rx_ring_size; int tx_ring_size; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; int rx_max_pending; int tx_pending; int tx_max_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcnet32_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
      struct ethtool_ringparam *VAR_3)
{
 struct pcnet32_private *VAR_4 = FUNC_0(VAR_2);

 VAR_3->tx_max_pending = VAR_1;
 VAR_3->tx_pending = VAR_4->tx_ring_size;
 VAR_3->rx_max_pending = VAR_0;
 VAR_3->rx_pending = VAR_4->rx_ring_size;
}
