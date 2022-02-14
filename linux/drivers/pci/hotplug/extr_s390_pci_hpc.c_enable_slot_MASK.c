
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot {TYPE_1__* zdev; } ;
struct hotplug_slot {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct slot*) ;
 int FUNC_5 (struct slot*) ;
 struct slot* FUNC_6 (struct hotplug_slot*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct hotplug_slot *VAR_3)
{
 struct slot *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 if (VAR_4->zdev->state != VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_7(VAR_4->zdev);
 if (VAR_5)
  goto out_deconfigure;

 FUNC_2(VAR_4->zdev->bus, VAR_1);
 FUNC_1();
 FUNC_0(VAR_4->zdev->bus);
 FUNC_3();

 return VAR_5;

out_deconfigure:
 FUNC_5(VAR_4);
 return VAR_5;
}
