
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ sfp_mod_absent; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_phy_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_9(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;
 int VAR_2;


 FUNC_7(VAR_1);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return;


 FUNC_8(VAR_0);
 if (VAR_1->sfp_mod_absent) {
  FUNC_3(VAR_0);
  goto put;
 }

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2) {

  FUNC_7(VAR_1);
  FUNC_3(VAR_0);
  goto put;
 }

 FUNC_4(VAR_0);

 FUNC_2(VAR_0);

put:
 FUNC_5(VAR_0);

 FUNC_1(VAR_0);
}
