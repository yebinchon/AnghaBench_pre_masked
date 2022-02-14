
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; int rx_pending; scalar_t__ tx_max_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; scalar_t__ rx_max_pending; } ;
struct ethoc {int num_tx; int num_rx; scalar_t__ num_bd; } ;


 struct ethoc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
    struct ethtool_ringparam *VAR_1)
{
 struct ethoc *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_max_pending = VAR_2->num_bd - 1;
 VAR_1->rx_mini_max_pending = 0;
 VAR_1->rx_jumbo_max_pending = 0;
 VAR_1->tx_max_pending = VAR_2->num_bd - 1;

 VAR_1->rx_pending = VAR_2->num_rx;
 VAR_1->rx_mini_pending = 0;
 VAR_1->rx_jumbo_pending = 0;
 VAR_1->tx_pending = VAR_2->num_tx;
}
