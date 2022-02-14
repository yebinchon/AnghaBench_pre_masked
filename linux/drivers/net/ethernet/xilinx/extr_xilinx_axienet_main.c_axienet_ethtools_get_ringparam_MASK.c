
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; int rx_pending; int tx_max_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; int rx_max_pending; } ;
struct axienet_local {int tx_bd_num; int rx_bd_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct axienet_local* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
        struct ethtool_ringparam *VAR_3)
{
 struct axienet_local *VAR_4 = FUNC_0(VAR_2);

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->rx_mini_max_pending = 0;
 VAR_3->rx_jumbo_max_pending = 0;
 VAR_3->tx_max_pending = VAR_1;
 VAR_3->rx_pending = VAR_4->rx_bd_num;
 VAR_3->rx_mini_pending = 0;
 VAR_3->rx_jumbo_pending = 0;
 VAR_3->tx_pending = VAR_4->tx_bd_num;
}
