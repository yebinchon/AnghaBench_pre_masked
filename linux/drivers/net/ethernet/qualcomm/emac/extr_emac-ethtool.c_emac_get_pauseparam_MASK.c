
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct emac_adapter {scalar_t__ tx_flow_control; scalar_t__ rx_flow_control; scalar_t__ automatic; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct emac_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
    struct ethtool_pauseparam *VAR_3)
{
 struct emac_adapter *VAR_4 = FUNC_0(VAR_2);

 VAR_3->autoneg = VAR_4->automatic ? VAR_1 : VAR_0;
 VAR_3->rx_pause = VAR_4->rx_flow_control ? 1 : 0;
 VAR_3->tx_pause = VAR_4->tx_flow_control ? 1 : 0;
}
