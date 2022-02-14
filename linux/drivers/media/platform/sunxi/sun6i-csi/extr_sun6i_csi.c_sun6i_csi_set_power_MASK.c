
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_csi_dev {int clk_mod; int clk_ram; struct device* dev; int rstc_bus; struct regmap* regmap; } ;
struct sun6i_csi {int dummy; } ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct device*,char*,int) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (struct regmap*,int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct sun6i_csi_dev* FUNC_9 (struct sun6i_csi*) ;

int FUNC_10(struct sun6i_csi *VAR_2, bool VAR_3)
{
 struct sun6i_csi_dev *VAR_4 = FUNC_9(VAR_2);
 struct device *VAR_5 = VAR_4->dev;
 struct regmap *VAR_6 = VAR_4->regmap;
 int VAR_7;

 if (!VAR_3) {
  FUNC_6(VAR_6, VAR_1, VAR_0, 0);

  FUNC_0(VAR_4->clk_ram);
  if (FUNC_5(VAR_5->of_node,
         "allwinner,sun50i-a64-csi"))
   FUNC_2(VAR_4->clk_mod);
  FUNC_0(VAR_4->clk_mod);
  FUNC_7(VAR_4->rstc_bus);
  return 0;
 }

 VAR_7 = FUNC_1(VAR_4->clk_mod);
 if (VAR_7) {
  FUNC_4(VAR_4->dev, "Enable csi clk err %d\n", VAR_7);
  return VAR_7;
 }

 if (FUNC_5(VAR_5->of_node, "allwinner,sun50i-a64-csi"))
  FUNC_3(VAR_4->clk_mod, 300000000);

 VAR_7 = FUNC_1(VAR_4->clk_ram);
 if (VAR_7) {
  FUNC_4(VAR_4->dev, "Enable clk_dram_csi clk err %d\n", VAR_7);
  goto clk_mod_disable;
 }

 VAR_7 = FUNC_8(VAR_4->rstc_bus);
 if (VAR_7) {
  FUNC_4(VAR_4->dev, "reset err %d\n", VAR_7);
  goto clk_ram_disable;
 }

 FUNC_6(VAR_6, VAR_1, VAR_0, VAR_0);

 return 0;

clk_ram_disable:
 FUNC_0(VAR_4->clk_ram);
clk_mod_disable:
 if (FUNC_5(VAR_5->of_node, "allwinner,sun50i-a64-csi"))
  FUNC_2(VAR_4->clk_mod);
 FUNC_0(VAR_4->clk_mod);
 return VAR_7;
}
