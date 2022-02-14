
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ rx_pause; scalar_t__ tx_pause; } ;
struct emac_adapter {int automatic; int rx_flow_control; int tx_flow_control; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct emac_adapter*) ;
 struct emac_adapter* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
          struct ethtool_pauseparam *VAR_2)
{
 struct emac_adapter *VAR_3 = FUNC_1(VAR_1);

 VAR_3->automatic = VAR_2->autoneg == VAR_0;
 VAR_3->rx_flow_control = VAR_2->rx_pause != 0;
 VAR_3->tx_flow_control = VAR_2->tx_pause != 0;

 if (FUNC_2(VAR_1))
  return FUNC_0(VAR_3);

 return 0;
}
