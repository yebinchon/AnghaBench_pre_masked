
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct xgene_enet_pdata {int tx_pause; int rx_pause; TYPE_1__* mac_ops; int pause_autoneg; } ;
struct phy_device {scalar_t__ asym_pause; scalar_t__ pause; int duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct TYPE_2__ {int (* flowctl_rx ) (struct xgene_enet_pdata*,void*) ;int (* flowctl_tx ) (struct xgene_enet_pdata*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct xgene_enet_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct xgene_enet_pdata*,void*) ;
 int FUNC_4 (struct xgene_enet_pdata*,void*) ;

__attribute__((used)) static u32 FUNC_5(struct net_device *VAR_4)
{
 struct xgene_enet_pdata *VAR_5 = FUNC_2(VAR_4);
 struct phy_device *VAR_6 = VAR_4->phydev;
 u16 VAR_7, VAR_8 = 0;
 u32 VAR_9, VAR_10;
 u8 VAR_11 = 0;

 if (!VAR_6->duplex || !VAR_5->pause_autoneg)
  return 0;

 if (VAR_5->tx_pause)
  VAR_11 |= VAR_1;

 if (VAR_5->rx_pause)
  VAR_11 |= VAR_0;

 VAR_7 = FUNC_0(VAR_11);

 if (VAR_6->pause)
  VAR_8 = VAR_3;

 if (VAR_6->asym_pause)
  VAR_8 |= VAR_2;

 VAR_11 = FUNC_1(VAR_7, VAR_8);
 VAR_10 = !!(VAR_11 & VAR_1);
 VAR_9 = !!(VAR_11 & VAR_0);

 if (VAR_10 != VAR_5->tx_pause) {
  VAR_5->tx_pause = VAR_10;
  VAR_5->mac_ops->flowctl_tx(VAR_5, VAR_5->tx_pause);
 }

 if (VAR_9 != VAR_5->rx_pause) {
  VAR_5->rx_pause = VAR_9;
  VAR_5->mac_ops->flowctl_rx(VAR_5, VAR_5->rx_pause);
 }

 return 0;
}
