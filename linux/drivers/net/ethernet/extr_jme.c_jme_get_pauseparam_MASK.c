
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {int reg_txpfc; int reg_rxmcs; int phy_lock; TYPE_1__ mii_if; int dev; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_5,
   struct ethtool_pauseparam *VAR_6)
{
 struct jme_adapter *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8;

 VAR_6->tx_pause = (VAR_7->reg_txpfc & VAR_4) != 0;
 VAR_6->rx_pause = (VAR_7->reg_rxmcs & VAR_3) != 0;

 FUNC_2(&VAR_7->phy_lock);
 VAR_8 = FUNC_0(VAR_7->dev, VAR_7->mii_if.phy_id, VAR_2);
 FUNC_3(&VAR_7->phy_lock);

 VAR_6->autoneg =
  (VAR_8 & (VAR_1 | VAR_0)) != 0;
}
