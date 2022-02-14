
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {int phy_if; TYPE_1__* vdata; int desc_if; int i2c_if; int hw_if; } ;
struct TYPE_2__ {int (* init_function_ptrs_phy_impl ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_0)
{
 FUNC_2(&VAR_0->hw_if);
 FUNC_4(&VAR_0->phy_if);
 FUNC_3(&VAR_0->i2c_if);
 FUNC_1(&VAR_0->desc_if);

 VAR_0->vdata->init_function_ptrs_phy_impl(&VAR_0->phy_if);
}
