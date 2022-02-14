
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct exynos_sata_phy {struct phy_provider* phyclk; struct phy_provider* phy; int client; struct phy_provider* pmureg; struct phy_provider* regs; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct phy_provider*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct exynos_sata_phy*) ;
 struct phy_provider* FUNC_6 (struct device*,char*) ;
 struct phy_provider* FUNC_7 (struct device*,struct resource*) ;
 struct exynos_sata_phy* FUNC_8 (struct device*,int,int ) ;
 struct phy_provider* FUNC_9 (struct device*,int ) ;
 struct phy_provider* FUNC_10 (struct device*,int *,int *) ;
 int VAR_5 ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (int ,char*,int ) ;
 int VAR_6 ;
 int FUNC_13 (struct phy_provider*,struct exynos_sata_phy*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 struct phy_provider* FUNC_15 (int ,char*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 struct exynos_sata_phy *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;
 struct resource *VAR_10;
 struct phy_provider *VAR_11;
 struct device_node *VAR_12;
 int VAR_13 = 0;

 VAR_8 = FUNC_8(VAR_9, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_14(VAR_7, VAR_4, 0);

 VAR_8->regs = FUNC_7(VAR_9, VAR_10);
 if (FUNC_0(VAR_8->regs))
  return FUNC_1(VAR_8->regs);

 VAR_8->pmureg = FUNC_15(VAR_9->of_node,
     "samsung,syscon-phandle");
 if (FUNC_0(VAR_8->pmureg)) {
  FUNC_4(VAR_9, "syscon regmap lookup failed.\n");
  return FUNC_1(VAR_8->pmureg);
 }

 VAR_12 = FUNC_12(VAR_9->of_node,
   "samsung,exynos-sataphy-i2c-phandle", 0);
 if (!VAR_12)
  return -VAR_0;

 VAR_8->client = FUNC_11(VAR_12);
 if (!VAR_8->client)
  return -VAR_2;

 FUNC_5(VAR_9, VAR_8);

 VAR_8->phyclk = FUNC_6(VAR_9, "sata_phyctrl");
 if (FUNC_0(VAR_8->phyclk)) {
  FUNC_4(VAR_9, "failed to get clk for PHY\n");
  return FUNC_1(VAR_8->phyclk);
 }

 VAR_13 = FUNC_3(VAR_8->phyclk);
 if (VAR_13 < 0) {
  FUNC_4(VAR_9, "failed to enable source clk\n");
  return VAR_13;
 }

 VAR_8->phy = FUNC_10(VAR_9, ((void*)0), &VAR_5);
 if (FUNC_0(VAR_8->phy)) {
  FUNC_2(VAR_8->phyclk);
  FUNC_4(VAR_9, "failed to create PHY\n");
  return FUNC_1(VAR_8->phy);
 }

 FUNC_13(VAR_8->phy, VAR_8);

 VAR_11 = FUNC_9(VAR_9,
     VAR_6);
 if (FUNC_0(VAR_11)) {
  FUNC_2(VAR_8->phyclk);
  return FUNC_1(VAR_11);
 }

 return 0;
}
