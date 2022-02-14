
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {TYPE_2__* last_triggered; TYPE_1__* led_link_trigger; } ;
struct TYPE_4__ {int trigger; } ;
struct TYPE_3__ {int trigger; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct phy_device *VAR_1)
{
 if (VAR_1->last_triggered) {
  FUNC_0(&VAR_1->last_triggered->trigger, VAR_0);
  FUNC_0(&VAR_1->led_link_trigger->trigger, VAR_0);
  VAR_1->last_triggered = ((void*)0);
 }
}
