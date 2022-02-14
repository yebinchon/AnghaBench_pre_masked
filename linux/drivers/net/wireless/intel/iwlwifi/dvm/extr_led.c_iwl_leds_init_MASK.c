
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int max_brightness; int name; int default_trigger; int blink_set; int brightness_set; } ;
struct iwl_priv {int led_registered; TYPE_3__ led; TYPE_2__* trans; TYPE_5__* hw; TYPE_1__* cfg; } ;
struct TYPE_11__ {int wiphy; } ;
struct TYPE_10__ {int led_mode; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int led_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,char*) ;


 int VAR_2 ;

 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct iwl_priv *VAR_7)
{
 int VAR_8 = VAR_6.led_mode;
 int VAR_9;

 if (VAR_8 == VAR_2) {
  FUNC_1(VAR_7, "Led disabled\n");
  return;
 }
 if (VAR_8 == 129)
  VAR_8 = VAR_7->cfg->led_mode;

 VAR_7->led.name = FUNC_5(VAR_0, "%s-led",
       FUNC_8(VAR_7->hw->wiphy));
 VAR_7->led.brightness_set = VAR_5;
 VAR_7->led.blink_set = VAR_4;
 VAR_7->led.max_brightness = 1;

 switch (VAR_8) {
 case 129:
  FUNC_2(1);
  break;
 case 130:
  VAR_7->led.default_trigger =
   FUNC_3(VAR_7->hw,
     VAR_1,
     VAR_3, FUNC_0(VAR_3));
  break;
 case 128:
  VAR_7->led.default_trigger =
   FUNC_4(VAR_7->hw);
  break;
 }

 VAR_9 = FUNC_7(VAR_7->trans->dev, &VAR_7->led);
 if (VAR_9) {
  FUNC_6(VAR_7->led.name);
  return;
 }

 VAR_7->led_registered = 1;
}
