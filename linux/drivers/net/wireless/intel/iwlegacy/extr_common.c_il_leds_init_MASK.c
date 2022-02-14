
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int max_brightness; int name; int default_trigger; int blink_set; int brightness_set; } ;
struct il_priv {int led_registered; TYPE_3__ led; TYPE_2__* pci_dev; TYPE_4__* hw; TYPE_1__* cfg; } ;
struct TYPE_9__ {int wiphy; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int led_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct il_priv *VAR_6)
{
 int VAR_7 = VAR_5;
 int VAR_8;

 if (VAR_7 == 129)
  VAR_7 = VAR_6->cfg->led_mode;

 VAR_6->led.name =
     FUNC_4(VAR_0, "%s-led", FUNC_7(VAR_6->hw->wiphy));
 VAR_6->led.brightness_set = VAR_4;
 VAR_6->led.blink_set = VAR_3;
 VAR_6->led.max_brightness = 1;

 switch (VAR_7) {
 case 129:
  FUNC_1(1);
  break;
 case 130:
  VAR_6->led.default_trigger =
      FUNC_2(VAR_6->hw,
           VAR_1,
           VAR_2,
           FUNC_0(VAR_2));
  break;
 case 128:
  VAR_6->led.default_trigger = FUNC_3(VAR_6->hw);
  break;
 }

 VAR_8 = FUNC_6(&VAR_6->pci_dev->dev, &VAR_6->led);
 if (VAR_8) {
  FUNC_5(VAR_6->led.name);
  return;
 }

 VAR_6->led_registered = 1;
}
