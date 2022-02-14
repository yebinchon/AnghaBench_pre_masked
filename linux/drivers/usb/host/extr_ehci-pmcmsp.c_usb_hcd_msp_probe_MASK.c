
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {int rsrc_len; int rsrc_start; int regs; TYPE_1__ self; } ;
struct resource {int start; } ;
struct platform_device {int name; int dev; } ;
struct hc_driver {int dummy; } ;
struct ehci_hcd {int big_endian_mmio; int big_endian_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 struct ehci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct usb_hcd*,int ,int ) ;
 struct usb_hcd* FUNC_12 (struct hc_driver const*,int *,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct usb_hcd*) ;
 int FUNC_15 (struct usb_hcd*) ;

int FUNC_16(const struct hc_driver *VAR_5,
     struct platform_device *VAR_6)
{
 int VAR_7;
 struct usb_hcd *VAR_8;
 struct resource *VAR_9;
 struct ehci_hcd *VAR_10 ;

 VAR_8 = FUNC_12(VAR_5, &VAR_6->dev, "pmcmsp");
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_6, VAR_3, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_6("No IOMEM resource info for %s.\n", VAR_6->name);
  VAR_7 = -VAR_1;
  goto err1;
 }
 VAR_8->rsrc_start = VAR_9->start;
 VAR_8->rsrc_len = FUNC_9(VAR_9);
 if (!FUNC_8(VAR_8->rsrc_start, VAR_8->rsrc_len, VAR_6->name)) {
  VAR_7 = -VAR_0;
  goto err1;
 }
 VAR_8->regs = FUNC_3(VAR_8->rsrc_start, VAR_8->rsrc_len);
 if (!VAR_8->regs) {
  FUNC_6("ioremap failed");
  VAR_7 = -VAR_1;
  goto err2;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_2, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_6->dev, "No IRQ resource info for %s.\n", VAR_6->name);
  VAR_7 = -VAR_1;
  goto err3;
 }


 VAR_7 = FUNC_13(FUNC_10(VAR_6));
 if (VAR_7 != 0)
  goto err3;

 VAR_10 = FUNC_2(VAR_8);
 VAR_10->big_endian_mmio = 1;
 VAR_10->big_endian_desc = 1;


 VAR_7 = FUNC_11(VAR_8, VAR_9->start, VAR_4);
 if (VAR_7 == 0) {
  FUNC_1(VAR_8->self.controller);
  return 0;
 }

 FUNC_15(VAR_8);
err3:
 FUNC_4(VAR_8->regs);
err2:
 FUNC_7(VAR_8->rsrc_start, VAR_8->rsrc_len);
err1:
 FUNC_14(VAR_8);

 return VAR_7;
}
