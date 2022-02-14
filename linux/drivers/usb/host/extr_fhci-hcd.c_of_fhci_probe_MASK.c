
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {struct device* controller; } ;
struct usb_hcd {TYPE_4__* regs; TYPE_1__ self; int power_budget; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct fhci_hcd {int* gpios; int* alow_gpios; scalar_t__ fullspeed_clk; scalar_t__ lowspeed_clk; TYPE_2__** pins; TYPE_2__* timer; TYPE_4__* regs; int pram; } ;
struct device_node {int dummy; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;
struct TYPE_12__ {int usb_usbmr; int usb_usber; } ;
struct TYPE_11__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ,int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,struct usb_hcd*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct fhci_hcd*,int ) ;
 int FUNC_12 (struct fhci_hcd*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (int ,struct usb_hcd*) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int,int ) ;
 TYPE_2__* FUNC_18 () ;
 int FUNC_19 (TYPE_2__*) ;
 struct fhci_hcd* FUNC_20 (struct usb_hcd*) ;
 TYPE_4__* FUNC_21 (int ,int ) ;
 int FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (unsigned int) ;
 unsigned int FUNC_24 (struct device_node*,int ) ;
 int FUNC_25 (struct device_node*,int ,struct resource*) ;
 int FUNC_26 (struct device_node*,int,int*) ;
 void* FUNC_27 (struct device_node*,char*,int*) ;
 int FUNC_28 (int *,int) ;
 void* FUNC_29 (char const*) ;
 int FUNC_30 (int ,int ,int ,unsigned long) ;
 int FUNC_31 (TYPE_2__*) ;
 TYPE_2__* FUNC_32 (struct device_node*,int) ;
 int FUNC_33 (scalar_t__,int) ;
 int FUNC_34 (int ,int ,int ,char*,struct usb_hcd*) ;
 int FUNC_35 (struct resource*) ;
 scalar_t__ FUNC_36 (char const*,char*) ;
 int FUNC_37 (struct usb_hcd*,unsigned int,int ) ;
 struct usb_hcd* FUNC_38 (int *,struct device*,int ) ;
 scalar_t__ FUNC_39 () ;
 int FUNC_40 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_41(struct platform_device *VAR_20)
{
 struct device *VAR_21 = &VAR_20->dev;
 struct device_node *VAR_22 = VAR_21->of_node;
 struct usb_hcd *VAR_23;
 struct fhci_hcd *VAR_24;
 struct resource VAR_25;
 unsigned long VAR_26;
 unsigned int VAR_27;
 const char *VAR_28;
 const u32 *VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;

 if (FUNC_39())
  return -VAR_1;

 VAR_28 = FUNC_27(VAR_22, "mode", ((void*)0));
 if (VAR_28 && FUNC_36(VAR_28, "host"))
  return -VAR_1;

 VAR_23 = FUNC_38(&VAR_18, VAR_21, FUNC_8(VAR_21));
 if (!VAR_23) {
  FUNC_6(VAR_21, "could not create hcd\n");
  return -VAR_2;
 }

 VAR_24 = FUNC_20(VAR_23);
 VAR_23->self.controller = VAR_21;
 FUNC_9(VAR_21, VAR_23);

 VAR_29 = FUNC_27(VAR_22, "hub-power-budget", &VAR_30);
 if (VAR_29 && VAR_30 == sizeof(*VAR_29))
  VAR_23->power_budget = *VAR_29;


 VAR_31 = FUNC_25(VAR_22, 0, &VAR_25);
 if (VAR_31) {
  FUNC_6(VAR_21, "could not get regs\n");
  goto err_regs;
 }

 VAR_23->regs = FUNC_21(VAR_25.start, FUNC_35(&VAR_25));
 if (!VAR_23->regs) {
  FUNC_6(VAR_21, "could not ioremap regs\n");
  VAR_31 = -VAR_2;
  goto err_regs;
 }
 VAR_24->regs = VAR_23->regs;


 VAR_29 = FUNC_27(VAR_22, "reg", &VAR_30);
 if (!VAR_29 || VAR_30 < sizeof(*VAR_29) * 4) {
  FUNC_6(VAR_21, "can't get pram offset\n");
  VAR_31 = -VAR_0;
  goto err_pram;
 }

 VAR_26 = FUNC_4(VAR_6, 64);
 if (FUNC_1(VAR_26)) {
  FUNC_6(VAR_21, "failed to allocate usb pram\n");
  VAR_31 = -VAR_2;
  goto err_pram;
 }

 FUNC_30(VAR_12, VAR_16,
       VAR_15, VAR_26);
 VAR_24->pram = FUNC_3(VAR_26);


 for (VAR_32 = 0; VAR_32 < VAR_9; VAR_32++) {
  int VAR_34;
  enum of_gpio_flags VAR_35;

  VAR_34 = FUNC_26(VAR_22, VAR_32, &VAR_35);
  VAR_24->gpios[VAR_32] = VAR_34;
  VAR_24->alow_gpios[VAR_32] = VAR_35 & VAR_11;

  if (!FUNC_16(VAR_34)) {
   if (VAR_32 < VAR_7) {
    FUNC_6(VAR_21, "incorrect GPIO%d: %d\n",
     VAR_32, VAR_34);
    goto err_gpios;
   } else {
    FUNC_7(VAR_21, "assuming board doesn't have "
     "%s gpio\n", VAR_32 == VAR_7 ?
     "speed" : "power");
    continue;
   }
  }

  VAR_31 = FUNC_17(VAR_34, FUNC_8(VAR_21));
  if (VAR_31) {
   FUNC_6(VAR_21, "failed to request gpio %d", VAR_32);
   goto err_gpios;
  }

  if (VAR_32 >= VAR_7) {
   VAR_31 = FUNC_14(VAR_34, 0);
   if (VAR_31) {
    FUNC_6(VAR_21, "failed to set gpio %d as "
     "an output\n", VAR_32);
    VAR_32++;
    goto err_gpios;
   }
  }
 }

 for (VAR_33 = 0; VAR_33 < VAR_10; VAR_33++) {
  VAR_24->pins[VAR_33] = FUNC_32(VAR_22, VAR_33);
  if (FUNC_0(VAR_24->pins[VAR_33])) {
   VAR_31 = FUNC_2(VAR_24->pins[VAR_33]);
   FUNC_6(VAR_21, "can't get pin %d: %d\n", VAR_33, VAR_31);
   goto err_pins;
  }
 }


 VAR_24->timer = FUNC_18();
 if (FUNC_0(VAR_24->timer)) {
  VAR_31 = FUNC_2(VAR_24->timer);
  FUNC_6(VAR_21, "failed to request qe timer: %i", VAR_31);
  goto err_get_timer;
 }

 VAR_31 = FUNC_34(VAR_24->timer->irq, VAR_19,
     0, "qe timer (usb)", VAR_23);
 if (VAR_31) {
  FUNC_6(VAR_21, "failed to request timer irq");
  goto err_timer_irq;
 }


 VAR_27 = FUNC_24(VAR_22, 0);
 if (VAR_27 == VAR_8) {
  FUNC_6(VAR_21, "could not get usb irq\n");
  VAR_31 = -VAR_0;
  goto err_usb_irq;
 }


 VAR_28 = FUNC_27(VAR_22, "fsl,fullspeed-clock", ((void*)0));
 if (VAR_28) {
  VAR_24->fullspeed_clk = FUNC_29(VAR_28);
  if (VAR_24->fullspeed_clk == VAR_13) {
   FUNC_6(VAR_21, "wrong fullspeed-clock\n");
   VAR_31 = -VAR_0;
   goto err_clocks;
  }
 }

 VAR_28 = FUNC_27(VAR_22, "fsl,lowspeed-clock", ((void*)0));
 if (VAR_28) {
  VAR_24->lowspeed_clk = FUNC_29(VAR_28);
  if (VAR_24->lowspeed_clk == VAR_13) {
   FUNC_6(VAR_21, "wrong lowspeed-clock\n");
   VAR_31 = -VAR_0;
   goto err_clocks;
  }
 }

 if (VAR_24->fullspeed_clk == VAR_14 &&
   VAR_24->lowspeed_clk == VAR_14) {
  FUNC_6(VAR_21, "no clocks specified\n");
  VAR_31 = -VAR_0;
  goto err_clocks;
 }

 FUNC_7(VAR_21, "at 0x%p, irq %d\n", VAR_23->regs, VAR_27);

 FUNC_11(VAR_24, VAR_5);


 if (VAR_24->fullspeed_clk != VAR_14) {
  FUNC_11(VAR_24, VAR_3);
  FUNC_33(VAR_24->fullspeed_clk, VAR_17);
 } else {
  FUNC_11(VAR_24, VAR_4);
  FUNC_33(VAR_24->lowspeed_clk, VAR_17 >> 3);
 }


 FUNC_28(&VAR_24->regs->usb_usber, 0xffff);
 FUNC_28(&VAR_24->regs->usb_usbmr, 0);

 VAR_31 = FUNC_37(VAR_23, VAR_27, 0);
 if (VAR_31 < 0)
  goto err_add_hcd;

 FUNC_10(VAR_23->self.controller);

 FUNC_12(VAR_24);

 return 0;

err_add_hcd:
err_clocks:
 FUNC_23(VAR_27);
err_usb_irq:
 FUNC_13(VAR_24->timer->irq, VAR_23);
err_timer_irq:
 FUNC_19(VAR_24->timer);
err_get_timer:
err_pins:
 while (--VAR_33 >= 0)
  FUNC_31(VAR_24->pins[VAR_33]);
err_gpios:
 while (--VAR_32 >= 0) {
  if (FUNC_16(VAR_24->gpios[VAR_32]))
   FUNC_15(VAR_24->gpios[VAR_32]);
 }
 FUNC_5(VAR_26);
err_pram:
 FUNC_22(VAR_23->regs);
err_regs:
 FUNC_40(VAR_23);
 return VAR_31;
}
