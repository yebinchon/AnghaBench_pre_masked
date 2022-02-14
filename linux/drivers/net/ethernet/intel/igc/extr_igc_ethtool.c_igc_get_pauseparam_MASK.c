
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ current_mode; } ;
struct igc_hw {TYPE_1__ fc; } ;
struct igc_adapter {scalar_t__ fc_autoneg; struct igc_hw hw; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct igc_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5,
          struct ethtool_pauseparam *VAR_6)
{
 struct igc_adapter *VAR_7 = FUNC_0(VAR_5);
 struct igc_hw *VAR_8 = &VAR_7->hw;

 VAR_6->autoneg =
  (VAR_7->fc_autoneg ? VAR_1 : VAR_0);

 if (VAR_8->fc.current_mode == VAR_3) {
  VAR_6->rx_pause = 1;
 } else if (VAR_8->fc.current_mode == VAR_4) {
  VAR_6->tx_pause = 1;
 } else if (VAR_8->fc.current_mode == VAR_2) {
  VAR_6->rx_pause = 1;
  VAR_6->tx_pause = 1;
 }
}
