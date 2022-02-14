
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slot {TYPE_1__* zdev; } ;
struct hotplug_slot {int dummy; } ;
struct TYPE_2__ {int state; } ;



 struct slot* FUNC_0 (struct hotplug_slot*) ;

__attribute__((used)) static int FUNC_1(struct hotplug_slot *VAR_0, u8 *VAR_1)
{
 struct slot *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_2->zdev->state) {
 case 128:
  *VAR_1 = 0;
  break;
 default:
  *VAR_1 = 1;
  break;
 }
 return 0;
}
