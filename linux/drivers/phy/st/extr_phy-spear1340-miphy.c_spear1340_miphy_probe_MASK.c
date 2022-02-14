
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear1340_miphy_priv {struct phy_provider* phy; struct phy_provider* misc; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct spear1340_miphy_priv*) ;
 struct spear1340_miphy_priv* FUNC_4 (struct device*,int,int ) ;
 struct phy_provider* FUNC_5 (struct device*,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int *,int *) ;
 int FUNC_7 (struct phy_provider*,struct spear1340_miphy_priv*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct phy_provider* FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct spear1340_miphy_priv *VAR_6;
 struct phy_provider *VAR_7;

 VAR_6 = FUNC_4(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->misc =
  FUNC_8(VAR_5->of_node, "misc");
 if (FUNC_0(VAR_6->misc)) {
  FUNC_2(VAR_5, "failed to find misc regmap\n");
  return FUNC_1(VAR_6->misc);
 }

 VAR_6->phy = FUNC_6(VAR_5, ((void*)0), &VAR_2);
 if (FUNC_0(VAR_6->phy)) {
  FUNC_2(VAR_5, "failed to create SATA PCIe PHY\n");
  return FUNC_1(VAR_6->phy);
 }

 FUNC_3(VAR_5, VAR_6);
 FUNC_7(VAR_6->phy, VAR_6);

 VAR_7 =
  FUNC_5(VAR_5, VAR_3);
 if (FUNC_0(VAR_7)) {
  FUNC_2(VAR_5, "failed to register phy provider\n");
  return FUNC_1(VAR_7);
 }

 return 0;
}
