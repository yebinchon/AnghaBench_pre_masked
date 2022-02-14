
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* i2c_stop ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {TYPE_1__ i2c_if; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int dummy; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_phy_data*) ;

__attribute__((used)) static void FUNC_6(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;


 FUNC_2(VAR_0);


 FUNC_5(VAR_1);
 FUNC_4(VAR_0);


 FUNC_1(VAR_0);


 FUNC_3(VAR_0);


 VAR_0->i2c_if.i2c_stop(VAR_0);
}
