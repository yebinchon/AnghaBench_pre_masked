
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int rx_ring2_size; int rxdata_desc_size; int tx_ring_size; int rx_ring_size; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_jumbo_pending; int rx_mini_pending; int tx_pending; int rx_pending; int rx_jumbo_max_pending; int rx_mini_max_pending; int tx_max_pending; int rx_max_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vmxnet3_adapter*) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_4,
        struct ethtool_ringparam *VAR_5)
{
 struct vmxnet3_adapter *VAR_6 = FUNC_1(VAR_4);

 VAR_5->rx_max_pending = VAR_2;
 VAR_5->tx_max_pending = VAR_3;
 VAR_5->rx_mini_max_pending = FUNC_0(VAR_6) ?
  VAR_0 : 0;
 VAR_5->rx_jumbo_max_pending = VAR_1;

 VAR_5->rx_pending = VAR_6->rx_ring_size;
 VAR_5->tx_pending = VAR_6->tx_ring_size;
 VAR_5->rx_mini_pending = FUNC_0(VAR_6) ?
  VAR_6->rxdata_desc_size : 0;
 VAR_5->rx_jumbo_pending = VAR_6->rx_ring2_size;
}
