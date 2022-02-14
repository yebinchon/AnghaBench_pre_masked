
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct phy_led_trigger {unsigned int speed; TYPE_1__ trigger; int name; } ;
struct phy_device {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct phy_device*,int ,int,int ) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_0,
        struct phy_led_trigger *VAR_1,
        unsigned int VAR_2)
{
 VAR_1->speed = VAR_2;
 FUNC_1(VAR_0, VAR_1->name, sizeof(VAR_1->name),
        FUNC_2(VAR_2));
 VAR_1->trigger.name = VAR_1->name;

 return FUNC_0(&VAR_1->trigger);
}
