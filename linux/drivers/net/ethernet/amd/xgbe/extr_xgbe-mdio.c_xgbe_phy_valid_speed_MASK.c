
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* valid_speed ) (struct xgbe_prv_data*,int) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {TYPE_2__ phy_if; } ;


 int FUNC_0 (struct xgbe_prv_data*,int) ;

__attribute__((used)) static bool FUNC_1(struct xgbe_prv_data *VAR_0, int VAR_1)
{
 return VAR_0->phy_if.phy_impl.valid_speed(VAR_0, VAR_1);
}
