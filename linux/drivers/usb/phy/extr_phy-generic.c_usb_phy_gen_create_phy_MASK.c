
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usb_phy_generic_platform_data {int type; int needs_vcc; void* gpiod_vbus; int gpio_reset; scalar_t__ clk_rate; } ;
struct TYPE_3__ {char* label; int type; TYPE_2__* otg; int set_suspend; struct device* dev; } ;
struct usb_phy_generic {TYPE_1__ phy; struct device* dev; int vcc; int clk; void* gpiod_reset; void* gpiod_vbus; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef enum usb_phy_type { ____Placeholder_usb_phy_type } usb_phy_type ;
struct TYPE_4__ {int set_peripheral; int set_host; TYPE_1__* usb_phy; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int VAR_6 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int ,int ,int ) ;
 void* FUNC_9 (struct device*,char*,int ) ;
 TYPE_2__* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,char*) ;
 scalar_t__ FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (void*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (struct device_node*,char*) ;
 scalar_t__ FUNC_16 (struct device_node*,char*,scalar_t__*) ;

int FUNC_17(struct device *VAR_10, struct usb_phy_generic *VAR_11,
  struct usb_phy_generic_platform_data *VAR_12)
{
 enum usb_phy_type VAR_13 = VAR_6;
 int VAR_14 = 0;

 u32 VAR_15 = 0;
 bool VAR_16 = 0, VAR_17 = 0;

 if (VAR_10->of_node) {
  struct device_node *VAR_18 = VAR_10->of_node;

  if (FUNC_16(VAR_18, "clock-frequency", &VAR_15))
   VAR_15 = 0;

  VAR_16 = FUNC_15(VAR_18, "vcc-supply");
  VAR_17 = FUNC_15(VAR_18, "clocks");
  VAR_11->gpiod_reset = FUNC_9(VAR_10, "reset",
          VAR_3);
  VAR_14 = FUNC_2(VAR_11->gpiod_reset);
  if (!VAR_14) {
   VAR_11->gpiod_vbus = FUNC_9(VAR_10,
        "vbus-detect",
        VAR_3);
   VAR_14 = FUNC_2(VAR_11->gpiod_vbus);
  }
 } else if (VAR_12) {
  VAR_13 = VAR_12->type;
  VAR_15 = VAR_12->clk_rate;
  VAR_16 = VAR_12->needs_vcc;
  if (FUNC_12(VAR_12->gpio_reset)) {
   VAR_14 = FUNC_8(VAR_10, VAR_12->gpio_reset,
          VAR_4,
          FUNC_6(VAR_10));
   if (!VAR_14)
    VAR_11->gpiod_reset =
     FUNC_13(VAR_12->gpio_reset);
  }
  VAR_11->gpiod_vbus = VAR_12->gpiod_vbus;
 }

 if (VAR_14 == -VAR_1)
  return -VAR_1;
 if (VAR_14) {
  FUNC_5(VAR_10, "Error requesting RESET or VBUS GPIO\n");
  return VAR_14;
 }
 if (VAR_11->gpiod_reset)
  FUNC_14(VAR_11->gpiod_reset, 1);

 VAR_11->phy.otg = FUNC_10(VAR_10, sizeof(*VAR_11->phy.otg),
   VAR_2);
 if (!VAR_11->phy.otg)
  return -VAR_0;

 VAR_11->clk = FUNC_7(VAR_10, "main_clk");
 if (FUNC_0(VAR_11->clk)) {
  FUNC_4(VAR_10, "Can't get phy clock: %ld\n",
     FUNC_1(VAR_11->clk));
  if (VAR_17)
   return FUNC_1(VAR_11->clk);
 }

 if (!FUNC_0(VAR_11->clk) && VAR_15) {
  VAR_14 = FUNC_3(VAR_11->clk, VAR_15);
  if (VAR_14) {
   FUNC_5(VAR_10, "Error setting clock rate\n");
   return VAR_14;
  }
 }

 VAR_11->vcc = FUNC_11(VAR_10, "vcc");
 if (FUNC_0(VAR_11->vcc)) {
  FUNC_4(VAR_10, "Error getting vcc regulator: %ld\n",
     FUNC_1(VAR_11->vcc));
  if (VAR_16)
   return -VAR_1;
 }

 VAR_11->dev = VAR_10;
 VAR_11->phy.dev = VAR_11->dev;
 VAR_11->phy.label = "nop-xceiv";
 VAR_11->phy.set_suspend = VAR_9;
 VAR_11->phy.type = VAR_13;

 VAR_11->phy.otg->state = VAR_5;
 VAR_11->phy.otg->usb_phy = &VAR_11->phy;
 VAR_11->phy.otg->set_host = VAR_7;
 VAR_11->phy.otg->set_peripheral = VAR_8;

 return 0;
}
