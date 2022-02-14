
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {TYPE_2__ self; int rsrc_len; int rsrc_start; struct clk* regs; } ;
struct spear_ohci {struct clk* clk; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; TYPE_1__* resource; } ;
struct hc_driver {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
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
 struct hc_driver VAR_2 ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct resource*) ;
 struct spear_ohci* FUNC_14 (struct usb_hcd*) ;
 int FUNC_15 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_16 (struct hc_driver const*,int *,int ) ;
 int FUNC_17 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_3)
{
 const struct hc_driver *VAR_4 = &VAR_2;
 struct usb_hcd *VAR_5 = ((void*)0);
 struct clk *VAR_6;
 struct spear_ohci *VAR_7;
 struct resource *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_11(VAR_3, 0);
 if (VAR_10 < 0) {
  VAR_9 = VAR_10;
  goto fail;
 }






 VAR_9 = FUNC_10(&VAR_3->dev, FUNC_0(32));
 if (VAR_9)
  goto fail;

 VAR_6 = FUNC_8(&VAR_3->dev, ((void*)0));
 if (FUNC_1(VAR_6)) {
  FUNC_5(&VAR_3->dev, "Error getting interface clock\n");
  VAR_9 = FUNC_2(VAR_6);
  goto fail;
 }

 VAR_5 = FUNC_16(VAR_4, &VAR_3->dev, FUNC_6(&VAR_3->dev));
 if (!VAR_5) {
  VAR_9 = -VAR_0;
  goto fail;
 }

 VAR_8 = FUNC_12(VAR_3, VAR_1, 0);
 VAR_5->regs = FUNC_9(&VAR_3->dev, VAR_8);
 if (FUNC_1(VAR_5->regs)) {
  VAR_9 = FUNC_2(VAR_5->regs);
  goto err_put_hcd;
 }

 VAR_5->rsrc_start = VAR_3->resource[0].start;
 VAR_5->rsrc_len = FUNC_13(VAR_8);

 VAR_7 = FUNC_14(VAR_5);
 VAR_7->clk = VAR_6;

 FUNC_4(VAR_7->clk);

 VAR_9 = FUNC_15(VAR_5, FUNC_11(VAR_3, 0), 0);
 if (VAR_9 == 0) {
  FUNC_7(VAR_5->self.controller);
  return VAR_9;
 }

 FUNC_3(VAR_7->clk);
err_put_hcd:
 FUNC_17(VAR_5);
fail:
 FUNC_5(&VAR_3->dev, "init fail, %d\n", VAR_9);

 return VAR_9;
}
