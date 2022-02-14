
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stm32_dwmac {TYPE_1__* ops; int regmap; int eth_clk_sel_reg; int eth_ref_clk_sel_reg; scalar_t__ mode_reg; } ;
struct plat_stmmacenet_data {int interface; struct stm32_dwmac* bsp_priv; } ;
struct TYPE_2__ {int syscfg_eth_mask; } ;


 int VAR_0 ;







 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct plat_stmmacenet_data *VAR_8)
{
 struct stm32_dwmac *VAR_9 = VAR_8->bsp_priv;
 u32 VAR_10 = VAR_9->mode_reg;
 int VAR_11, VAR_12;

 switch (VAR_8->interface) {
 case 133:
  VAR_11 = VAR_5;
  FUNC_0("SYSCFG init : PHY_INTERFACE_MODE_MII\n");
  break;
 case 134:
  VAR_11 = VAR_4;
  if (VAR_9->eth_clk_sel_reg)
   VAR_11 |= VAR_2;
  FUNC_0("SYSCFG init : PHY_INTERFACE_MODE_GMII\n");
  break;
 case 128:
  VAR_11 = VAR_7;
  if (VAR_9->eth_ref_clk_sel_reg)
   VAR_11 |= VAR_3;
  FUNC_0("SYSCFG init : PHY_INTERFACE_MODE_RMII\n");
  break;
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_11 = VAR_6;
  if (VAR_9->eth_clk_sel_reg)
   VAR_11 |= VAR_2;
  FUNC_0("SYSCFG init : PHY_INTERFACE_MODE_RGMII\n");
  break;
 default:
  FUNC_0("SYSCFG init :  Do not manage %d interface\n",
    VAR_8->interface);

  return -VAR_0;
 }


 VAR_12 = FUNC_2(VAR_9->regmap, VAR_10 + VAR_1,
      VAR_9->ops->syscfg_eth_mask);


 return FUNC_1(VAR_9->regmap, VAR_10,
     VAR_9->ops->syscfg_eth_mask, VAR_11);
}
