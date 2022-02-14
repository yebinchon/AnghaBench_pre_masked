
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int devicetype; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct xenbus_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
      struct kobj_uevent_env *VAR_2)
{
 struct xenbus_device *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2, "MODALIAS=xen:%s", VAR_3->devicetype))
  return -VAR_0;

 return 0;
}
