
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; struct clk* regs; int rsrc_len; int rsrc_start; } ;
struct spear_ehci {struct clk* clk; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct hc_driver {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {struct clk* caps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 struct clk* FUNC_8 (int *,int *) ;
 struct clk* FUNC_9 (int *,struct resource*) ;
 int FUNC_10 (int *,int ) ;
 struct hc_driver VAR_4 ;
 TYPE_2__* FUNC_11 (struct usb_hcd*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct resource*) ;
 struct spear_ehci* FUNC_15 (struct usb_hcd*) ;
 int FUNC_16 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_17 (struct hc_driver const*,int *,int ) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_5)
{
 struct usb_hcd *VAR_6 ;
 struct spear_ehci *VAR_7;
 struct resource *VAR_8;
 struct clk *VAR_9;
 const struct hc_driver *VAR_10 = &VAR_4;
 int VAR_11, VAR_12;

 if (FUNC_18())
  return -VAR_0;

 VAR_11 = FUNC_12(VAR_5, 0);
 if (VAR_11 < 0) {
  VAR_12 = VAR_11;
  goto fail;
 }






 VAR_12 = FUNC_10(&VAR_5->dev, FUNC_0(32));
 if (VAR_12)
  goto fail;

 VAR_9 = FUNC_8(&VAR_5->dev, ((void*)0));
 if (FUNC_1(VAR_9)) {
  FUNC_5(&VAR_5->dev, "Error getting interface clock\n");
  VAR_12 = FUNC_2(VAR_9);
  goto fail;
 }

 VAR_6 = FUNC_17(VAR_10, &VAR_5->dev, FUNC_6(&VAR_5->dev));
 if (!VAR_6) {
  VAR_12 = -VAR_1;
  goto fail;
 }

 VAR_8 = FUNC_13(VAR_5, VAR_2, 0);
 VAR_6->regs = FUNC_9(&VAR_5->dev, VAR_8);
 if (FUNC_1(VAR_6->regs)) {
  VAR_12 = FUNC_2(VAR_6->regs);
  goto err_put_hcd;
 }
 VAR_6->rsrc_start = VAR_8->start;
 VAR_6->rsrc_len = FUNC_14(VAR_8);

 VAR_7 = FUNC_15(VAR_6);
 VAR_7->clk = VAR_9;


 FUNC_11(VAR_6)->caps = VAR_6->regs;

 FUNC_4(VAR_7->clk);
 VAR_12 = FUNC_16(VAR_6, VAR_11, VAR_3);
 if (VAR_12)
  goto err_stop_ehci;

 FUNC_7(VAR_6->self.controller);
 return VAR_12;

err_stop_ehci:
 FUNC_3(VAR_7->clk);
err_put_hcd:
 FUNC_19(VAR_6);
fail:
 FUNC_5(&VAR_5->dev, "init fail, %d\n", VAR_12);

 return VAR_12 ;
}
