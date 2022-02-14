
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct lan78xx_net {int fc_request_control; int fc_autoneg; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lan78xx_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_link_ksettings*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
         struct ethtool_pauseparam *VAR_3)
{
 struct lan78xx_net *VAR_4 = FUNC_0(VAR_2);
 struct phy_device *VAR_5 = VAR_2->phydev;
 struct ethtool_link_ksettings VAR_6;

 FUNC_1(VAR_5, &VAR_6);

 VAR_3->autoneg = VAR_4->fc_autoneg;

 if (VAR_4->fc_request_control & VAR_1)
  VAR_3->tx_pause = 1;

 if (VAR_4->fc_request_control & VAR_0)
  VAR_3->rx_pause = 1;
}
