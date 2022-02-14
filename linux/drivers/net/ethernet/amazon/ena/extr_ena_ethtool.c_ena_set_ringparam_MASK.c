
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ tx_pending; scalar_t__ rx_pending; } ;
struct ena_adapter {scalar_t__ requested_tx_ring_size; scalar_t__ requested_rx_ring_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ena_adapter*,scalar_t__,scalar_t__) ;
 struct ena_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
        struct ethtool_ringparam *VAR_2)
{
 struct ena_adapter *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4, VAR_5;

 VAR_4 = VAR_2->tx_pending < VAR_0 ?
   VAR_0 : VAR_2->tx_pending;
 VAR_4 = FUNC_2(VAR_4);

 VAR_5 = VAR_2->rx_pending < VAR_0 ?
   VAR_0 : VAR_2->rx_pending;
 VAR_5 = FUNC_2(VAR_5);

 if (VAR_4 == VAR_3->requested_tx_ring_size &&
     VAR_5 == VAR_3->requested_rx_ring_size)
  return 0;

 return FUNC_0(VAR_3, VAR_4, VAR_5);
}
