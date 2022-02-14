
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; int regs; int rsrc_len; int rsrc_start; } ;
struct resource {int start; } ;
struct TYPE_13__ {int * of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct exynos_ehci_hcd {int clk; int * of_node; scalar_t__ legacy_phy; } ;
struct ehci_hcd {int caps; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,struct resource*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,struct exynos_ehci_hcd*) ;
 int VAR_5 ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 struct ehci_hcd* FUNC_16 (struct usb_hcd*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct usb_hcd*) ;
 int FUNC_20 (struct resource*) ;
 struct exynos_ehci_hcd* FUNC_21 (struct usb_hcd*) ;
 int FUNC_22 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_23 (int *,TYPE_2__*,int ) ;
 int FUNC_24 (struct usb_hcd*) ;
 int FUNC_25 (int ,int ) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_6)
{
 struct exynos_ehci_hcd *VAR_7;
 struct usb_hcd *VAR_8;
 struct ehci_hcd *VAR_9;
 struct resource *VAR_10;
 int VAR_11;
 int VAR_12;






 VAR_12 = FUNC_11(&VAR_6->dev, FUNC_0(32));
 if (VAR_12)
  return VAR_12;

 FUNC_15(&VAR_6->dev);

 VAR_8 = FUNC_23(&VAR_5,
        &VAR_6->dev, FUNC_7(&VAR_6->dev));
 if (!VAR_8) {
  FUNC_6(&VAR_6->dev, "Unable to create HCD\n");
  return -VAR_2;
 }
 VAR_7 = FUNC_21(VAR_8);

 VAR_12 = FUNC_12(&VAR_6->dev, VAR_7);
 if (VAR_12)
  goto fail_clk;

 VAR_7->clk = FUNC_9(&VAR_6->dev, "usbhost");

 if (FUNC_2(VAR_7->clk)) {
  FUNC_6(&VAR_6->dev, "Failed to get usbhost clock\n");
  VAR_12 = FUNC_3(VAR_7->clk);
  goto fail_clk;
 }

 VAR_12 = FUNC_5(VAR_7->clk);
 if (VAR_12)
  goto fail_clk;

 VAR_10 = FUNC_18(VAR_6, VAR_3, 0);
 VAR_8->regs = FUNC_10(&VAR_6->dev, VAR_10);
 if (FUNC_2(VAR_8->regs)) {
  VAR_12 = FUNC_3(VAR_8->regs);
  goto fail_io;
 }

 VAR_8->rsrc_start = VAR_10->start;
 VAR_8->rsrc_len = FUNC_20(VAR_10);

 VAR_11 = FUNC_17(VAR_6, 0);
 if (!VAR_11) {
  FUNC_6(&VAR_6->dev, "Failed to get IRQ\n");
  VAR_12 = -VAR_1;
  goto fail_io;
 }

 VAR_12 = FUNC_14(&VAR_6->dev);
 if (VAR_12) {
  FUNC_6(&VAR_6->dev, "Failed to enable USB phy\n");
  goto fail_io;
 }

 VAR_9 = FUNC_16(VAR_8);
 VAR_9->caps = VAR_8->regs;





 VAR_7->of_node = VAR_6->dev.of_node;
 if (VAR_7->legacy_phy)
  VAR_6->dev.of_node = ((void*)0);


 FUNC_25(VAR_0, FUNC_1(VAR_8->regs));

 VAR_12 = FUNC_22(VAR_8, VAR_11, VAR_4);
 if (VAR_12) {
  FUNC_6(&VAR_6->dev, "Failed to add USB HCD\n");
  goto fail_add_hcd;
 }
 FUNC_8(VAR_8->self.controller);

 FUNC_19(VAR_6, VAR_8);

 return 0;

fail_add_hcd:
 FUNC_13(&VAR_6->dev);
 VAR_6->dev.of_node = VAR_7->of_node;
fail_io:
 FUNC_4(VAR_7->clk);
fail_clk:
 FUNC_24(VAR_8);
 return VAR_12;
}
