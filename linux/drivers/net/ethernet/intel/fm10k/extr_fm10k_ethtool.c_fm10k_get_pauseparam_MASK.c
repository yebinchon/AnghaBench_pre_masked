
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fm10k_intfc {scalar_t__ rx_pause; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; scalar_t__ autoneg; } ;


 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
     struct ethtool_pauseparam *VAR_1)
{
 struct fm10k_intfc *VAR_2 = FUNC_0(VAR_0);


 VAR_1->autoneg = 0;
 VAR_1->tx_pause = 1;

 VAR_1->rx_pause = VAR_2->rx_pause ? 1 : 0;
}
