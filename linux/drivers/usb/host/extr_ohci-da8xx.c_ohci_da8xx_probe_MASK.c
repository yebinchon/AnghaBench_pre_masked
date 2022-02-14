
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; int rsrc_len; int rsrc_start; int * regs; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct da8xx_ohci_hcd {int * oc_gpio; int * vbus_reg; int * usb11_phy; int * usb11_clk; struct usb_hcd* hcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (struct device*,int *) ;
 int * FUNC_6 (struct device*,char*,int ) ;
 int * FUNC_7 (struct device*,struct resource*) ;
 int * FUNC_8 (struct device*,char*) ;
 int * FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device*,int,int *,int ,int,char*,struct da8xx_ohci_hcd*) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct usb_hcd*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct resource*) ;
 struct da8xx_ohci_hcd* FUNC_16 (struct usb_hcd*) ;
 int FUNC_17 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_18 (int *,struct device*,int ) ;
 int FUNC_19 (struct usb_hcd*) ;
 int FUNC_20 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_10)
{
 struct da8xx_ohci_hcd *VAR_11;
 struct device *VAR_12 = &VAR_10->dev;
 int VAR_13, VAR_14, VAR_15;
 struct usb_hcd *VAR_16;
 struct resource *VAR_17;

 VAR_16 = FUNC_18(&VAR_8, VAR_12, FUNC_3(VAR_12));
 if (!VAR_16)
  return -VAR_1;

 VAR_11 = FUNC_16(VAR_16);
 VAR_11->hcd = VAR_16;

 VAR_11->usb11_clk = FUNC_5(VAR_12, ((void*)0));
 if (FUNC_0(VAR_11->usb11_clk)) {
  VAR_13 = FUNC_1(VAR_11->usb11_clk);
  if (VAR_13 != -VAR_2)
   FUNC_2(VAR_12, "Failed to get clock.\n");
  goto err;
 }

 VAR_11->usb11_phy = FUNC_8(VAR_12, "usb-phy");
 if (FUNC_0(VAR_11->usb11_phy)) {
  VAR_13 = FUNC_1(VAR_11->usb11_phy);
  if (VAR_13 != -VAR_2)
   FUNC_2(VAR_12, "Failed to get phy.\n");
  goto err;
 }

 VAR_11->vbus_reg = FUNC_9(VAR_12, "vbus");
 if (FUNC_0(VAR_11->vbus_reg)) {
  VAR_13 = FUNC_1(VAR_11->vbus_reg);
  if (VAR_13 == -VAR_0) {
   VAR_11->vbus_reg = ((void*)0);
  } else if (VAR_13 == -VAR_2) {
   goto err;
  } else {
   FUNC_2(VAR_12, "Failed to get regulator\n");
   goto err;
  }
 }

 VAR_11->oc_gpio = FUNC_6(VAR_12, "oc", VAR_3);
 if (FUNC_0(VAR_11->oc_gpio))
  goto err;

 if (VAR_11->oc_gpio) {
  VAR_15 = FUNC_11(VAR_11->oc_gpio);
  if (VAR_15 < 0)
   goto err;

  VAR_13 = FUNC_10(VAR_12, VAR_15, ((void*)0),
    VAR_9, VAR_7 |
    VAR_6 | VAR_5,
    "OHCI over-current indicator", VAR_11);
  if (VAR_13)
   goto err;
 }

 VAR_17 = FUNC_14(VAR_10, VAR_4, 0);
 VAR_16->regs = FUNC_7(VAR_12, VAR_17);
 if (FUNC_0(VAR_16->regs)) {
  VAR_13 = FUNC_1(VAR_16->regs);
  goto err;
 }
 VAR_16->rsrc_start = VAR_17->start;
 VAR_16->rsrc_len = FUNC_15(VAR_17);

 VAR_14 = FUNC_13(VAR_10, 0);
 if (VAR_14 < 0) {
  VAR_13 = -VAR_0;
  goto err;
 }

 VAR_13 = FUNC_17(VAR_16, VAR_14, 0);
 if (VAR_13)
  goto err;

 FUNC_4(VAR_16->self.controller);

 VAR_13 = FUNC_12(VAR_16);
 if (VAR_13)
  goto err_remove_hcd;

 return 0;

err_remove_hcd:
 FUNC_20(VAR_16);
err:
 FUNC_19(VAR_16);
 return VAR_13;
}
