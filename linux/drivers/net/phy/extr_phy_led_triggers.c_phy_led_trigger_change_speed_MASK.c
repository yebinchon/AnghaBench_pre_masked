
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_led_trigger {int trigger; } ;
struct phy_device {scalar_t__ speed; struct phy_led_trigger* last_triggered; TYPE_1__* led_link_trigger; int attached_dev; int link; } ;
struct TYPE_2__ {int trigger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 void FUNC_2 (struct phy_device*) ;
 struct phy_led_trigger* FUNC_3 (struct phy_device*,scalar_t__) ;

void FUNC_4(struct phy_device *VAR_2)
{
 struct phy_led_trigger *VAR_3;

 if (!VAR_2->link)
  return FUNC_2(VAR_2);

 if (VAR_2->speed == 0)
  return;

 VAR_3 = FUNC_3(VAR_2, VAR_2->speed);
 if (!VAR_3) {
  FUNC_1(VAR_2->attached_dev,
        "No phy led trigger registered for speed(%d)\n",
        VAR_2->speed);
  return FUNC_2(VAR_2);
 }

 if (VAR_3 != VAR_2->last_triggered) {
  if (!VAR_2->last_triggered)
   FUNC_0(&VAR_2->led_link_trigger->trigger,
       VAR_0);
  else
   FUNC_0(&VAR_2->last_triggered->trigger, VAR_1);

  FUNC_0(&VAR_3->trigger, VAR_0);
  VAR_2->last_triggered = VAR_3;
 }
}
