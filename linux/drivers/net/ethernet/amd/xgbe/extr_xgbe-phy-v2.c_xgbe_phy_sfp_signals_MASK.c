
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xgbe_prv_data {int netdev; int dev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int sfp_gpio_inputs; int sfp_mod_absent; int sfp_gpio_address; } ;
typedef int gpio_reg ;
typedef int gpio_ports ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xgbe_phy_data*) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int*,int,int*,int) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_phy_data *VAR_1 = VAR_0->phy_data;
 u8 VAR_2, VAR_3[2];
 int VAR_4;


 VAR_2 = 0;
 VAR_4 = FUNC_3(VAR_0, VAR_1->sfp_gpio_address,
    &VAR_2, sizeof(VAR_2),
    VAR_3, sizeof(VAR_3));
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "%s: I2C error reading SFP GPIOs\n",
        FUNC_1(VAR_0->netdev));
  return;
 }

 VAR_1->sfp_gpio_inputs = (VAR_3[1] << 8) | VAR_3[0];

 VAR_1->sfp_mod_absent = FUNC_2(VAR_1);
}
