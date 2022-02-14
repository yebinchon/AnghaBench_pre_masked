
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
typedef struct regmap phy_provider ;
typedef struct regmap phy ;
struct exynos5_usbdrd_phy_drvdata {int * phy_cfg; int pmu_offset_usbdrd0_phy; int pmu_offset_usbdrd1_phy; } ;
struct exynos5_usbdrd_phy {struct device* dev; TYPE_1__* phys; struct regmap* vbus_boost; struct regmap* vbus; struct exynos5_usbdrd_phy_drvdata const* drv_data; struct regmap* reg_phy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int index; int * phy_cfg; int pmu_offset; struct regmap* reg_pmu; struct regmap* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct exynos5_usbdrd_phy*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 struct regmap* FUNC_7 (struct device*,struct resource*) ;
 struct exynos5_usbdrd_phy* FUNC_8 (struct device*,int,int ) ;
 struct regmap* FUNC_9 (struct device*,int ) ;
 struct regmap* FUNC_10 (struct device*,int *,int *) ;
 void* FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct exynos5_usbdrd_phy*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (struct device_node*,char*) ;
 struct exynos5_usbdrd_phy_drvdata* FUNC_14 (struct device*) ;
 int FUNC_15 (struct regmap*,TYPE_1__*) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 struct regmap* FUNC_17 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct exynos5_usbdrd_phy *VAR_11;
 struct phy_provider *VAR_12;
 struct resource *VAR_13;
 const struct exynos5_usbdrd_phy_drvdata *VAR_14;
 struct regmap *VAR_15;
 u32 VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 VAR_11 = FUNC_8(VAR_9, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_1;

 FUNC_4(VAR_9, VAR_11);
 VAR_11->dev = VAR_9;

 VAR_13 = FUNC_16(VAR_8, VAR_5, 0);
 VAR_11->reg_phy = FUNC_7(VAR_9, VAR_13);
 if (FUNC_0(VAR_11->reg_phy))
  return FUNC_1(VAR_11->reg_phy);

 VAR_14 = FUNC_14(VAR_9);
 if (!VAR_14)
  return -VAR_0;

 VAR_11->drv_data = VAR_14;

 VAR_18 = FUNC_12(VAR_11);
 if (VAR_18) {
  FUNC_3(VAR_9, "Failed to initialize clocks\n");
  return VAR_18;
 }

 VAR_15 = FUNC_17(VAR_9->of_node,
         "samsung,pmu-syscon");
 if (FUNC_0(VAR_15)) {
  FUNC_3(VAR_9, "Failed to lookup PMU regmap\n");
  return FUNC_1(VAR_15);
 }






 VAR_19 = FUNC_13(VAR_10, "usbdrdphy");
 if (VAR_19 < 0)
  FUNC_2(VAR_9, "Not a multi-controller usbdrd phy\n");

 switch (VAR_19) {
 case 1:
  VAR_16 = VAR_11->drv_data->pmu_offset_usbdrd1_phy;
  break;
 case 0:
 default:
  VAR_16 = VAR_11->drv_data->pmu_offset_usbdrd0_phy;
  break;
 }


 VAR_11->vbus = FUNC_11(VAR_9, "vbus");
 if (FUNC_0(VAR_11->vbus)) {
  VAR_18 = FUNC_1(VAR_11->vbus);
  if (VAR_18 == -VAR_2)
   return VAR_18;

  FUNC_6(VAR_9, "Failed to get VBUS supply regulator\n");
  VAR_11->vbus = ((void*)0);
 }

 VAR_11->vbus_boost = FUNC_11(VAR_9, "vbus-boost");
 if (FUNC_0(VAR_11->vbus_boost)) {
  VAR_18 = FUNC_1(VAR_11->vbus_boost);
  if (VAR_18 == -VAR_2)
   return VAR_18;

  FUNC_6(VAR_9, "Failed to get VBUS boost supply regulator\n");
  VAR_11->vbus_boost = ((void*)0);
 }

 FUNC_5(VAR_9, "Creating usbdrd_phy phy\n");

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  struct phy *VAR_20 = FUNC_10(VAR_9, ((void*)0),
        &VAR_6);
  if (FUNC_0(VAR_20)) {
   FUNC_3(VAR_9, "Failed to create usbdrd_phy phy\n");
   return FUNC_1(VAR_20);
  }

  VAR_11->phys[VAR_17].phy = VAR_20;
  VAR_11->phys[VAR_17].index = VAR_17;
  VAR_11->phys[VAR_17].reg_pmu = VAR_15;
  VAR_11->phys[VAR_17].pmu_offset = VAR_16;
  VAR_11->phys[VAR_17].phy_cfg = &VAR_14->phy_cfg[VAR_17];
  FUNC_15(VAR_20, &VAR_11->phys[VAR_17]);
 }

 VAR_12 = FUNC_9(VAR_9,
           VAR_7);
 if (FUNC_0(VAR_12)) {
  FUNC_3(VAR_11->dev, "Failed to register phy provider\n");
  return FUNC_1(VAR_12);
 }

 return 0;
}
