
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct bcm_ns_usb2 {int phy; int ref_clk; int dmu; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct bcm_ns_usb2* FUNC_6 (struct device*,int,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,struct bcm_ns_usb2*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,char*) ;
 int FUNC_11 (struct platform_device*,struct bcm_ns_usb2*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct bcm_ns_usb2 *VAR_7;
 struct resource *VAR_8;
 struct phy_provider *VAR_9;

 VAR_7 = FUNC_6(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->dev = VAR_6;

 VAR_8 = FUNC_10(VAR_5, VAR_2, "dmu");
 VAR_7->dmu = FUNC_5(VAR_6, VAR_8);
 if (FUNC_0(VAR_7->dmu)) {
  FUNC_3(VAR_6, "Failed to map DMU regs\n");
  return FUNC_1(VAR_7->dmu);
 }

 VAR_7->ref_clk = FUNC_4(VAR_6, "phy-ref-clk");
 if (FUNC_0(VAR_7->ref_clk)) {
  FUNC_3(VAR_6, "Clock not defined\n");
  return FUNC_1(VAR_7->ref_clk);
 }

 VAR_7->phy = FUNC_8(VAR_6, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_7->phy))
  return FUNC_1(VAR_7->phy);

 FUNC_9(VAR_7->phy, VAR_7);
 FUNC_11(VAR_5, VAR_7);

 VAR_9 = FUNC_7(VAR_6, VAR_3);
 return FUNC_2(VAR_9);
}
