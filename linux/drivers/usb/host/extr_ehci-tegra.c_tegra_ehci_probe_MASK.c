
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct usb_phy {TYPE_2__* otg; } ;
struct usb_otg {int dummy; } ;
struct TYPE_16__ {int controller; } ;
struct usb_hcd {int has_tt; int skip_phy_initialization; struct usb_phy* usb_phy; TYPE_3__ self; struct usb_phy* regs; int rsrc_len; int rsrc_start; } ;
struct tegra_ehci_soc_config {int has_hostpc; } ;
struct tegra_ehci_hcd {struct usb_phy* clk; int needs_double_reset; struct usb_phy* rst; } ;
struct resource {int start; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct tegra_ehci_soc_config* data; } ;
struct ehci_hcd {int has_hostpc; struct usb_phy* caps; scalar_t__ priv; } ;
struct TYPE_15__ {int host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct usb_phy*) ;
 int FUNC_2 (struct usb_phy*) ;
 int FUNC_3 (struct usb_phy*) ;
 int FUNC_4 (struct usb_phy*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 struct usb_phy* FUNC_8 (TYPE_1__*,int *) ;
 struct usb_phy* FUNC_9 (TYPE_1__*,struct resource*) ;
 TYPE_2__* FUNC_10 (TYPE_1__*,int,int ) ;
 struct usb_phy* FUNC_11 (TYPE_1__*,char*) ;
 struct usb_phy* FUNC_12 (TYPE_1__*,char*,int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (struct usb_hcd*) ;
 struct ehci_hcd* FUNC_15 (struct usb_hcd*) ;
 struct of_device_id* FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct usb_hcd*) ;
 int FUNC_22 (struct resource*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_23 (struct platform_device*) ;
 int FUNC_24 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_25 (int *,TYPE_1__*,int ) ;
 int FUNC_26 (struct usb_phy*) ;
 int FUNC_27 (struct usb_phy*,int ) ;
 int FUNC_28 (struct usb_phy*) ;
 int FUNC_29 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_8)
{
 const struct of_device_id *VAR_9;
 const struct tegra_ehci_soc_config *VAR_10;
 struct resource *VAR_11;
 struct usb_hcd *VAR_12;
 struct ehci_hcd *VAR_13;
 struct tegra_ehci_hcd *VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 struct usb_phy *VAR_17;

 VAR_9 = FUNC_16(VAR_7, &VAR_8->dev);
 if (!VAR_9) {
  FUNC_5(&VAR_8->dev, "Error: No device match found\n");
  return -VAR_0;
 }
 VAR_10 = VAR_9->data;





 VAR_15 = FUNC_13(&VAR_8->dev, FUNC_0(32));
 if (VAR_15)
  return VAR_15;

 VAR_12 = FUNC_25(&VAR_6, &VAR_8->dev,
     FUNC_6(&VAR_8->dev));
 if (!VAR_12) {
  FUNC_5(&VAR_8->dev, "Unable to create HCD\n");
  return -VAR_1;
 }
 FUNC_21(VAR_8, VAR_12);
 VAR_13 = FUNC_15(VAR_12);
 VAR_14 = (struct tegra_ehci_hcd *)VAR_13->priv;

 VAR_12->has_tt = 1;

 VAR_14->clk = FUNC_8(&VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_14->clk)) {
  FUNC_5(&VAR_8->dev, "Can't get ehci clock\n");
  VAR_15 = FUNC_2(VAR_14->clk);
  goto cleanup_hcd_create;
 }

 VAR_14->rst = FUNC_11(&VAR_8->dev, "usb");
 if (FUNC_1(VAR_14->rst)) {
  FUNC_5(&VAR_8->dev, "Can't get ehci reset\n");
  VAR_15 = FUNC_2(VAR_14->rst);
  goto cleanup_hcd_create;
 }

 VAR_15 = FUNC_4(VAR_14->clk);
 if (VAR_15)
  goto cleanup_hcd_create;

 VAR_15 = FUNC_23(VAR_8);
 if (VAR_15) {
  FUNC_5(&VAR_8->dev, "Failed to reset controller\n");
  goto cleanup_clk_en;
 }

 VAR_17 = FUNC_12(&VAR_8->dev, "nvidia,phy", 0);
 if (FUNC_1(VAR_17)) {
  VAR_15 = -VAR_2;
  goto cleanup_clk_en;
 }
 VAR_12->usb_phy = VAR_17;
 VAR_12->skip_phy_initialization = 1;

 VAR_14->needs_double_reset = FUNC_17(VAR_8->dev.of_node,
  "nvidia,needs-double-reset");

 VAR_11 = FUNC_20(VAR_8, VAR_4, 0);
 VAR_12->regs = FUNC_9(&VAR_8->dev, VAR_11);
 if (FUNC_1(VAR_12->regs)) {
  VAR_15 = FUNC_2(VAR_12->regs);
  goto cleanup_clk_en;
 }
 VAR_12->rsrc_start = VAR_11->start;
 VAR_12->rsrc_len = FUNC_22(VAR_11);

 VAR_13->caps = VAR_12->regs + 0x100;
 VAR_13->has_hostpc = VAR_10->has_hostpc;

 VAR_15 = FUNC_26(VAR_12->usb_phy);
 if (VAR_15) {
  FUNC_5(&VAR_8->dev, "Failed to initialize phy\n");
  goto cleanup_clk_en;
 }

 VAR_17->otg = FUNC_10(&VAR_8->dev, sizeof(struct usb_otg),
        VAR_3);
 if (!VAR_17->otg) {
  VAR_15 = -VAR_1;
  goto cleanup_phy;
 }
 VAR_17->otg->host = FUNC_14(VAR_12);

 VAR_15 = FUNC_27(VAR_12->usb_phy, 0);
 if (VAR_15) {
  FUNC_5(&VAR_8->dev, "Failed to power on the phy\n");
  goto cleanup_phy;
 }

 VAR_16 = FUNC_19(VAR_8, 0);
 if (!VAR_16) {
  FUNC_5(&VAR_8->dev, "Failed to get IRQ\n");
  VAR_15 = -VAR_0;
  goto cleanup_phy;
 }

 FUNC_18(VAR_17->otg, &VAR_12->self);

 VAR_15 = FUNC_24(VAR_12, VAR_16, VAR_5);
 if (VAR_15) {
  FUNC_5(&VAR_8->dev, "Failed to add USB HCD\n");
  goto cleanup_otg_set_host;
 }
 FUNC_7(VAR_12->self.controller);

 return VAR_15;

cleanup_otg_set_host:
 FUNC_18(VAR_17->otg, ((void*)0));
cleanup_phy:
 FUNC_28(VAR_12->usb_phy);
cleanup_clk_en:
 FUNC_3(VAR_14->clk);
cleanup_hcd_create:
 FUNC_29(VAR_12);
 return VAR_15;
}
