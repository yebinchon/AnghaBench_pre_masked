
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;
struct TYPE_2__ {int fc_autoneg; } ;
struct be_adapter {TYPE_1__ phy; } ;


 int FUNC_0 (struct be_adapter*,int *,int *) ;
 struct be_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0, struct ethtool_pauseparam *VAR_1)
{
 struct be_adapter *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, &VAR_1->tx_pause, &VAR_1->rx_pause);
 VAR_1->autoneg = VAR_2->phy.fc_autoneg;
}
