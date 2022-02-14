
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear1310_miphy_priv {struct phy_provider* phy; int id; struct phy_provider* misc; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct spear1310_miphy_priv*) ;
 struct spear1310_miphy_priv* FUNC_4 (struct device*,int,int ) ;
 struct phy_provider* FUNC_5 (struct device*,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int *,int *) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (struct phy_provider*,struct spear1310_miphy_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct phy_provider* FUNC_9 (int ,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct spear1310_miphy_priv *VAR_7;
 struct phy_provider *VAR_8;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->misc =
  FUNC_9(VAR_6->of_node, "misc");
 if (FUNC_0(VAR_7->misc)) {
  FUNC_2(VAR_6, "failed to find misc regmap\n");
  return FUNC_1(VAR_7->misc);
 }

 if (FUNC_7(VAR_6->of_node, "phy-id", &VAR_7->id)) {
  FUNC_2(VAR_6, "failed to find phy id\n");
  return -VAR_0;
 }

 VAR_7->phy = FUNC_6(VAR_6, ((void*)0), &VAR_3);
 if (FUNC_0(VAR_7->phy)) {
  FUNC_2(VAR_6, "failed to create SATA PCIe PHY\n");
  return FUNC_1(VAR_7->phy);
 }

 FUNC_3(VAR_6, VAR_7);
 FUNC_8(VAR_7->phy, VAR_7);

 VAR_8 =
  FUNC_5(VAR_6, VAR_4);
 if (FUNC_0(VAR_8)) {
  FUNC_2(VAR_6, "failed to register phy provider\n");
  return FUNC_1(VAR_8);
 }

 return 0;
}
