
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct rockchip_emmc_phy {unsigned int reg_offset; int drive_impedance; struct regmap* reg_base; } ;
struct regmap {int dummy; } ;
struct device {int of_node; TYPE_1__* parent; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
typedef struct regmap phy ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_4 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct platform_device*,unsigned int) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct rockchip_emmc_phy* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 struct regmap* FUNC_7 (struct device*,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ,char*,unsigned int*) ;
 int VAR_6 ;
 int FUNC_9 (struct regmap*,struct rockchip_emmc_phy*) ;
 struct regmap* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct rockchip_emmc_phy *VAR_9;
 struct phy *VAR_10;
 struct phy_provider *VAR_11;
 struct regmap *VAR_12;
 unsigned int VAR_13;
 u32 VAR_14;

 if (!VAR_8->parent || !VAR_8->parent->of_node)
  return -VAR_1;

 VAR_12 = FUNC_10(VAR_8->parent->of_node);
 if (FUNC_0(VAR_12)) {
  FUNC_4(VAR_8, "Missing rockchip,grf property\n");
  return FUNC_1(VAR_12);
 }

 VAR_9 = FUNC_5(VAR_8, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 if (FUNC_8(VAR_8->of_node, "reg", &VAR_13)) {
  FUNC_4(VAR_8, "missing reg property in node %pOFn\n",
   VAR_8->of_node);
  return -VAR_0;
 }

 VAR_9->reg_offset = VAR_13;
 VAR_9->reg_base = VAR_12;
 VAR_9->drive_impedance = VAR_4;

 if (!FUNC_8(VAR_8->of_node, "drive-impedance-ohm", &VAR_14))
  VAR_9->drive_impedance = FUNC_3(VAR_7, VAR_14);

 VAR_10 = FUNC_7(VAR_8, VAR_8->of_node, &VAR_6);
 if (FUNC_0(VAR_10)) {
  FUNC_4(VAR_8, "failed to create PHY\n");
  return FUNC_1(VAR_10);
 }

 FUNC_9(VAR_10, VAR_9);
 VAR_11 = FUNC_6(VAR_8, VAR_5);

 return FUNC_2(VAR_11);
}
