
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_led_trigger {unsigned int speed; } ;
struct phy_device {unsigned int phy_num_led_triggers; struct phy_led_trigger* phy_led_triggers; } ;



__attribute__((used)) static struct phy_led_trigger *FUNC_0(struct phy_device *VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->phy_num_led_triggers; VAR_2++) {
  if (VAR_0->phy_led_triggers[VAR_2].speed == VAR_1)
   return &VAR_0->phy_led_triggers[VAR_2];
 }
 return ((void*)0);
}
