
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* an_post ) (struct xgbe_prv_data*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {int an_mode; TYPE_2__ phy_if; } ;






 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_0)
{
 if (VAR_0->phy_if.phy_impl.an_post)
  VAR_0->phy_if.phy_impl.an_post(VAR_0);

 switch (VAR_0->an_mode) {
 case 129:
 case 128:
  FUNC_2(VAR_0);
  break;
 case 131:
 case 130:
  FUNC_1(VAR_0);
  break;
 default:
  break;
 }
}
