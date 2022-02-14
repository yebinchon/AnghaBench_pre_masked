
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int cur_mode; int phydev; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*,int) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;
 enum xgbe_mode VAR_2;
 int VAR_3;


 VAR_2 = VAR_1->cur_mode;
 FUNC_2(VAR_0);
 FUNC_3(VAR_0, VAR_2);

 if (!VAR_1->phydev)
  return 0;


 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_1->phydev);
}
