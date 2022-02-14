
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; int rsrc_len; int rsrc_start; int regs; } ;
struct resource {int start; } ;
struct TYPE_12__ {int * of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct exynos_ohci_hcd {int clk; int * of_node; scalar_t__ legacy_phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*,struct resource*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,struct exynos_ohci_hcd*) ;
 int VAR_4 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct usb_hcd*) ;
 int FUNC_17 (struct resource*) ;
 struct exynos_ohci_hcd* FUNC_18 (struct usb_hcd*) ;
 int FUNC_19 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_20 (int *,TYPE_2__*,int ) ;
 int FUNC_21 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_5)
{
 struct exynos_ohci_hcd *VAR_6;
 struct usb_hcd *VAR_7;
 struct resource *VAR_8;
 int VAR_9;
 int VAR_10;






 VAR_10 = FUNC_10(&VAR_5->dev, FUNC_0(32));
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_20(&VAR_4,
    &VAR_5->dev, FUNC_6(&VAR_5->dev));
 if (!VAR_7) {
  FUNC_5(&VAR_5->dev, "Unable to create HCD\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_18(VAR_7);

 VAR_10 = FUNC_11(&VAR_5->dev, VAR_6);
 if (VAR_10)
  goto fail_clk;

 VAR_6->clk = FUNC_8(&VAR_5->dev, "usbhost");

 if (FUNC_1(VAR_6->clk)) {
  FUNC_5(&VAR_5->dev, "Failed to get usbhost clock\n");
  VAR_10 = FUNC_2(VAR_6->clk);
  goto fail_clk;
 }

 VAR_10 = FUNC_4(VAR_6->clk);
 if (VAR_10)
  goto fail_clk;

 VAR_8 = FUNC_15(VAR_5, VAR_2, 0);
 VAR_7->regs = FUNC_9(&VAR_5->dev, VAR_8);
 if (FUNC_1(VAR_7->regs)) {
  VAR_10 = FUNC_2(VAR_7->regs);
  goto fail_io;
 }
 VAR_7->rsrc_start = VAR_8->start;
 VAR_7->rsrc_len = FUNC_17(VAR_8);

 VAR_9 = FUNC_14(VAR_5, 0);
 if (!VAR_9) {
  FUNC_5(&VAR_5->dev, "Failed to get IRQ\n");
  VAR_10 = -VAR_0;
  goto fail_io;
 }

 FUNC_16(VAR_5, VAR_7);

 VAR_10 = FUNC_13(&VAR_5->dev);
 if (VAR_10) {
  FUNC_5(&VAR_5->dev, "Failed to enable USB phy\n");
  goto fail_io;
 }





 VAR_6->of_node = VAR_5->dev.of_node;
 if (VAR_6->legacy_phy)
  VAR_5->dev.of_node = ((void*)0);

 VAR_10 = FUNC_19(VAR_7, VAR_9, VAR_3);
 if (VAR_10) {
  FUNC_5(&VAR_5->dev, "Failed to add USB HCD\n");
  goto fail_add_hcd;
 }
 FUNC_7(VAR_7->self.controller);
 return 0;

fail_add_hcd:
 FUNC_12(&VAR_5->dev);
 VAR_5->dev.of_node = VAR_6->of_node;
fail_io:
 FUNC_3(VAR_6->clk);
fail_clk:
 FUNC_21(VAR_7);
 return VAR_10;
}
