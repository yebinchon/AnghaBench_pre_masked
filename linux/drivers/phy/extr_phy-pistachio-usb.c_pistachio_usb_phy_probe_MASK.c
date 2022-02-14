
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pistachio_usb_phy {TYPE_1__* dev; int refclk; struct phy_provider* phy_clk; struct phy_provider* cr_top; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct phy_provider* FUNC_3 (TYPE_1__*,char*) ;
 struct pistachio_usb_phy* FUNC_4 (TYPE_1__*,int,int ) ;
 struct phy_provider* FUNC_5 (TYPE_1__*,int ) ;
 struct phy_provider* FUNC_6 (TYPE_1__*,int *,int *) ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (struct phy_provider*,struct pistachio_usb_phy*) ;
 int VAR_3 ;
 int FUNC_9 (struct platform_device*,struct pistachio_usb_phy*) ;
 struct phy_provider* FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct pistachio_usb_phy *VAR_5;
 struct phy_provider *VAR_6;
 struct phy *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->dev = &VAR_4->dev;
 FUNC_9(VAR_4, VAR_5);

 VAR_5->cr_top = FUNC_10(VAR_5->dev->of_node,
       "img,cr-top");
 if (FUNC_0(VAR_5->cr_top)) {
  FUNC_2(VAR_5->dev, "Failed to get CR_TOP registers: %ld\n",
   FUNC_1(VAR_5->cr_top));
  return FUNC_1(VAR_5->cr_top);
 }

 VAR_5->phy_clk = FUNC_3(VAR_5->dev, "usb_phy");
 if (FUNC_0(VAR_5->phy_clk)) {
  FUNC_2(VAR_5->dev, "Failed to get usb_phy clock: %ld\n",
   FUNC_1(VAR_5->phy_clk));
  return FUNC_1(VAR_5->phy_clk);
 }

 VAR_8 = FUNC_7(VAR_5->dev->of_node, "img,refclk",
       &VAR_5->refclk);
 if (VAR_8 < 0) {
  FUNC_2(VAR_5->dev, "No reference clock selector specified\n");
  return VAR_8;
 }

 VAR_7 = FUNC_6(VAR_5->dev, ((void*)0), &VAR_3);
 if (FUNC_0(VAR_7)) {
  FUNC_2(VAR_5->dev, "Failed to create PHY: %ld\n",
   FUNC_1(VAR_7));
  return FUNC_1(VAR_7);
 }
 FUNC_8(VAR_7, VAR_5);

 VAR_6 = FUNC_5(VAR_5->dev,
       VAR_2);
 if (FUNC_0(VAR_6)) {
  FUNC_2(VAR_5->dev, "Failed to register PHY provider: %ld\n",
   FUNC_1(VAR_6));
  return FUNC_1(VAR_6);
 }

 return 0;
}
