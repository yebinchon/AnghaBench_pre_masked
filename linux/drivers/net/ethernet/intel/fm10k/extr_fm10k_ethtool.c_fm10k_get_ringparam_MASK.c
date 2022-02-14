
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fm10k_intfc {int tx_ring_count; int rx_ring_count; } ;
struct ethtool_ringparam {scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; int tx_pending; int rx_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; int tx_max_pending; int rx_max_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
    struct ethtool_ringparam *VAR_3)
{
 struct fm10k_intfc *VAR_4 = FUNC_0(VAR_2);

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;
 VAR_3->rx_mini_max_pending = 0;
 VAR_3->rx_jumbo_max_pending = 0;
 VAR_3->rx_pending = VAR_4->rx_ring_count;
 VAR_3->tx_pending = VAR_4->tx_ring_count;
 VAR_3->rx_mini_pending = 0;
 VAR_3->rx_jumbo_pending = 0;
}
