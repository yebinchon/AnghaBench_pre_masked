
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fc_autoneg; int fc; } ;
struct pch_gbe_hw {TYPE_1__ mac; } ;
struct pch_gbe_adapter {int netdev; struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pch_gbe_adapter*) ;
 int FUNC_3 (struct pch_gbe_hw*) ;
 int FUNC_4 (struct pch_gbe_adapter*) ;
 int FUNC_5 (struct pch_gbe_adapter*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
           struct ethtool_pauseparam *VAR_6)
{
 struct pch_gbe_adapter *VAR_7 = FUNC_0(VAR_5);
 struct pch_gbe_hw *VAR_8 = &VAR_7->hw;
 int VAR_9 = 0;

 VAR_8->mac.fc_autoneg = VAR_6->autoneg;
 if ((VAR_6->rx_pause) && (VAR_6->tx_pause))
  VAR_8->mac.fc = VAR_1;
 else if ((VAR_6->rx_pause) && (!VAR_6->tx_pause))
  VAR_8->mac.fc = VAR_3;
 else if ((!VAR_6->rx_pause) && (VAR_6->tx_pause))
  VAR_8->mac.fc = VAR_4;
 else if ((!VAR_6->rx_pause) && (!VAR_6->tx_pause))
  VAR_8->mac.fc = VAR_2;

 if (VAR_8->mac.fc_autoneg == VAR_0) {
  if ((FUNC_1(VAR_7->netdev))) {
   FUNC_2(VAR_7);
   VAR_9 = FUNC_5(VAR_7);
  } else {
   FUNC_4(VAR_7);
  }
 } else {
  VAR_9 = FUNC_3(VAR_8);
 }
 return VAR_9;
}
