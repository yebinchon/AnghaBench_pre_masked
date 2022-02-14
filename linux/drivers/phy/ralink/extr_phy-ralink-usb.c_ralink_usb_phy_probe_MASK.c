
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct ralink_usb_phy {uintptr_t clk; int * phy; int * rstdev; int * rsthost; int * base; int * sysctl; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 int * FUNC_4 (struct device*,struct resource*) ;
 struct ralink_usb_phy* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 int * FUNC_7 (struct device*,int *,int *) ;
 void* FUNC_8 (struct device*,char*) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 struct of_device_id* FUNC_10 (int ,struct device*) ;
 int VAR_4 ;
 int FUNC_11 (int *,struct ralink_usb_phy*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct resource *VAR_9;
 struct phy_provider *VAR_10;
 const struct of_device_id *VAR_11;
 struct ralink_usb_phy *VAR_12;

 VAR_11 = FUNC_10(VAR_5, &VAR_7->dev);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_8, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->clk = (uintptr_t)VAR_11->data;
 VAR_12->base = ((void*)0);

 VAR_12->sysctl = FUNC_13(VAR_8->of_node, "ralink,sysctl");
 if (FUNC_0(VAR_12->sysctl)) {
  FUNC_3(VAR_8, "failed to get sysctl registers\n");
  return FUNC_1(VAR_12->sysctl);
 }


 if (FUNC_9(VAR_8->of_node, "mediatek,mt7628-usbphy")) {
  VAR_9 = FUNC_12(VAR_7, VAR_3, 0);
  VAR_12->base = FUNC_4(&VAR_7->dev, VAR_9);
  if (FUNC_0(VAR_12->base)) {
   FUNC_3(VAR_8, "failed to remap register memory\n");
   return FUNC_1(VAR_12->base);
  }
 }

 VAR_12->rsthost = FUNC_8(&VAR_7->dev, "host");
 if (FUNC_0(VAR_12->rsthost)) {
  FUNC_3(VAR_8, "host reset is missing\n");
  return FUNC_1(VAR_12->rsthost);
 }

 VAR_12->rstdev = FUNC_8(&VAR_7->dev, "device");
 if (FUNC_0(VAR_12->rstdev)) {
  FUNC_3(VAR_8, "device reset is missing\n");
  return FUNC_1(VAR_12->rstdev);
 }

 VAR_12->phy = FUNC_7(VAR_8, ((void*)0), &VAR_6);
 if (FUNC_0(VAR_12->phy)) {
  FUNC_3(VAR_8, "failed to create PHY\n");
  return FUNC_1(VAR_12->phy);
 }
 FUNC_11(VAR_12->phy, VAR_12);

 VAR_10 = FUNC_6(VAR_8, VAR_4);

 return FUNC_2(VAR_10);
}
