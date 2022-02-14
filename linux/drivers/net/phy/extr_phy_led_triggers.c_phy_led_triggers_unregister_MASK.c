
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int phy_num_led_triggers; int * led_link_trigger; int * phy_led_triggers; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct phy_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->phy_num_led_triggers; VAR_1++)
  FUNC_0(&VAR_0->phy_led_triggers[VAR_1]);

 if (VAR_0->led_link_trigger)
  FUNC_0(VAR_0->led_link_trigger);
}
