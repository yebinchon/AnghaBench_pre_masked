
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct ftgmac100 {scalar_t__ aneg_pause; int rx_pause; int tx_pause; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; scalar_t__ autoneg; } ;


 int FUNC_0 (struct ftgmac100*) ;
 struct ftgmac100* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
        struct ethtool_pauseparam *VAR_1)
{
 struct ftgmac100 *VAR_2 = FUNC_1(VAR_0);
 struct phy_device *VAR_3 = VAR_0->phydev;

 VAR_2->aneg_pause = VAR_1->autoneg;
 VAR_2->tx_pause = VAR_1->tx_pause;
 VAR_2->rx_pause = VAR_1->rx_pause;

 if (VAR_3)
  FUNC_3(VAR_3, VAR_1->rx_pause, VAR_1->tx_pause);

 if (FUNC_2(VAR_0)) {
  if (!(VAR_3 && VAR_2->aneg_pause))
   FUNC_0(VAR_2);
 }

 return 0;
}
