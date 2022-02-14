
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ autoneg; } ;
struct xgbe_prv_data {TYPE_1__ phy; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ port_mode; scalar_t__ rrc_count; TYPE_2__* phydev; scalar_t__ sfp_rx_los; scalar_t__ sfp_mod_absent; scalar_t__ sfp_changed; } ;
struct TYPE_5__ {int link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_5(struct xgbe_prv_data *VAR_6, int *VAR_7)
{
 struct xgbe_phy_data *VAR_8 = VAR_6->phy_data;
 unsigned int VAR_9;
 int VAR_10;

 *VAR_7 = 0;

 if (VAR_8->port_mode == VAR_4) {

  FUNC_4(VAR_6);

  if (VAR_8->sfp_changed) {
   *VAR_7 = 1;
   return 0;
  }

  if (VAR_8->sfp_mod_absent || VAR_8->sfp_rx_los)
   return 0;
 }

 if (VAR_8->phydev) {

  VAR_10 = FUNC_2(VAR_8->phydev);
  if (VAR_10 < 0)
   return 0;

  if ((VAR_6->phy.autoneg == VAR_0) &&
      !FUNC_1(VAR_8->phydev))
   return 0;

  if (!VAR_8->phydev->link)
   return 0;
 }




 VAR_9 = FUNC_0(VAR_6, VAR_1, VAR_2);
 VAR_9 = FUNC_0(VAR_6, VAR_1, VAR_2);
 if (VAR_9 & VAR_3)
  return 1;


 if (VAR_8->rrc_count++ > VAR_5) {
  VAR_8->rrc_count = 0;
  FUNC_3(VAR_6);
 }

 return 0;
}
