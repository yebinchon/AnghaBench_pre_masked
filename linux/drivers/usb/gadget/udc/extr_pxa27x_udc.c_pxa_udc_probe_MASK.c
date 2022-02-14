
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pxa_udc {scalar_t__ irq; int clk; int transceiver; int gadget; int * dev; scalar_t__ vbus_sensed; int gpiod; int regs; int udc_command; } ;
struct pxa2xx_udc_mach_info {int gpio_pullup; int udc_command; scalar_t__ gpio_pullup_inverted; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int,...) ;
 struct pxa2xx_udc_mach_info* FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int,unsigned long,char*) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,struct resource*) ;
 int FUNC_11 (int *,int,int ,int ,int ,struct pxa_udc*) ;
 int FUNC_12 (int *,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int ) ;
 struct pxa_udc VAR_6 ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct pxa_udc*) ;
 int VAR_7 ;
 int FUNC_20 (struct pxa_udc*) ;
 int VAR_8 ;
 scalar_t__ FUNC_21 (struct pxa_udc*) ;
 struct pxa_udc* VAR_9 ;
 int FUNC_22 (struct pxa_udc*) ;
 int FUNC_23 (struct pxa_udc*) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (int ,int *) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_10)
{
 struct resource *VAR_11;
 struct pxa_udc *VAR_12 = &VAR_6;
 int VAR_13 = 0, VAR_14;
 struct pxa2xx_udc_mach_info *VAR_15 = FUNC_6(&VAR_10->dev);
 unsigned long VAR_16;

 if (VAR_15) {
  VAR_16 = VAR_15->gpio_pullup_inverted ? VAR_1 : 0;
  VAR_14 = VAR_15->gpio_pullup;
  if (FUNC_13(VAR_14)) {
   VAR_13 = FUNC_8(&VAR_10->dev, VAR_14,
             VAR_16,
             "USB D+ pullup");
   if (VAR_13)
    return VAR_13;
   VAR_12->gpiod = FUNC_14(VAR_15->gpio_pullup);
  }
  VAR_12->udc_command = VAR_15->udc_command;
 } else {
  VAR_12->gpiod = FUNC_9(&VAR_10->dev, ((void*)0), VAR_0);
 }

 VAR_11 = FUNC_18(VAR_10, VAR_2, 0);
 VAR_12->regs = FUNC_10(&VAR_10->dev, VAR_11);
 if (FUNC_0(VAR_12->regs))
  return FUNC_2(VAR_12->regs);
 VAR_12->irq = FUNC_17(VAR_10, 0);
 if (VAR_12->irq < 0)
  return VAR_12->irq;

 VAR_12->dev = &VAR_10->dev;
 if (FUNC_16()) {
  VAR_12->transceiver =
   FUNC_12(VAR_12->dev, "phys", 0);
  if (FUNC_0(VAR_12->transceiver))
   return FUNC_2(VAR_12->transceiver);
 } else {
  VAR_12->transceiver = FUNC_25(VAR_4);
 }

 if (FUNC_0(VAR_12->gpiod)) {
  FUNC_5(&VAR_10->dev, "Couldn't find or request D+ gpio : %ld\n",
   FUNC_2(VAR_12->gpiod));
  return FUNC_2(VAR_12->gpiod);
 }
 if (VAR_12->gpiod)
  FUNC_15(VAR_12->gpiod, 0);

 VAR_12->clk = FUNC_7(&VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_12->clk))
  return FUNC_2(VAR_12->clk);

 VAR_13 = FUNC_3(VAR_12->clk);
 if (VAR_13)
  return VAR_13;

 VAR_12->vbus_sensed = 0;

 VAR_9 = VAR_12;
 FUNC_19(VAR_10, VAR_12);
 FUNC_23(VAR_12);


 VAR_13 = FUNC_11(&VAR_10->dev, VAR_12->irq, VAR_8,
      VAR_3, VAR_5, VAR_12);
 if (VAR_13 != 0) {
  FUNC_5(VAR_12->dev, "%s: can't get irq %i, err %d\n",
   VAR_5, VAR_12->irq, VAR_13);
  goto err;
 }

 if (!FUNC_1(VAR_12->transceiver))
  FUNC_26(VAR_12->transceiver, &VAR_7);
 VAR_13 = FUNC_24(&VAR_10->dev, &VAR_12->gadget);
 if (VAR_13)
  goto err_add_gadget;

 FUNC_20(VAR_12);
 if (FUNC_21(VAR_12))
  FUNC_22(VAR_12);
 return 0;

err_add_gadget:
 if (!FUNC_1(VAR_12->transceiver))
  FUNC_27(VAR_12->transceiver, &VAR_7);
err:
 FUNC_4(VAR_12->clk);
 return VAR_13;
}
