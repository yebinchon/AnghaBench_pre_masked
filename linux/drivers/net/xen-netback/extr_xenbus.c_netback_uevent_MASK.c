
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenbus_device {int dev; } ;
struct kobj_uevent_env {int dummy; } ;
struct backend_info {TYPE_2__* vif; int hotplug_script; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct backend_info* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct xenbus_device *VAR_1,
     struct kobj_uevent_env *VAR_2)
{
 struct backend_info *VAR_3 = FUNC_1(&VAR_1->dev);

 if (!VAR_3)
  return 0;

 if (FUNC_0(VAR_2, "script=%s", VAR_3->hotplug_script))
  return -VAR_0;

 if (!VAR_3->vif)
  return 0;

 return FUNC_0(VAR_2, "vif=%s", VAR_3->vif->dev->name);
}
