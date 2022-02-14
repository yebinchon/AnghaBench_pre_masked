
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct phy_provider {int dummy; } ;
struct phy_meson8b_usb2_priv {scalar_t__ dr_mode; struct phy* reset; struct phy* clk_usb; struct phy* clk_usb_general; struct phy* regs; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 void* FUNC_4 (TYPE_1__*,char*) ;
 struct phy* FUNC_5 (TYPE_1__*,struct resource*) ;
 struct phy_meson8b_usb2_priv* FUNC_6 (TYPE_1__*,int,int ) ;
 struct phy_provider* FUNC_7 (TYPE_1__*,int ) ;
 struct phy* FUNC_8 (TYPE_1__*,int *,int *) ;
 struct phy* FUNC_9 (TYPE_1__*,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,int) ;
 int VAR_7 ;
 int FUNC_11 (struct phy*,struct phy_meson8b_usb2_priv*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct phy_meson8b_usb2_priv *VAR_9;
 struct resource *VAR_10;
 struct phy *VAR_11;
 struct phy_provider *VAR_12;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_12(VAR_8, VAR_4, 0);
 VAR_9->regs = FUNC_5(&VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_9->regs))
  return FUNC_1(VAR_9->regs);

 VAR_9->clk_usb_general = FUNC_4(&VAR_8->dev, "usb_general");
 if (FUNC_0(VAR_9->clk_usb_general))
  return FUNC_1(VAR_9->clk_usb_general);

 VAR_9->clk_usb = FUNC_4(&VAR_8->dev, "usb");
 if (FUNC_0(VAR_9->clk_usb))
  return FUNC_1(VAR_9->clk_usb);

 VAR_9->reset = FUNC_9(&VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_9->reset) == -VAR_2)
  return FUNC_1(VAR_9->reset);

 VAR_9->dr_mode = FUNC_10(VAR_8->dev.of_node, -1);
 if (VAR_9->dr_mode == VAR_5) {
  FUNC_3(&VAR_8->dev,
   "missing dual role configuration of the controller\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_8(&VAR_8->dev, ((void*)0), &VAR_7);
 if (FUNC_0(VAR_11)) {
  FUNC_3(&VAR_8->dev, "failed to create PHY\n");
  return FUNC_1(VAR_11);
 }

 FUNC_11(VAR_11, VAR_9);

 VAR_12 =
  FUNC_7(&VAR_8->dev, VAR_6);

 return FUNC_2(VAR_12);
}
