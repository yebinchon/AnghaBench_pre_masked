
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {int has_ippc; void* ippc_regs; int hcd; int u3p_dis_msk; int lpm_support; void* vusb33; void* vbus; struct device* dev; } ;
struct xhci_hcd {int imod_interval; struct usb_hcd* shared_hcd; int hcc_params; struct usb_hcd* main_hcd; } ;
struct usb_hcd {int can_do_streams; int rsrc_len; int rsrc_start; void* regs; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct hc_driver {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,int) ;
 int FUNC_8 (struct device*,char*,int*) ;
 void* FUNC_9 (struct device*,struct resource*) ;
 struct xhci_hcd_mtk* FUNC_10 (struct device*,int,int ) ;
 void* FUNC_11 (struct device*,char*) ;
 int FUNC_12 (struct device*,int ) ;
 struct xhci_hcd* FUNC_13 (struct usb_hcd*) ;
 int FUNC_14 (struct device_node*,char*) ;
 int FUNC_15 (struct device_node*,char*,int *) ;
 int FUNC_16 (struct platform_device*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,char*) ;
 int FUNC_19 (struct platform_device*,struct xhci_hcd_mtk*) ;
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
 int FUNC_31 (struct xhci_hcd_mtk*,struct device_node*) ;
 int FUNC_32 (struct xhci_hcd_mtk*) ;
 int FUNC_33 (struct xhci_hcd_mtk*) ;
 int FUNC_34 (struct xhci_hcd_mtk*) ;
 struct hc_driver VAR_5 ;
 int FUNC_35 (struct xhci_hcd_mtk*) ;
 int FUNC_36 (struct xhci_hcd_mtk*) ;
 int FUNC_37 (struct xhci_hcd_mtk*) ;

__attribute__((used)) static int FUNC_38(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 struct xhci_hcd_mtk *VAR_9;
 const struct hc_driver *VAR_10;
 struct xhci_hcd *VAR_11;
 struct resource *VAR_12;
 struct usb_hcd *VAR_13;
 int VAR_14 = -VAR_0;
 int VAR_15;

 if (FUNC_28())
  return -VAR_0;

 VAR_10 = &VAR_5;
 VAR_9 = FUNC_10(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_7;
 VAR_9->vbus = FUNC_11(VAR_7, "vbus");
 if (FUNC_2(VAR_9->vbus)) {
  FUNC_4(VAR_7, "fail to get vbus\n");
  return FUNC_3(VAR_9->vbus);
 }

 VAR_9->vusb33 = FUNC_11(VAR_7, "vusb33");
 if (FUNC_2(VAR_9->vusb33)) {
  FUNC_4(VAR_7, "fail to get vusb33\n");
  return FUNC_3(VAR_9->vusb33);
 }

 VAR_14 = FUNC_34(VAR_9);
 if (VAR_14)
  return VAR_14;

 VAR_9->lpm_support = FUNC_14(VAR_8, "usb3-lpm-capable");

 FUNC_15(VAR_8, "mediatek,u3p-dis-msk",
        &VAR_9->u3p_dis_msk);

 VAR_14 = FUNC_31(VAR_9, VAR_8);
 if (VAR_14) {
  FUNC_4(VAR_7, "failed to parse uwk property\n");
  return VAR_14;
 }

 FUNC_21(VAR_7);
 FUNC_22(VAR_7);
 FUNC_6(VAR_7);

 VAR_14 = FUNC_36(VAR_9);
 if (VAR_14)
  goto disable_pm;

 VAR_14 = FUNC_33(VAR_9);
 if (VAR_14)
  goto disable_ldos;

 VAR_15 = FUNC_17(VAR_6, 0);
 if (VAR_15 < 0) {
  VAR_14 = VAR_15;
  goto disable_clk;
 }


 VAR_14 = FUNC_12(VAR_7, FUNC_0(32));
 if (VAR_14)
  goto disable_clk;

 VAR_13 = FUNC_26(VAR_10, VAR_7, FUNC_5(VAR_7));
 if (!VAR_13) {
  VAR_14 = -VAR_1;
  goto disable_clk;
 }





 VAR_9->hcd = FUNC_16(VAR_6);
 FUNC_19(VAR_6, VAR_9);

 VAR_12 = FUNC_18(VAR_6, VAR_3, "mac");
 VAR_13->regs = FUNC_9(VAR_7, VAR_12);
 if (FUNC_2(VAR_13->regs)) {
  VAR_14 = FUNC_3(VAR_13->regs);
  goto put_usb2_hcd;
 }
 VAR_13->rsrc_start = VAR_12->start;
 VAR_13->rsrc_len = FUNC_24(VAR_12);

 VAR_12 = FUNC_18(VAR_6, VAR_3, "ippc");
 if (VAR_12) {
  VAR_9->ippc_regs = FUNC_9(VAR_7, VAR_12);
  if (FUNC_2(VAR_9->ippc_regs)) {
   VAR_14 = FUNC_3(VAR_9->ippc_regs);
   goto put_usb2_hcd;
  }
  VAR_9->has_ippc = 1;
 } else {
  VAR_9->has_ippc = 0;
 }

 FUNC_7(VAR_7, 1);

 VAR_11 = FUNC_13(VAR_13);
 VAR_11->main_hcd = VAR_13;






 VAR_11->imod_interval = 5000;
 FUNC_8(VAR_7, "imod-interval-ns", &VAR_11->imod_interval);

 VAR_11->shared_hcd = FUNC_27(VAR_10, VAR_7,
   FUNC_5(VAR_7), VAR_13);
 if (!VAR_11->shared_hcd) {
  VAR_14 = -VAR_1;
  goto disable_device_wakeup;
 }

 VAR_14 = FUNC_25(VAR_13, VAR_15, VAR_4);
 if (VAR_14)
  goto put_usb3_hcd;

 if (FUNC_1(VAR_11->hcc_params) >= 4)
  VAR_11->shared_hcd->can_do_streams = 1;

 VAR_14 = FUNC_25(VAR_11->shared_hcd, VAR_15, VAR_4);
 if (VAR_14)
  goto dealloc_usb2_hcd;

 return 0;

dealloc_usb2_hcd:
 FUNC_30(VAR_13);

put_usb3_hcd:
 FUNC_37(VAR_9);
 FUNC_29(VAR_11->shared_hcd);

disable_device_wakeup:
 FUNC_7(VAR_7, 0);

put_usb2_hcd:
 FUNC_29(VAR_13);

disable_clk:
 FUNC_32(VAR_9);

disable_ldos:
 FUNC_35(VAR_9);

disable_pm:
 FUNC_23(VAR_7);
 FUNC_20(VAR_7);
 return VAR_14;
}
