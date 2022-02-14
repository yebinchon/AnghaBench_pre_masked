
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct atl1_hw {scalar_t__ media_type; } ;
struct atl1_adapter {struct atl1_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct atl1_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4,
 struct ethtool_pauseparam *VAR_5)
{
 struct atl1_adapter *VAR_6 = FUNC_0(VAR_4);
 struct atl1_hw *VAR_7 = &VAR_6->hw;

 if (VAR_7->media_type == VAR_3 ||
     VAR_7->media_type == VAR_2) {
  VAR_5->autoneg = VAR_1;
 } else {
  VAR_5->autoneg = VAR_0;
 }
 VAR_5->rx_pause = 1;
 VAR_5->tx_pause = 1;
}
