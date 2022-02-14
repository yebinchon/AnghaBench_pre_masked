
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ethtool_link_ksettings {int dummy; } ;
struct TYPE_4__ {int tx_pause; int rx_pause; struct ethtool_link_ksettings lks; } ;
struct xgbe_prv_data {TYPE_2__ phy; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {TYPE_1__* phydev; } ;
struct TYPE_3__ {scalar_t__ asym_pause; scalar_t__ pause; int advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_6)
{
 struct ethtool_link_ksettings *VAR_7 = &VAR_6->phy.lks;
 struct xgbe_phy_data *VAR_8 = VAR_6->phy_data;
 u16 VAR_9 = 0, VAR_10 = 0;
 u8 VAR_11;

 VAR_6->phy.tx_pause = 0;
 VAR_6->phy.rx_pause = 0;

 if (!VAR_8->phydev)
  return;

 VAR_9 = FUNC_1(VAR_8->phydev->advertising);

 if (VAR_8->phydev->pause) {
  FUNC_0(VAR_7, VAR_5);
  VAR_10 |= VAR_4;
 }
 if (VAR_8->phydev->asym_pause) {
  FUNC_0(VAR_7, VAR_0);
  VAR_10 |= VAR_3;
 }

 VAR_11 = FUNC_2(VAR_9, VAR_10);
 if (VAR_11 & VAR_2)
  VAR_6->phy.tx_pause = 1;
 if (VAR_11 & VAR_1)
  VAR_6->phy.rx_pause = 1;
}
