
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_dwmac {TYPE_1__* ops; int regmap; int mode_reg; } ;
struct plat_stmmacenet_data {int interface; struct stm32_dwmac* bsp_priv; } ;
struct TYPE_2__ {int syscfg_eth_mask; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct plat_stmmacenet_data *VAR_3)
{
 struct stm32_dwmac *VAR_4 = VAR_3->bsp_priv;
 u32 VAR_5 = VAR_4->mode_reg;
 int VAR_6;

 switch (VAR_3->interface) {
 case 129:
  VAR_6 = VAR_1;
  FUNC_0("SYSCFG init : PHY_INTERFACE_MODE_MII\n");
  break;
 case 128:
  VAR_6 = VAR_2;
  FUNC_0("SYSCFG init : PHY_INTERFACE_MODE_RMII\n");
  break;
 default:
  FUNC_0("SYSCFG init :  Do not manage %d interface\n",
    VAR_3->interface);

  return -VAR_0;
 }

 return FUNC_1(VAR_4->regmap, VAR_5,
     VAR_4->ops->syscfg_eth_mask, VAR_6 << 23);
}
