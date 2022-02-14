
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct phy_led_trigger {int dummy; } ;
struct TYPE_8__ {int dev; } ;
struct phy_device {int phy_num_led_triggers; TYPE_2__* led_link_trigger; TYPE_1__ mdio; TYPE_2__* phy_led_triggers; int * last_triggered; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {TYPE_4__ trigger; int name; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int,int,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct phy_device*) ;
 int FUNC_6 (struct phy_device*,int ,int,char*) ;
 int FUNC_7 (struct phy_device*,TYPE_2__*,unsigned int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct phy_device*,unsigned int*,int ) ;

int FUNC_10(struct phy_device *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5[50];

 VAR_2->phy_num_led_triggers = FUNC_9(VAR_2, VAR_5,
        FUNC_0(VAR_5));
 if (!VAR_2->phy_num_led_triggers)
  return 0;

 VAR_2->led_link_trigger = FUNC_3(&VAR_2->mdio.dev,
          sizeof(*VAR_2->led_link_trigger),
          VAR_1);
 if (!VAR_2->led_link_trigger) {
  VAR_4 = -VAR_0;
  goto out_clear;
 }

 FUNC_6(VAR_2, VAR_2->led_link_trigger->name,
        sizeof(VAR_2->led_link_trigger->name),
        "link");
 VAR_2->led_link_trigger->trigger.name = VAR_2->led_link_trigger->name;

 VAR_4 = FUNC_4(&VAR_2->led_link_trigger->trigger);
 if (VAR_4)
  goto out_free_link;

 VAR_2->phy_led_triggers = FUNC_1(&VAR_2->mdio.dev,
         VAR_2->phy_num_led_triggers,
         sizeof(struct phy_led_trigger),
         VAR_1);
 if (!VAR_2->phy_led_triggers) {
  VAR_4 = -VAR_0;
  goto out_unreg_link;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->phy_num_led_triggers; VAR_3++) {
  VAR_4 = FUNC_7(VAR_2, &VAR_2->phy_led_triggers[VAR_3],
            VAR_5[VAR_3]);
  if (VAR_4)
   goto out_unreg;
 }

 VAR_2->last_triggered = ((void*)0);
 FUNC_5(VAR_2);

 return 0;
out_unreg:
 while (VAR_3--)
  FUNC_8(&VAR_2->phy_led_triggers[VAR_3]);
 FUNC_2(&VAR_2->mdio.dev, VAR_2->phy_led_triggers);
out_unreg_link:
 FUNC_8(VAR_2->led_link_trigger);
out_free_link:
 FUNC_2(&VAR_2->mdio.dev, VAR_2->led_link_trigger);
 VAR_2->led_link_trigger = ((void*)0);
out_clear:
 VAR_2->phy_num_led_triggers = 0;
 return VAR_4;
}
