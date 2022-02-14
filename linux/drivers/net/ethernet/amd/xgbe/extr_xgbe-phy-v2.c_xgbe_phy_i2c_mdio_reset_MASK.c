
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int mdio_reset_gpio; int mdio_reset_addr; } ;
typedef int gpio_reg ;
typedef int gpio_ports ;
typedef int gpio_data ;


 int FUNC_0 (struct xgbe_prv_data*,int ,int*,int,int*,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;
 u8 VAR_2, VAR_3[2], VAR_4[3];
 int VAR_5;


 VAR_2 = 2;
 VAR_5 = FUNC_0(VAR_0, VAR_1->mdio_reset_addr,
    &VAR_2, sizeof(VAR_2),
    VAR_3, sizeof(VAR_3));
 if (VAR_5)
  return VAR_5;


 VAR_4[0] = 2;
 VAR_4[1] = VAR_3[0];
 VAR_4[2] = VAR_3[1];


 if (VAR_1->mdio_reset_gpio < 8)
  VAR_4[1] |= (1 << (VAR_1->mdio_reset_gpio % 8));
 else
  VAR_4[2] |= (1 << (VAR_1->mdio_reset_gpio % 8));


 VAR_5 = FUNC_1(VAR_0, VAR_1->mdio_reset_addr,
     VAR_4, sizeof(VAR_4));
 if (VAR_5)
  return VAR_5;


 if (VAR_1->mdio_reset_gpio < 8)
  VAR_4[1] &= ~(1 << (VAR_1->mdio_reset_gpio % 8));
 else
  VAR_4[2] &= ~(1 << (VAR_1->mdio_reset_gpio % 8));


 VAR_5 = FUNC_1(VAR_0, VAR_1->mdio_reset_addr,
     VAR_4, sizeof(VAR_4));

 return VAR_5;
}
