
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;
struct TYPE_5__ {scalar_t__ autoneg; int duplex; int speed; struct ethtool_link_ksettings lks; } ;
struct xgbe_prv_data {TYPE_2__ phy; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {TYPE_3__* phydev; } ;
struct TYPE_6__ {scalar_t__ autoneg; int duplex; int speed; int supported; int advertising; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_1)
{
 struct ethtool_link_ksettings *VAR_2 = &VAR_1->phy.lks;
 struct xgbe_phy_data *VAR_3 = VAR_1->phy_data;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  return VAR_4;

 if (!VAR_3->phydev)
  return 0;

 VAR_3->phydev->autoneg = VAR_1->phy.autoneg;
 FUNC_0(VAR_3->phydev->advertising,
       VAR_3->phydev->supported,
       VAR_2->link_modes.advertising);

 if (VAR_1->phy.autoneg != VAR_0) {
  VAR_3->phydev->speed = VAR_1->phy.speed;
  VAR_3->phydev->duplex = VAR_1->phy.duplex;
 }

 VAR_4 = FUNC_1(VAR_3->phydev);

 return VAR_4;
}
