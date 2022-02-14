
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct imx8mq_usb_phy {int phy; int vbus; int base; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct imx8mq_usb_phy* FUNC_6 (struct device*,int,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device*,int *,int *) ;
 int FUNC_9 (struct device*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ,struct imx8mq_usb_phy*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct phy_provider *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct imx8mq_usb_phy *VAR_8;
 struct resource *VAR_9;

 VAR_8 = FUNC_6(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->clk = FUNC_4(VAR_7, "phy");
 if (FUNC_0(VAR_8->clk)) {
  FUNC_3(VAR_7, "failed to get imx8mq usb phy clock\n");
  return FUNC_1(VAR_8->clk);
 }

 VAR_9 = FUNC_11(VAR_5, VAR_2, 0);
 VAR_8->base = FUNC_5(VAR_7, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->phy = FUNC_8(VAR_7, ((void*)0), &VAR_3);
 if (FUNC_0(VAR_8->phy))
  return FUNC_1(VAR_8->phy);

 VAR_8->vbus = FUNC_9(VAR_7, "vbus");
 if (FUNC_0(VAR_8->vbus))
  return FUNC_1(VAR_8->vbus);

 FUNC_10(VAR_8->phy, VAR_8);

 VAR_6 = FUNC_7(VAR_7, VAR_4);

 return FUNC_2(VAR_6);
}
