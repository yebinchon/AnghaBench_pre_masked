
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pxa_usb_phy {int version; struct phy_provider* phy; struct phy_provider* base; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
typedef enum pxa_usb_phy_version { ____Placeholder_pxa_usb_phy_version } pxa_usb_phy_version ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct phy_provider* FUNC_4 (struct device*,struct resource*) ;
 struct pxa_usb_phy* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int *,int *) ;
 struct of_device_id* FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (struct phy_provider*,char*,char*) ;
 int FUNC_10 (struct phy_provider*,struct pxa_usb_phy*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct resource *VAR_9;
 struct pxa_usb_phy *VAR_10;
 struct phy_provider *VAR_11;
 const struct of_device_id *VAR_12;

 VAR_10 = FUNC_5(VAR_8, sizeof(struct pxa_usb_phy), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_8(VAR_5, VAR_8->of_node);
 if (VAR_12)
  VAR_10->version = (enum pxa_usb_phy_version)VAR_12->data;
 else
  VAR_10->version = VAR_3;

 VAR_9 = FUNC_11(VAR_7, VAR_2, 0);
 VAR_10->base = FUNC_4(VAR_8, VAR_9);
 if (FUNC_0(VAR_10->base)) {
  FUNC_2(VAR_8, "failed to remap PHY regs\n");
  return FUNC_1(VAR_10->base);
 }

 VAR_10->phy = FUNC_7(VAR_8, ((void*)0), &VAR_6);
 if (FUNC_0(VAR_10->phy)) {
  FUNC_2(VAR_8, "failed to create PHY\n");
  return FUNC_1(VAR_10->phy);
 }

 FUNC_10(VAR_10->phy, VAR_10);
 VAR_11 = FUNC_6(VAR_8, VAR_4);
 if (FUNC_0(VAR_11)) {
  FUNC_2(VAR_8, "failed to register PHY provider\n");
  return FUNC_1(VAR_11);
 }

 if (!VAR_8->of_node) {
  FUNC_9(VAR_10->phy, "usb", "mv-udc");
  FUNC_9(VAR_10->phy, "usb", "pxa-u2oehci");
  FUNC_9(VAR_10->phy, "usb", "mv-otg");
 }

 FUNC_3(VAR_8, "Marvell PXA USB PHY");
 return 0;
}
