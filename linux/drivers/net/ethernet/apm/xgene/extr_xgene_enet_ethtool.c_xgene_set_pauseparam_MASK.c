
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {scalar_t__ phy_mode; int rx_pause; TYPE_1__* mac_ops; int tx_pause; scalar_t__ pause_autoneg; } ;
struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; scalar_t__ autoneg; } ;
struct TYPE_2__ {int (* flowctl_rx ) (struct xgene_enet_pdata*,int ) ;int (* flowctl_tx ) (struct xgene_enet_pdata*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct xgene_enet_pdata* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct phy_device*,int ,int ) ;
 int FUNC_3 (struct phy_device*,struct ethtool_pauseparam*) ;
 int FUNC_4 (struct xgene_enet_pdata*,int ) ;
 int FUNC_5 (struct xgene_enet_pdata*,int ) ;
 int FUNC_6 (struct xgene_enet_pdata*,int ) ;
 int FUNC_7 (struct xgene_enet_pdata*,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2,
    struct ethtool_pauseparam *VAR_3)
{
 struct xgene_enet_pdata *VAR_4 = FUNC_0(VAR_2);
 struct phy_device *VAR_5 = VAR_2->phydev;

 if (FUNC_1(VAR_4->phy_mode) ||
     VAR_4->phy_mode == VAR_1) {
  if (!VAR_5)
   return -VAR_0;

  if (!FUNC_3(VAR_5, VAR_3))
   return -VAR_0;

  VAR_4->pause_autoneg = VAR_3->autoneg;
  VAR_4->tx_pause = VAR_3->tx_pause;
  VAR_4->rx_pause = VAR_3->rx_pause;

  FUNC_2(VAR_5, VAR_3->rx_pause, VAR_3->tx_pause);

  if (!VAR_3->autoneg) {
   VAR_4->mac_ops->flowctl_tx(VAR_4, VAR_4->tx_pause);
   VAR_4->mac_ops->flowctl_rx(VAR_4, VAR_4->rx_pause);
  }
 } else {
  if (VAR_3->autoneg)
   return -VAR_0;

  VAR_4->tx_pause = VAR_3->tx_pause;
  VAR_4->rx_pause = VAR_3->rx_pause;

  VAR_4->mac_ops->flowctl_tx(VAR_4, VAR_4->tx_pause);
  VAR_4->mac_ops->flowctl_rx(VAR_4, VAR_4->rx_pause);
 }

 return 0;
}
