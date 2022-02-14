
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stih407_usb2_picophy {struct phy_provider* phy; int ctrl; int param; struct phy_provider* regmap; struct phy_provider* rstport; struct phy_provider* rstc; struct device* dev; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct stih407_usb2_picophy*) ;
 struct stih407_usb2_picophy* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int *,int *) ;
 struct phy_provider* FUNC_8 (struct device*,char*) ;
 struct phy_provider* FUNC_9 (struct device*,char*) ;
 int VAR_4 ;
 int FUNC_10 (struct device_node*,char*,int ,int *) ;
 int FUNC_11 (struct phy_provider*,struct stih407_usb2_picophy*) ;
 int FUNC_12 (struct phy_provider*) ;
 int VAR_5 ;
 struct phy_provider* FUNC_13 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct stih407_usb2_picophy *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 struct phy_provider *VAR_10;
 struct phy *VAR_11;
 int VAR_12;

 VAR_7 = FUNC_5(VAR_8, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_8;
 FUNC_4(VAR_8, VAR_7);

 VAR_7->rstc = FUNC_9(VAR_8, "global");
 if (FUNC_0(VAR_7->rstc)) {
  FUNC_2(VAR_8, "failed to ctrl picoPHY reset\n");
  return FUNC_1(VAR_7->rstc);
 }

 VAR_7->rstport = FUNC_8(VAR_8, "port");
 if (FUNC_0(VAR_7->rstport)) {
  FUNC_2(VAR_8, "failed to ctrl picoPHY reset\n");
  return FUNC_1(VAR_7->rstport);
 }


 FUNC_12(VAR_7->rstport);

 VAR_7->regmap = FUNC_13(VAR_9, "st,syscfg");
 if (FUNC_0(VAR_7->regmap)) {
  FUNC_2(VAR_8, "No syscfg phandle specified\n");
  return FUNC_1(VAR_7->regmap);
 }

 VAR_12 = FUNC_10(VAR_9, "st,syscfg", VAR_3,
     &VAR_7->param);
 if (VAR_12) {
  FUNC_2(VAR_8, "can't get phyparam offset (%d)\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_10(VAR_9, "st,syscfg", VAR_2,
     &VAR_7->ctrl);
 if (VAR_12) {
  FUNC_2(VAR_8, "can't get phyctrl offset (%d)\n", VAR_12);
  return VAR_12;
 }

 VAR_11 = FUNC_7(VAR_8, ((void*)0), &VAR_5);
 if (FUNC_0(VAR_11)) {
  FUNC_2(VAR_8, "failed to create Display Port PHY\n");
  return FUNC_1(VAR_11);
 }

 VAR_7->phy = VAR_11;
 FUNC_11(VAR_11, VAR_7);

 VAR_10 = FUNC_6(VAR_8, VAR_4);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_3(VAR_8, "STiH407 USB Generic picoPHY driver probed!");

 return 0;
}
