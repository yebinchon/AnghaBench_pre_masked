
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_otg {int dummy; } ;
struct resource {int start; unsigned long flags; } ;
struct platform_device {int dev; } ;
struct gpio_vbus_mach_info {int gpio_vbus; int gpio_pullup; int wakeup; int gpio_pullup_inverted; } ;
struct TYPE_4__ {char* label; TYPE_1__* otg; int set_suspend; int set_power; int * dev; } ;
struct gpio_vbus_data {int irq; TYPE_2__ phy; int * vbus_draw; int work; int * dev; } ;
struct TYPE_3__ {int set_peripheral; TYPE_2__* usb_phy; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int,...) ;
 struct gpio_vbus_mach_info* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 void* FUNC_8 (int *,int,int ) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int,int ,unsigned long,char*,struct platform_device*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct gpio_vbus_data*) ;
 int FUNC_17 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_14)
{
 struct gpio_vbus_mach_info *VAR_15 = FUNC_5(&VAR_14->dev);
 struct gpio_vbus_data *VAR_16;
 struct resource *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 unsigned long VAR_21;

 if (!VAR_15 || !FUNC_13(VAR_15->gpio_vbus))
  return -VAR_0;
 VAR_19 = VAR_15->gpio_vbus;

 VAR_16 = FUNC_8(&VAR_14->dev, sizeof(struct gpio_vbus_data),
     VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->phy.otg = FUNC_8(&VAR_14->dev, sizeof(struct usb_otg),
       VAR_2);
 if (!VAR_16->phy.otg)
  return -VAR_1;

 FUNC_16(VAR_14, VAR_16);
 VAR_16->dev = &VAR_14->dev;
 VAR_16->phy.label = "gpio-vbus";
 VAR_16->phy.dev = VAR_16->dev;
 VAR_16->phy.set_power = VAR_11;
 VAR_16->phy.set_suspend = VAR_12;

 VAR_16->phy.otg->state = VAR_6;
 VAR_16->phy.otg->usb_phy = &VAR_16->phy;
 VAR_16->phy.otg->set_peripheral = VAR_10;

 VAR_18 = FUNC_7(&VAR_14->dev, VAR_19, "vbus_detect");
 if (VAR_18) {
  FUNC_4(&VAR_14->dev, "can't request vbus gpio %d, err: %d\n",
   VAR_19, VAR_18);
  return VAR_18;
 }
 FUNC_11(VAR_19);

 VAR_17 = FUNC_15(VAR_14, VAR_3, 0);
 if (VAR_17) {
  VAR_20 = VAR_17->start;
  VAR_21 = (VAR_17->flags & VAR_5) | VAR_4;
 } else {
  VAR_20 = FUNC_14(VAR_19);
  VAR_21 = VAR_8;
 }

 VAR_16->irq = VAR_20;


 VAR_19 = VAR_15->gpio_pullup;
 if (FUNC_13(VAR_19)) {
  VAR_18 = FUNC_7(&VAR_14->dev, VAR_19, "udc_pullup");
  if (VAR_18) {
   FUNC_4(&VAR_14->dev,
    "can't request pullup gpio %d, err: %d\n",
    VAR_19, VAR_18);
   return VAR_18;
  }
  FUNC_12(VAR_19, VAR_15->gpio_pullup_inverted);
 }

 VAR_18 = FUNC_10(&VAR_14->dev, VAR_20, VAR_9, VAR_21,
          "vbus_detect", VAR_14);
 if (VAR_18) {
  FUNC_4(&VAR_14->dev, "can't request irq %i, err: %d\n",
   VAR_20, VAR_18);
  return VAR_18;
 }

 FUNC_0(&VAR_16->work, VAR_13);

 VAR_16->vbus_draw = FUNC_9(&VAR_14->dev, "vbus_draw");
 if (FUNC_1(VAR_16->vbus_draw)) {
  FUNC_3(&VAR_14->dev, "can't get vbus_draw regulator, err: %ld\n",
   FUNC_2(VAR_16->vbus_draw));
  VAR_16->vbus_draw = ((void*)0);
 }


 VAR_18 = FUNC_17(&VAR_16->phy, VAR_7);
 if (VAR_18) {
  FUNC_4(&VAR_14->dev, "can't register transceiver, err: %d\n",
   VAR_18);
  return VAR_18;
 }

 FUNC_6(&VAR_14->dev, VAR_15->wakeup);

 return 0;
}
