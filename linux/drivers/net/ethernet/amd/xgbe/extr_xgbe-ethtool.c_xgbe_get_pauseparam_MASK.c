
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_pause; int tx_pause; int pause_autoneg; } ;
struct xgbe_prv_data {TYPE_1__ phy; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;


 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
    struct ethtool_pauseparam *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = FUNC_0(VAR_0);

 VAR_1->autoneg = VAR_2->phy.pause_autoneg;
 VAR_1->tx_pause = VAR_2->phy.tx_pause;
 VAR_1->rx_pause = VAR_2->phy.rx_pause;
}
