
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* default_trigger; int brightness_set; int name; } ;
struct p54_led_dev {int registered; unsigned int index; TYPE_2__ led_dev; int name; TYPE_1__* hw_dev; } ;
struct p54_common {TYPE_1__* hw; struct p54_led_dev* leds; } ;
struct TYPE_3__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,char*,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct p54_common *VAR_2,
       unsigned int VAR_3,
       char *VAR_4, const char *VAR_5)
{
 struct p54_led_dev *VAR_6 = &VAR_2->leds[VAR_3];
 int VAR_7;

 if (VAR_6->registered)
  return -VAR_0;

 FUNC_1(VAR_6->name, sizeof(VAR_6->name), "p54-%s::%s",
   FUNC_4(VAR_2->hw->wiphy), VAR_4);
 VAR_6->hw_dev = VAR_2->hw;
 VAR_6->index = VAR_3;
 VAR_6->led_dev.name = VAR_6->name;
 VAR_6->led_dev.default_trigger = VAR_5;
 VAR_6->led_dev.brightness_set = VAR_1;

 VAR_7 = FUNC_0(FUNC_2(VAR_2->hw->wiphy), &VAR_6->led_dev);
 if (VAR_7)
  FUNC_3(VAR_2->hw->wiphy,
     "Failed to register %s LED.\n", VAR_4);
 else
  VAR_6->registered = 1;

 return VAR_7;
}
