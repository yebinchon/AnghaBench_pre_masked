
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* set_gpio ) (struct xgbe_prv_data*,int ) ;unsigned int (* clr_gpio ) (struct xgbe_prv_data*,int ) ;} ;
struct xgbe_prv_data {TYPE_1__ hw_if; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int mdio_reset_gpio; } ;


 unsigned int FUNC_0 (struct xgbe_prv_data*,int ) ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;
 unsigned int VAR_2;

 VAR_2 = VAR_0->hw_if.set_gpio(VAR_0, VAR_1->mdio_reset_gpio);
 if (VAR_2)
  return VAR_2;

 VAR_2 = VAR_0->hw_if.clr_gpio(VAR_0, VAR_1->mdio_reset_gpio);

 return VAR_2;
}
