
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int max_brightness; int name; int default_trigger; int brightness_set; } ;
struct iwl_mvm {int init_status; TYPE_2__ led; TYPE_1__* trans; TYPE_4__* hw; } ;
struct TYPE_8__ {int wiphy; } ;
struct TYPE_7__ {int led_mode; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;




 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct iwl_mvm *VAR_5)
{
 int VAR_6 = VAR_4.led_mode;
 int VAR_7;

 switch (VAR_6) {
 case 131:
  FUNC_0(VAR_5, "Blink led mode not supported, used default\n");

 case 130:
 case 128:
  VAR_6 = 128;
  break;
 case 129:
  FUNC_1(VAR_5, "Led disabled\n");
  return 0;
 default:
  return -VAR_0;
 }

 VAR_5->led.name = FUNC_3(VAR_1, "%s-led",
       FUNC_6(VAR_5->hw->wiphy));
 VAR_5->led.brightness_set = VAR_3;
 VAR_5->led.max_brightness = 1;

 if (VAR_6 == 128)
  VAR_5->led.default_trigger =
   FUNC_2(VAR_5->hw);

 VAR_7 = FUNC_5(VAR_5->trans->dev, &VAR_5->led);
 if (VAR_7) {
  FUNC_4(VAR_5->led.name);
  FUNC_1(VAR_5, "Failed to enable led\n");
  return VAR_7;
 }

 VAR_5->init_status |= VAR_2;
 return 0;
}
