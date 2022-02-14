
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int controller; } ;
struct usb_hcd {TYPE_2__ self; int regs; int rsrc_len; int rsrc_start; } ;
struct uhci_hcd {int is_aspeed; int clk; int rh_numports; int regs; } ;
struct resource {int start; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__* resource; TYPE_3__ dev; int name; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {int start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,struct resource*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 struct uhci_hcd* FUNC_11 (struct usb_hcd*) ;
 scalar_t__ FUNC_12 (struct device_node*,char*) ;
 scalar_t__ FUNC_13 (struct device_node*,char*,int *) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct resource*) ;
 int VAR_4 ;
 int FUNC_16 (struct usb_hcd*,int ,int ) ;
 struct usb_hcd* FUNC_17 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct usb_hcd *VAR_7;
 struct uhci_hcd *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 if (FUNC_18())
  return -VAR_0;






 VAR_10 = FUNC_10(&VAR_5->dev, FUNC_0(32));
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_17(&VAR_4, &VAR_5->dev,
   VAR_5->name);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_11(VAR_7);

 VAR_9 = FUNC_14(VAR_5, VAR_2, 0);
 VAR_7->regs = FUNC_9(&VAR_5->dev, VAR_9);
 if (FUNC_1(VAR_7->regs)) {
  VAR_10 = FUNC_2(VAR_7->regs);
  goto err_rmr;
 }
 VAR_7->rsrc_start = VAR_9->start;
 VAR_7->rsrc_len = FUNC_15(VAR_9);

 VAR_8->regs = VAR_7->regs;


 if (VAR_6) {
  u32 VAR_11;

  if (FUNC_13(VAR_6, "#ports", &VAR_11) == 0) {
   VAR_8->rh_numports = VAR_11;
   FUNC_6(&VAR_5->dev,
    "Detected %d ports from device-tree\n",
    VAR_11);
  }
  if (FUNC_12(VAR_6, "aspeed,ast2400-uhci") ||
      FUNC_12(VAR_6, "aspeed,ast2500-uhci")) {
   VAR_8->is_aspeed = 1;
   FUNC_6(&VAR_5->dev,
     "Enabled Aspeed implementation workarounds\n");
  }
 }


 VAR_8->clk = FUNC_8(&VAR_5->dev, ((void*)0));
 if (FUNC_1(VAR_8->clk)) {
  VAR_10 = FUNC_2(VAR_8->clk);
  goto err_rmr;
 }
 VAR_10 = FUNC_4(VAR_8->clk);
 if (VAR_10) {
  FUNC_5(&VAR_5->dev, "Error couldn't enable clock (%d)\n", VAR_10);
  goto err_rmr;
 }

 VAR_10 = FUNC_16(VAR_7, VAR_5->resource[1].start, VAR_3);
 if (VAR_10)
  goto err_clk;

 FUNC_7(VAR_7->self.controller);
 return 0;

err_clk:
 FUNC_3(VAR_8->clk);
err_rmr:
 FUNC_19(VAR_7);

 return VAR_10;
}
