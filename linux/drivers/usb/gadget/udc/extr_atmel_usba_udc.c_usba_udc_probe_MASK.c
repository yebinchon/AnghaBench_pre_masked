
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ep_list; } ;
struct usba_udc {int irq; int num_ep; struct clk* usba_ep; TYPE_1__ gadget; struct platform_device* pdev; int * vbus_pin; struct clk* hclk; struct clk* pclk; int vbus_mutex; int lock; struct clk* fifo; struct clk* regs; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct clk* FUNC_3 (struct platform_device*,struct usba_udc*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*,struct resource*,struct clk*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 struct clk* FUNC_10 (int *,char*) ;
 void* FUNC_11 (int *,struct resource*) ;
 struct usba_udc* FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *,int,int ,int ,char*,struct usba_udc*) ;
 int FUNC_14 (int *,int ,int *,int ,int ,char*,struct usba_udc*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct usba_udc*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct usba_udc*,int ) ;
 int FUNC_23 (int *,TYPE_1__*) ;
 int FUNC_24 (struct usba_udc*,struct clk*) ;
 TYPE_1__ VAR_9 ;
 int FUNC_25 (struct usba_udc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_26 (struct usba_udc*,int ,int ) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_12)
{
 struct resource *VAR_13;
 struct clk *VAR_14, *VAR_15;
 struct usba_udc *VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_16 = FUNC_12(&VAR_12->dev, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->gadget = VAR_9;
 FUNC_0(&VAR_16->gadget.ep_list);

 VAR_13 = FUNC_19(VAR_12, VAR_5, VAR_1);
 VAR_16->regs = FUNC_11(&VAR_12->dev, VAR_13);
 if (FUNC_1(VAR_16->regs))
  return FUNC_2(VAR_16->regs);
 FUNC_7(&VAR_12->dev, "MMIO registers at %pR mapped at %p\n",
   VAR_13, VAR_16->regs);

 VAR_13 = FUNC_19(VAR_12, VAR_5, VAR_3);
 VAR_16->fifo = FUNC_11(&VAR_12->dev, VAR_13);
 if (FUNC_1(VAR_16->fifo))
  return FUNC_2(VAR_16->fifo);
 FUNC_7(&VAR_12->dev, "FIFO at %pR mapped at %p\n", VAR_13, VAR_16->fifo);

 VAR_17 = FUNC_18(VAR_12, 0);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_14 = FUNC_10(&VAR_12->dev, "pclk");
 if (FUNC_1(VAR_14))
  return FUNC_2(VAR_14);
 VAR_15 = FUNC_10(&VAR_12->dev, "hclk");
 if (FUNC_1(VAR_15))
  return FUNC_2(VAR_15);

 FUNC_21(&VAR_16->lock);
 FUNC_17(&VAR_16->vbus_mutex);
 VAR_16->pdev = VAR_12;
 VAR_16->pclk = VAR_14;
 VAR_16->hclk = VAR_15;

 FUNC_20(VAR_12, VAR_16);


 VAR_18 = FUNC_5(VAR_14);
 if (VAR_18) {
  FUNC_6(&VAR_12->dev, "Unable to enable pclk, aborting.\n");
  return VAR_18;
 }

 FUNC_26(VAR_16, VAR_0, VAR_7);
 FUNC_4(VAR_14);

 VAR_16->usba_ep = FUNC_3(VAR_12, VAR_16);

 FUNC_22(VAR_16, 0);

 if (FUNC_1(VAR_16->usba_ep))
  return FUNC_2(VAR_16->usba_ep);

 VAR_18 = FUNC_13(&VAR_12->dev, VAR_17, VAR_10, 0,
    "atmel_usba_udc", VAR_16);
 if (VAR_18) {
  FUNC_6(&VAR_12->dev, "Cannot request irq %d (error %d)\n",
   VAR_17, VAR_18);
  return VAR_18;
 }
 VAR_16->irq = VAR_17;

 if (VAR_16->vbus_pin) {
  FUNC_16(FUNC_15(VAR_16->vbus_pin), VAR_6);
  VAR_18 = FUNC_14(&VAR_12->dev,
    FUNC_15(VAR_16->vbus_pin), ((void*)0),
    VAR_11, VAR_8,
    "atmel_usba_udc", VAR_16);
  if (VAR_18) {
   VAR_16->vbus_pin = ((void*)0);
   FUNC_8(&VAR_16->pdev->dev,
     "failed to request vbus irq; "
     "assuming always on\n");
  }
 }

 VAR_18 = FUNC_23(&VAR_12->dev, &VAR_16->gadget);
 if (VAR_18)
  return VAR_18;
 FUNC_9(&VAR_12->dev, 1);

 FUNC_25(VAR_16);
 for (VAR_19 = 1; VAR_19 < VAR_16->num_ep; VAR_19++)
  FUNC_24(VAR_16, &VAR_16->usba_ep[VAR_19]);

 return 0;
}
