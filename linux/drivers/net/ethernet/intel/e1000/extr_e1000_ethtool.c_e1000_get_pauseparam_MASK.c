
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct e1000_hw {scalar_t__ fc; } ;
struct e1000_adapter {scalar_t__ fc_autoneg; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5,
     struct ethtool_pauseparam *VAR_6)
{
 struct e1000_adapter *VAR_7 = FUNC_0(VAR_5);
 struct e1000_hw *VAR_8 = &VAR_7->hw;

 VAR_6->autoneg =
  (VAR_7->fc_autoneg ? VAR_1 : VAR_0);

 if (VAR_8->fc == VAR_3) {
  VAR_6->rx_pause = 1;
 } else if (VAR_8->fc == VAR_4) {
  VAR_6->tx_pause = 1;
 } else if (VAR_8->fc == VAR_2) {
  VAR_6->rx_pause = 1;
  VAR_6->tx_pause = 1;
 }
}
