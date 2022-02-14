
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static int
FUNC_3(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, "USB_ROLE_SWITCH=%s", FUNC_2(VAR_0));
 if (VAR_2)
  FUNC_1(VAR_0, "failed to add uevent USB_ROLE_SWITCH\n");

 return VAR_2;
}
