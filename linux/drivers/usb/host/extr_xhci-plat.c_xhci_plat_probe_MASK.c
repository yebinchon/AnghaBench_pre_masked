
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_plat_priv {int dummy; } ;
struct xhci_hcd {int imod_interval; int * reg_clk; int * clk; struct usb_hcd* shared_hcd; int hcc_params; int quirks; struct usb_hcd* main_hcd; } ;
struct TYPE_2__ {int controller; } ;
struct usb_hcd {int can_do_streams; int * usb_phy; int tpl_support; TYPE_1__ self; int rsrc_len; int rsrc_start; int * regs; } ;
struct resource {int start; } ;
struct device {int of_node; struct device* parent; int dma_mask; int * bus; int fwnode; } ;
struct platform_device {struct device dev; } ;
struct hc_driver {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_5 (struct hc_driver const*,struct device*,struct device*,int ,struct usb_hcd*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 scalar_t__ FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct device*,char*,int*) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (struct device*,char*) ;
 int * FUNC_14 (struct device*,struct resource*) ;
 int * FUNC_15 (struct device*,char*,int ) ;
 int FUNC_16 (struct device*,int ) ;
 int FUNC_17 (struct device*,int ) ;
 struct xhci_hcd* FUNC_18 (struct usb_hcd*) ;
 struct xhci_plat_priv* FUNC_19 (struct usb_hcd*) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 struct xhci_plat_priv* FUNC_22 (struct device*) ;
 int FUNC_23 (int ) ;
 int VAR_8 ;
 int FUNC_24 (struct platform_device*,int ) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int ) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (struct device*) ;
 int FUNC_30 (struct device*) ;
 int FUNC_31 (struct device*) ;
 int FUNC_32 (struct resource*) ;
 int FUNC_33 (struct usb_hcd*,int,int ) ;
 scalar_t__ FUNC_34 () ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (struct usb_hcd*) ;
 int FUNC_38 (struct usb_hcd*) ;
 struct hc_driver VAR_9 ;

