
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd_histb {struct usb_hcd* hcd; int ctrl; int soft_reset; struct device* dev; } ;
struct xhci_hcd {int imod_interval; struct usb_hcd* shared_hcd; int hcc_params; int quirks; struct usb_hcd* main_hcd; } ;
struct TYPE_2__ {int controller; } ;
struct usb_hcd {int can_do_streams; TYPE_1__ self; int rsrc_len; int rsrc_start; int regs; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hc_driver {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ,struct xhci_hcd_histb*) ;
 int FUNC_7 (struct device*) ;
 scalar_t__ FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct device*,struct resource*) ;
 struct xhci_hcd_histb* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,char*) ;
 int FUNC_14 (struct device*,int ) ;
 struct xhci_hcd* FUNC_15 (struct usb_hcd*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct resource*) ;
 int FUNC_25 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_26 (struct hc_driver const*,struct device*,int ) ;
 struct usb_hcd* FUNC_27 (struct hc_driver const*,struct device*,int ,struct usb_hcd*) ;
 scalar_t__ FUNC_28 () ;
 int FUNC_29 (struct usb_hcd*) ;
 int FUNC_30 (struct usb_hcd*) ;
 int FUNC_31 (struct xhci_hcd_histb*) ;
 struct hc_driver VAR_7 ;
 int FUNC_32 (struct xhci_hcd_histb*) ;
 int FUNC_33 (struct xhci_hcd_histb*) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct xhci_hcd_histb *VAR_10;
 const struct hc_driver *VAR_11;
 struct usb_hcd *VAR_12;
 struct xhci_hcd *VAR_13;
 struct resource *VAR_14;
 int VAR_15;
 int VAR_16 = -VAR_0;

 if (FUNC_28())
  return -VAR_0;

 VAR_11 = &VAR_7;
 VAR_10 = FUNC_12(VAR_9, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = VAR_9;

 VAR_15 = FUNC_16(VAR_8, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14 = FUNC_17(VAR_8, VAR_3, 0);
 VAR_10->ctrl = FUNC_11(&VAR_8->dev, VAR_14);
 if (FUNC_2(VAR_10->ctrl))
  return FUNC_3(VAR_10->ctrl);

 VAR_16 = FUNC_31(VAR_10);
 if (VAR_16)
  return VAR_16;

 VAR_10->soft_reset = FUNC_13(VAR_9, "soft");
 if (FUNC_2(VAR_10->soft_reset)) {
  FUNC_4(VAR_9, "failed to get soft reset\n");
  return FUNC_3(VAR_10->soft_reset);
 }

 FUNC_19(VAR_9);
 FUNC_21(VAR_9);
 FUNC_7(VAR_9);


 VAR_16 = FUNC_14(VAR_9, FUNC_0(32));
 if (VAR_16)
  return VAR_16;

 VAR_12 = FUNC_26(VAR_11, VAR_9, FUNC_5(VAR_9));
 if (!VAR_12) {
  VAR_16 = -VAR_1;
  goto disable_pm;
 }

 VAR_12->regs = VAR_10->ctrl;
 VAR_12->rsrc_start = VAR_14->start;
 VAR_12->rsrc_len = FUNC_24(VAR_14);

 VAR_10->hcd = VAR_12;
 FUNC_6(VAR_12->self.controller, VAR_10);

 VAR_16 = FUNC_33(VAR_10);
 if (VAR_16)
  goto put_hcd;

 VAR_13 = FUNC_15(VAR_12);

 FUNC_10(VAR_12->self.controller);

 VAR_13->main_hcd = VAR_12;
 VAR_13->shared_hcd = FUNC_27(VAR_11, VAR_9, FUNC_5(VAR_9),
       VAR_12);
 if (!VAR_13->shared_hcd) {
  VAR_16 = -VAR_1;
  goto disable_host;
 }

 if (FUNC_8(VAR_9, "usb2-lpm-disable"))
  VAR_13->quirks |= VAR_5;

 if (FUNC_8(VAR_9, "usb3-lpm-capable"))
  VAR_13->quirks |= VAR_6;


 VAR_13->imod_interval = 40000;
 FUNC_9(VAR_9, "imod-interval-ns",
     &VAR_13->imod_interval);

 VAR_16 = FUNC_25(VAR_12, VAR_15, VAR_4);
 if (VAR_16)
  goto put_usb3_hcd;

 if (FUNC_1(VAR_13->hcc_params) >= 4)
  VAR_13->shared_hcd->can_do_streams = 1;

 VAR_16 = FUNC_25(VAR_13->shared_hcd, VAR_15, VAR_4);
 if (VAR_16)
  goto dealloc_usb2_hcd;

 FUNC_7(VAR_9);
 FUNC_22(VAR_9);





 FUNC_20(VAR_9);

 return 0;

dealloc_usb2_hcd:
 FUNC_30(VAR_12);
put_usb3_hcd:
 FUNC_29(VAR_13->shared_hcd);
disable_host:
 FUNC_32(VAR_10);
put_hcd:
 FUNC_29(VAR_12);
disable_pm:
 FUNC_23(VAR_9);
 FUNC_18(VAR_9);

 return VAR_16;
}
