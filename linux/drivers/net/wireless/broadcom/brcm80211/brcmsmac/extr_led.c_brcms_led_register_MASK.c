
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct ssb_sprom {int gpio0; int gpio1; int gpio2; int gpio3; } ;
struct gpio_chip {unsigned int base; } ;
struct brcms_led {int gpio; int active_low; unsigned int name; } ;
struct TYPE_12__ {unsigned int name; int brightness_set; int default_trigger; } ;
struct brcms_info {struct brcms_led radio_led; int wiphy; TYPE_6__ led_dev; TYPE_5__* pub; TYPE_4__* wlc; } ;
struct bcma_drv_cc {struct gpio_chip gpio; } ;
struct TYPE_11__ {int ieee_hw; } ;
struct TYPE_10__ {TYPE_3__* hw; } ;
struct TYPE_9__ {TYPE_2__* d11core; } ;
struct TYPE_8__ {TYPE_1__* bus; } ;
struct TYPE_7__ {struct ssb_sprom sprom; struct bcma_drv_cc drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (unsigned int,int,char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,unsigned int,int) ;
 int FUNC_8 (int ,char*,unsigned int,unsigned int) ;
 char* FUNC_9 (int ) ;

int FUNC_10(struct brcms_info *VAR_8)
{
 int VAR_9, VAR_10;
 struct brcms_led *VAR_11 = &VAR_8->radio_led;

 struct bcma_drv_cc *VAR_12 = &VAR_8->wlc->hw->d11core->bus->drv_cc;
 struct gpio_chip *VAR_13 = &VAR_12->gpio;
 struct ssb_sprom *VAR_14 = &VAR_8->wlc->hw->d11core->bus->sprom;
 u8 *VAR_15[] = { &VAR_14->gpio0,
  &VAR_14->gpio1,
  &VAR_14->gpio2,
  &VAR_14->gpio3 };
 unsigned VAR_16 = -1;
 bool VAR_17 = 0;


 VAR_11->gpio = -1;
 VAR_11->active_low = 0;

 if (!VAR_13 || !FUNC_1(VAR_13->base))
  return -VAR_4;


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  u8 VAR_18 = *VAR_15[VAR_9];
  if ((VAR_18 & VAR_1) == VAR_3) {
   VAR_16 = VAR_13->base + VAR_9;
   if (VAR_18 & VAR_0)
    VAR_17 = 1;
   break;
  }
 }

 if (VAR_16 == -1 || !FUNC_1(VAR_16))
  return -VAR_4;


 VAR_10 = FUNC_2(VAR_16,
    VAR_17 ? VAR_5
     : VAR_6,
    "radio on");
 if (VAR_10) {
  FUNC_7(VAR_8->wiphy, "requesting led gpio %d failed (err: %d)\n",
     VAR_16, VAR_10);
  return VAR_10;
 }
 VAR_10 = FUNC_0(VAR_16, 1);
 if (VAR_10) {
  FUNC_7(VAR_8->wiphy, "cannot set led gpio %d to output (err: %d)\n",
     VAR_16, VAR_10);
  return VAR_10;
 }

 FUNC_5(VAR_8->radio_led.name, sizeof(VAR_8->radio_led.name),
   "brcmsmac-%s:radio", FUNC_9(VAR_8->wiphy));

 VAR_8->led_dev.name = VAR_8->radio_led.name;
 VAR_8->led_dev.default_trigger =
  FUNC_3(VAR_8->pub->ieee_hw);
 VAR_8->led_dev.brightness_set = VAR_7;
 VAR_10 = FUNC_4(FUNC_6(VAR_8->wiphy), &VAR_8->led_dev);

 if (VAR_10) {
  FUNC_7(VAR_8->wiphy, "cannot register led device: %s (err: %d)\n",
     VAR_8->radio_led.name, VAR_10);
  return VAR_10;
 }

 FUNC_8(VAR_8->wiphy, "registered radio enabled led device: %s gpio: %d\n",
     VAR_8->radio_led.name,
     VAR_16);
 VAR_11->gpio = VAR_16;
 VAR_11->active_low = VAR_17;

 return 0;
}
