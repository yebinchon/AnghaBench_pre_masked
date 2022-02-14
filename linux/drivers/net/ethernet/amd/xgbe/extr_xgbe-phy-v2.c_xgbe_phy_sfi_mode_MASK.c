
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ sfp_cable; int sfp_cable_len; int cur_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_1 (struct xgbe_prv_data*,int,int) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_3)
{
 struct xgbe_phy_data *VAR_4 = VAR_3->phy_data;

 FUNC_2(VAR_3);


 if (VAR_4->sfp_cable != VAR_1) {
  FUNC_1(VAR_3, 3, 0);
 } else {
  if (VAR_4->sfp_cable_len <= 1)
   FUNC_1(VAR_3, 3, 1);
  else if (VAR_4->sfp_cable_len <= 3)
   FUNC_1(VAR_3, 3, 2);
  else
   FUNC_1(VAR_3, 3, 3);
 }

 VAR_4->cur_mode = VAR_0;

 FUNC_0(VAR_3, VAR_2, VAR_3->netdev, "10GbE SFI mode set\n");
}
