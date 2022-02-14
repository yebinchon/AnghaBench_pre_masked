
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int sfp_phy_avail; scalar_t__ sfp_base; int sfp_changed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_2)
{
 struct xgbe_phy_data *VAR_3 = VAR_2->phy_data;
 int VAR_4;

 if (!VAR_3->sfp_changed)
  return;

 VAR_3->sfp_phy_avail = 0;

 if (VAR_3->sfp_base != VAR_1)
  return;


 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 < 0)
  return;


 VAR_3->sfp_phy_avail = 1;
}
