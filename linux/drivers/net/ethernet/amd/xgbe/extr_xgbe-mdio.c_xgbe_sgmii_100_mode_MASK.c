
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* set_mode ) (struct xgbe_prv_data*,int ) ;} ;
struct TYPE_6__ {TYPE_2__ phy_impl; } ;
struct TYPE_4__ {int (* set_speed ) (struct xgbe_prv_data*,int ) ;} ;
struct xgbe_prv_data {TYPE_3__ phy_if; TYPE_1__ hw_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_2)
{

 VAR_2->hw_if.set_speed(VAR_2, VAR_0);


 VAR_2->phy_if.phy_impl.set_mode(VAR_2, VAR_1);
}
