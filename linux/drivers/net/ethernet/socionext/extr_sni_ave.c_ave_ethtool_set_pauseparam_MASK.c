
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;
struct ave_private {int pause_tx; int pause_rx; int pause_auto; } ;


 int VAR_0 ;
 struct ave_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
          struct ethtool_pauseparam *VAR_2)
{
 struct ave_private *VAR_3 = FUNC_0(VAR_1);
 struct phy_device *VAR_4 = VAR_1->phydev;

 if (!VAR_4)
  return -VAR_0;

 VAR_3->pause_auto = VAR_2->autoneg;
 VAR_3->pause_rx = VAR_2->rx_pause;
 VAR_3->pause_tx = VAR_2->tx_pause;

 FUNC_1(VAR_4, VAR_2->rx_pause, VAR_2->tx_pause);

 return 0;
}
