
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_provider {int dev; } ;
struct phy {int dev; } ;
struct device {int of_node; } ;
struct mdio_device {struct device dev; } ;


 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*) ;
 struct phy_provider* FUNC_5 (int *,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct phy_provider*,struct mdio_device*) ;

__attribute__((used)) static int FUNC_8(struct mdio_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct phy_provider *VAR_4;
 struct phy *VAR_5;

 VAR_5 = FUNC_6(VAR_3, VAR_3->of_node, &VAR_0);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_3, "failed to create Phy\n");
  return FUNC_1(VAR_5);
 }

 FUNC_7(VAR_5, VAR_2);

 VAR_4 = FUNC_5(&VAR_5->dev,
       VAR_1);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_3, "failed to register Phy provider\n");
  return FUNC_1(VAR_4);
 }

 FUNC_3(VAR_3, "%s PHY registered\n", FUNC_4(VAR_3));

 return 0;
}
