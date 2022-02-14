
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; struct da8xx_usb_phy_platform_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct da8xx_usb_phy_platform_data {void* cfgchip; } ;
struct da8xx_usb_phy {void* regmap; void* usb20_phy; void* usb11_phy; void* phy_provider; void* usb20_clk; void* usb11_clk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*) ;
 struct da8xx_usb_phy* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct device*,int ) ;
 void* FUNC_8 (struct device*,struct device_node*,int *) ;
 int FUNC_9 (void*,char*,char*) ;
 int FUNC_10 (void*,struct da8xx_usb_phy*) ;
 int FUNC_11 (struct platform_device*,struct da8xx_usb_phy*) ;
 int FUNC_12 (void*,int ,int ,int ) ;
 void* FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct da8xx_usb_phy_platform_data *VAR_8 = VAR_7->platform_data;
 struct device_node *VAR_9 = VAR_7->of_node;
 struct da8xx_usb_phy *VAR_10;

 VAR_10 = FUNC_6(VAR_7, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 if (VAR_8)
  VAR_10->regmap = VAR_8->cfgchip;
 else
  VAR_10->regmap = FUNC_13(
       "ti,da830-cfgchip");
 if (FUNC_1(VAR_10->regmap)) {
  FUNC_3(VAR_7, "Failed to get syscon\n");
  return FUNC_2(VAR_10->regmap);
 }

 VAR_10->usb11_clk = FUNC_5(VAR_7, "usb1_clk48");
 if (FUNC_1(VAR_10->usb11_clk)) {
  FUNC_3(VAR_7, "Failed to get usb1_clk48\n");
  return FUNC_2(VAR_10->usb11_clk);
 }

 VAR_10->usb20_clk = FUNC_5(VAR_7, "usb0_clk48");
 if (FUNC_1(VAR_10->usb20_clk)) {
  FUNC_3(VAR_7, "Failed to get usb0_clk48\n");
  return FUNC_2(VAR_10->usb20_clk);
 }

 VAR_10->usb11_phy = FUNC_8(VAR_7, VAR_9, &VAR_3);
 if (FUNC_1(VAR_10->usb11_phy)) {
  FUNC_3(VAR_7, "Failed to create usb11 phy\n");
  return FUNC_2(VAR_10->usb11_phy);
 }

 VAR_10->usb20_phy = FUNC_8(VAR_7, VAR_9, &VAR_4);
 if (FUNC_1(VAR_10->usb20_phy)) {
  FUNC_3(VAR_7, "Failed to create usb20 phy\n");
  return FUNC_2(VAR_10->usb20_phy);
 }

 FUNC_11(VAR_6, VAR_10);
 FUNC_10(VAR_10->usb11_phy, VAR_10);
 FUNC_10(VAR_10->usb20_phy, VAR_10);

 if (VAR_9) {
  VAR_10->phy_provider = FUNC_7(VAR_7,
       VAR_5);
  if (FUNC_1(VAR_10->phy_provider)) {
   FUNC_3(VAR_7, "Failed to create phy provider\n");
   return FUNC_2(VAR_10->phy_provider);
  }
 } else {
  int VAR_11;

  VAR_11 = FUNC_9(VAR_10->usb11_phy, "usb-phy",
     "ohci-da8xx");
  if (VAR_11)
   FUNC_4(VAR_7, "Failed to create usb11 phy lookup\n");
  VAR_11 = FUNC_9(VAR_10->usb20_phy, "usb-phy",
     "musb-da8xx");
  if (VAR_11)
   FUNC_4(VAR_7, "Failed to create usb20 phy lookup\n");
 }

 FUNC_12(VAR_10->regmap, FUNC_0(2),
     VAR_2, VAR_2);

 return 0;
}
