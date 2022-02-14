
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* reset ) (struct xgbe_prv_data*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {TYPE_2__ phy_if; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->phy_if.phy_impl.reset(VAR_0);
 if (VAR_1)
  return VAR_1;


 FUNC_2(VAR_0);


 FUNC_1(VAR_0);

 return 0;
}