__attribute__((used)) static int FUNC_39(struct platform_device *VAR_10)
{
 const struct xhci_plat_priv *VAR_11;
 const struct hc_driver *VAR_12;
 struct device *VAR_13, *VAR_14;
 struct xhci_hcd *VAR_15;
 struct resource *VAR_16;
 struct usb_hcd *VAR_17;
 int VAR_18;
 int VAR_19;

 if (FUNC_34())
  return -VAR_0;

 VAR_12 = &VAR_9;

 VAR_19 = FUNC_24(VAR_10, 0);
 if (VAR_19 < 0)
  return VAR_19;
 for (VAR_13 = &VAR_10->dev; VAR_13; VAR_13 = VAR_13->parent) {
  if (FUNC_21(VAR_13->fwnode) ||
   FUNC_20(VAR_13->fwnode))
   break;




 }

 if (!VAR_13)
  VAR_13 = &VAR_10->dev;


 if (FUNC_4(!VAR_13->dma_mask))

  VAR_18 = FUNC_16(VAR_13,
         FUNC_0(64));
 else
  VAR_18 = FUNC_17(VAR_13, FUNC_0(64));


 if (VAR_18) {
  VAR_18 = FUNC_17(VAR_13, FUNC_0(32));
  if (VAR_18)
   return VAR_18;
 }

 FUNC_31(&VAR_10->dev);
 FUNC_27(&VAR_10->dev);
 FUNC_29(&VAR_10->dev);

 VAR_17 = FUNC_5(VAR_12, VAR_13, &VAR_10->dev,
          FUNC_8(&VAR_10->dev), ((void*)0));
 if (!VAR_17) {
  VAR_18 = -VAR_1;
  goto disable_runtime;
 }

 VAR_16 = FUNC_25(VAR_10, VAR_3, 0);
 VAR_17->regs = FUNC_14(&VAR_10->dev, VAR_16);
 if (FUNC_2(VAR_17->regs)) {
  VAR_18 = FUNC_3(VAR_17->regs);
  goto put_hcd;
 }

 VAR_17->rsrc_start = VAR_16->start;
 VAR_17->rsrc_len = FUNC_32(VAR_16);

 VAR_15 = FUNC_18(VAR_17);





 VAR_15->reg_clk = FUNC_13(&VAR_10->dev, "reg");
 if (FUNC_2(VAR_15->reg_clk)) {
  VAR_18 = FUNC_3(VAR_15->reg_clk);
  goto put_hcd;
 }

 VAR_18 = FUNC_7(VAR_15->reg_clk);
 if (VAR_18)
  goto put_hcd;

 VAR_15->clk = FUNC_13(&VAR_10->dev, ((void*)0));
 if (FUNC_2(VAR_15->clk)) {
  VAR_18 = FUNC_3(VAR_15->clk);
  goto disable_reg_clk;
 }

 VAR_18 = FUNC_7(VAR_15->clk);
 if (VAR_18)
  goto disable_reg_clk;

 VAR_11 = FUNC_22(&VAR_10->dev);
 if (VAR_11) {
  struct xhci_plat_priv *VAR_20 = FUNC_19(VAR_17);


  if (VAR_11)
   *VAR_20 = *VAR_11;
 }

 FUNC_12(VAR_17->self.controller);

 VAR_15->main_hcd = VAR_17;
 VAR_15->shared_hcd = FUNC_5(VAR_12, VAR_13, &VAR_10->dev,
   FUNC_8(&VAR_10->dev), VAR_17);
 if (!VAR_15->shared_hcd) {
  VAR_18 = -VAR_1;
  goto disable_clk;
 }


 VAR_15->imod_interval = 40000;


 for (VAR_14 = &VAR_10->dev; VAR_14; VAR_14 = VAR_14->parent) {

  if (FUNC_10(VAR_14, "usb2-lpm-disable"))
   VAR_15->quirks |= VAR_6;

  if (FUNC_10(VAR_14, "usb3-lpm-capable"))
   VAR_15->quirks |= VAR_7;

  if (FUNC_10(VAR_14, "quirk-broken-port-ped"))
   VAR_15->quirks |= VAR_5;

  FUNC_11(VAR_14, "imod-interval-ns",
      &VAR_15->imod_interval);
 }

 VAR_17->usb_phy = FUNC_15(VAR_13, "usb-phy", 0);
 if (FUNC_2(VAR_17->usb_phy)) {
  VAR_18 = FUNC_3(VAR_17->usb_phy);
  if (VAR_18 == -VAR_2)
   goto put_usb3_hcd;
  VAR_17->usb_phy = ((void*)0);
 } else {
  VAR_18 = FUNC_35(VAR_17->usb_phy);
  if (VAR_18)
   goto put_usb3_hcd;
 }

 VAR_17->tpl_support = FUNC_23(VAR_13->of_node);
 VAR_15->shared_hcd->tpl_support = VAR_17->tpl_support;
 VAR_18 = FUNC_33(VAR_17, VAR_19, VAR_4);
 if (VAR_18)
  goto disable_usb_phy;

 if (FUNC_1(VAR_15->hcc_params) >= 4)
  VAR_15->shared_hcd->can_do_streams = 1;

 VAR_18 = FUNC_33(VAR_15->shared_hcd, VAR_19, VAR_4);
 if (VAR_18)
  goto dealloc_usb2_hcd;

 FUNC_9(&VAR_10->dev);
 FUNC_30(&VAR_10->dev);





 FUNC_28(&VAR_10->dev);

 return 0;


dealloc_usb2_hcd:
 FUNC_38(VAR_17);

disable_usb_phy:
 FUNC_36(VAR_17->usb_phy);

put_usb3_hcd:
 FUNC_37(VAR_15->shared_hcd);

disable_clk:
 FUNC_6(VAR_15->clk);

disable_reg_clk:
 FUNC_6(VAR_15->reg_clk);

put_hcd:
 FUNC_37(VAR_17);

disable_runtime:
 FUNC_30(&VAR_10->dev);
 FUNC_26(&VAR_10->dev);

 return VAR_18;
}
