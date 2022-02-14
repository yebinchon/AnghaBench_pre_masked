
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct nb8800_priv {int pause_aneg; int pause_tx; int pause_rx; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct nb8800_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
     struct ethtool_pauseparam *VAR_1)
{
 struct nb8800_priv *VAR_2 = FUNC_2(VAR_0);
 struct phy_device *VAR_3 = VAR_0->phydev;

 VAR_2->pause_aneg = VAR_1->autoneg;
 VAR_2->pause_rx = VAR_1->rx_pause;
 VAR_2->pause_tx = VAR_1->tx_pause;

 FUNC_0(VAR_0);

 if (!VAR_2->pause_aneg)
  FUNC_1(VAR_0);
 else if (VAR_3)
  FUNC_3(VAR_3);

 return 0;
}
