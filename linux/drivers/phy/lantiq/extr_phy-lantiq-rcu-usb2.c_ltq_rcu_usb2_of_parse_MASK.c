
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct ltq_rcu_usb2_priv {int phy_reset; int ctrl_reset; int phy_gate_clk; void* ana_cfg1_reg_offset; TYPE_2__* reg_bits; void* phy_reg_offset; int regmap; struct device* dev; } ;
struct device {TYPE_1__* of_node; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ have_ana_cfg; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int const) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*) ;
 TYPE_2__* FUNC_8 (struct device*) ;
 int * FUNC_9 (TYPE_1__*,int,int *,int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ltq_rcu_usb2_priv *VAR_2,
     struct platform_device *VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;
 const __be32 *VAR_5;

 VAR_2->reg_bits = FUNC_8(VAR_4);

 VAR_2->regmap = FUNC_10(VAR_4->of_node->parent);
 if (FUNC_0(VAR_2->regmap)) {
  FUNC_4(VAR_4, "Failed to lookup RCU regmap\n");
  return FUNC_1(VAR_2->regmap);
 }

 VAR_5 = FUNC_9(VAR_4->of_node, 0, ((void*)0), ((void*)0));
 if (!VAR_5) {
  FUNC_4(VAR_4, "Failed to get RCU PHY reg offset\n");
  return -VAR_0;
 }
 VAR_2->phy_reg_offset = FUNC_3(*VAR_5);

 if (VAR_2->reg_bits->have_ana_cfg) {
  VAR_5 = FUNC_9(VAR_4->of_node, 1, ((void*)0), ((void*)0));
  if (!VAR_5) {
   FUNC_4(VAR_4, "Failed to get RCU ANA CFG1 reg offset\n");
   return -VAR_0;
  }
  VAR_2->ana_cfg1_reg_offset = FUNC_3(*VAR_5);
 }

 VAR_2->phy_gate_clk = FUNC_5(VAR_4, "phy");
 if (FUNC_0(VAR_2->phy_gate_clk)) {
  FUNC_4(VAR_4, "Unable to get USB phy gate clk\n");
  return FUNC_1(VAR_2->phy_gate_clk);
 }

 VAR_2->ctrl_reset = FUNC_7(VAR_4, "ctrl");
 if (FUNC_0(VAR_2->ctrl_reset)) {
  if (FUNC_1(VAR_2->ctrl_reset) != -VAR_1)
   FUNC_4(VAR_4, "failed to get 'ctrl' reset\n");
  return FUNC_1(VAR_2->ctrl_reset);
 }

 VAR_2->phy_reset = FUNC_6(VAR_4, "phy");

 return FUNC_2(VAR_2->phy_reset);
}
