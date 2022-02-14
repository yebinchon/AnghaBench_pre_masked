
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgb_hw {TYPE_1__ fc; } ;
struct ixgb_adapter {struct ixgb_hw hw; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ixgb_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_4,
    struct ethtool_pauseparam *VAR_5)
{
 struct ixgb_adapter *VAR_6 = FUNC_0(VAR_4);
 struct ixgb_hw *VAR_7 = &VAR_6->hw;

 VAR_5->autoneg = VAR_0;

 if (VAR_7->fc.type == VAR_2)
  VAR_5->rx_pause = 1;
 else if (VAR_7->fc.type == VAR_3)
  VAR_5->tx_pause = 1;
 else if (VAR_7->fc.type == VAR_1) {
  VAR_5->rx_pause = 1;
  VAR_5->tx_pause = 1;
 }
}
