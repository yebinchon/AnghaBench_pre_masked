
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftgmac100 {int rx_pause; int tx_pause; int aneg_pause; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;


 struct ftgmac100* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
         struct ethtool_pauseparam *VAR_1)
{
 struct ftgmac100 *VAR_2 = FUNC_0(VAR_0);

 VAR_1->autoneg = VAR_2->aneg_pause;
 VAR_1->tx_pause = VAR_2->tx_pause;
 VAR_1->rx_pause = VAR_2->rx_pause;
}
