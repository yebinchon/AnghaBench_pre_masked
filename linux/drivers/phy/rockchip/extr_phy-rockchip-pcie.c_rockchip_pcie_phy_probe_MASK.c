
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_pcie_phy {TYPE_2__* phys; struct regmap* clk_pciephy_ref; struct regmap* phy_rst; int pcie_mutex; struct regmap* reg_base; struct rockchip_pcie_data* phy_data; } ;
struct rockchip_pcie_data {int dummy; } ;
struct regmap {int dummy; } ;
struct device {int of_node; TYPE_1__* parent; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_4__ {int index; struct regmap* phy; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_5 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct regmap* FUNC_5 (struct device*,char*) ;
 struct rockchip_pcie_phy* FUNC_6 (struct device*,int,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int ) ;
 struct regmap* FUNC_8 (struct device*,int ,int *) ;
 struct regmap* FUNC_9 (struct device*,char*) ;
 int FUNC_10 (int *) ;
 struct of_device_id* FUNC_11 (int ,struct device*) ;
 scalar_t__ FUNC_12 (int ,char*,int*) ;
 int VAR_6 ;
 int FUNC_13 (struct regmap*,TYPE_2__*) ;
 int FUNC_14 (struct platform_device*,struct rockchip_pcie_phy*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct regmap* FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct rockchip_pcie_phy *VAR_11;
 struct phy_provider *VAR_12;
 struct regmap *VAR_13;
 const struct of_device_id *VAR_14;
 int VAR_15;
 u32 VAR_16;

 VAR_13 = FUNC_15(VAR_10->parent->of_node);
 if (FUNC_0(VAR_13)) {
  FUNC_4(VAR_10, "Cannot find GRF syscon\n");
  return FUNC_1(VAR_13);
 }

 VAR_11 = FUNC_6(VAR_10, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_14 = FUNC_11(VAR_7, &VAR_9->dev);
 if (!VAR_14)
  return -VAR_0;

 VAR_11->phy_data = (struct rockchip_pcie_data *)VAR_14->data;
 VAR_11->reg_base = VAR_13;

 FUNC_10(&VAR_11->pcie_mutex);

 VAR_11->phy_rst = FUNC_9(VAR_10, "phy");
 if (FUNC_0(VAR_11->phy_rst)) {
  if (FUNC_1(VAR_11->phy_rst) != -VAR_3)
   FUNC_4(VAR_10,
    "missing phy property for reset controller\n");
  return FUNC_1(VAR_11->phy_rst);
 }

 VAR_11->clk_pciephy_ref = FUNC_5(VAR_10, "refclk");
 if (FUNC_0(VAR_11->clk_pciephy_ref)) {
  FUNC_4(VAR_10, "refclk not found.\n");
  return FUNC_1(VAR_11->clk_pciephy_ref);
 }


 if (FUNC_12(VAR_10->of_node, "#phy-cells", &VAR_16))
  return -VAR_1;

 VAR_16 = (VAR_16 == 0) ? 1 : VAR_5;
 FUNC_3(VAR_10, "phy number is %d\n", VAR_16);

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  VAR_11->phys[VAR_15].phy = FUNC_8(VAR_10, VAR_10->of_node, &VAR_6);
  if (FUNC_0(VAR_11->phys[VAR_15].phy)) {
   FUNC_4(VAR_10, "failed to create PHY%d\n", VAR_15);
   return FUNC_1(VAR_11->phys[VAR_15].phy);
  }
  VAR_11->phys[VAR_15].index = VAR_15;
  FUNC_13(VAR_11->phys[VAR_15].phy, &VAR_11->phys[VAR_15]);
 }

 FUNC_14(VAR_9, VAR_11);
 VAR_12 = FUNC_7(VAR_10,
     VAR_8);

 return FUNC_2(VAR_12);
}
