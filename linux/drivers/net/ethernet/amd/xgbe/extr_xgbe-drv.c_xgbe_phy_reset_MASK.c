
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* phy_reset ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int phy_link; TYPE_1__ phy_if; int phy_speed; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_1)
{
 VAR_1->phy_link = -1;
 VAR_1->phy_speed = VAR_0;

 return VAR_1->phy_if.phy_reset(VAR_1);
}
