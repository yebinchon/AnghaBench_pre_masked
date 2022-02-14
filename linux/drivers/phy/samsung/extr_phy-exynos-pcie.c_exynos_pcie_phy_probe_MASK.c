
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct exynos_pcie_phy_data {int ops; } ;
struct exynos_pcie_phy {struct exynos_pcie_phy_data const* drv_data; struct phy* blk_base; struct phy* phy_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 struct exynos_pcie_phy* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 struct phy* FUNC_7 (struct device*,int ,int ) ;
 struct exynos_pcie_phy_data* FUNC_8 (struct device*) ;
 int VAR_4 ;
 int FUNC_9 (struct phy*,struct exynos_pcie_phy*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct exynos_pcie_phy *VAR_7;
 struct phy *VAR_8;
 struct phy_provider *VAR_9;
 struct resource *VAR_10;
 const struct exynos_pcie_phy_data *VAR_11;

 VAR_11 = FUNC_8(VAR_6);
 if (!VAR_11)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_10 = FUNC_10(VAR_5, VAR_3, 0);
 VAR_7->phy_base = FUNC_4(VAR_6, VAR_10);
 if (FUNC_0(VAR_7->phy_base))
  return FUNC_1(VAR_7->phy_base);

 VAR_10 = FUNC_10(VAR_5, VAR_3, 1);
 VAR_7->blk_base = FUNC_4(VAR_6, VAR_10);
 if (FUNC_0(VAR_7->blk_base))
  return FUNC_1(VAR_7->blk_base);

 VAR_7->drv_data = VAR_11;

 VAR_8 = FUNC_7(VAR_6, VAR_6->of_node, VAR_11->ops);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_6, "failed to create PHY\n");
  return FUNC_1(VAR_8);
 }

 FUNC_9(VAR_8, VAR_7);
 VAR_9 = FUNC_6(VAR_6, VAR_4);

 return FUNC_2(VAR_9);
}
