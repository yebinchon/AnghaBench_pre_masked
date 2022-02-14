
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* cur_mode ) (struct xgbe_prv_data*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {TYPE_2__ phy_if; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 int FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_mode FUNC_1(struct xgbe_prv_data *VAR_0)
{
 return VAR_0->phy_if.phy_impl.cur_mode(VAR_0);
}
