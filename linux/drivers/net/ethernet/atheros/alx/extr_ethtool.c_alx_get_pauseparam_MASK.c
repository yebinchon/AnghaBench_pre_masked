
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int autoneg; int tx_pause; int rx_pause; } ;
struct alx_hw {int flowctrl; int adv_cfg; } ;
struct alx_priv {struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct alx_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4,
          struct ethtool_pauseparam *VAR_5)
{
 struct alx_priv *VAR_6 = FUNC_0(VAR_4);
 struct alx_hw *VAR_7 = &VAR_6->hw;

 VAR_5->autoneg = !!(VAR_7->flowctrl & VAR_1 &&
       VAR_7->adv_cfg & VAR_0);
 VAR_5->tx_pause = !!(VAR_7->flowctrl & VAR_3);
 VAR_5->rx_pause = !!(VAR_7->flowctrl & VAR_2);
}
