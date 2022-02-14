
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_device {int dev; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int FUNC_1 (int *) ;
 struct slim_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct slim_device *VAR_2 = FUNC_2(VAR_0);

 return FUNC_0(VAR_1, "MODALIAS=slim:%s", FUNC_1(&VAR_2->dev));
}
