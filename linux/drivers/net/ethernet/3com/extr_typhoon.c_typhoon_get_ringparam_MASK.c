
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {void* tx_pending; void* rx_pending; void* tx_max_pending; void* rx_max_pending; } ;


 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct net_device *VAR_2, struct ethtool_ringparam *VAR_3)
{
 VAR_3->rx_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1 - 1;

 VAR_3->rx_pending = VAR_0;
 VAR_3->tx_pending = VAR_1 - 1;
}
