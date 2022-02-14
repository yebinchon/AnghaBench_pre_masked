
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miphy28lp_phy {int miphy_rst; struct miphy28lp_dev* phydev; } ;
struct miphy28lp_dev {int dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_0,
      struct miphy28lp_phy *VAR_1)
{
 struct miphy28lp_dev *VAR_2 = VAR_1->phydev;
 int VAR_3;

 VAR_1->miphy_rst =
  FUNC_3(VAR_0, "miphy-sw-rst");

 if (FUNC_0(VAR_1->miphy_rst)) {
  FUNC_2(VAR_2->dev,
    "miphy soft reset control not defined\n");
  return FUNC_1(VAR_1->miphy_rst);
 }

 VAR_3 = FUNC_4(VAR_1->miphy_rst);
 if (VAR_3) {
  FUNC_2(VAR_2->dev, "unable to bring out of miphy reset\n");
  return VAR_3;
 }

 return 0;
}
