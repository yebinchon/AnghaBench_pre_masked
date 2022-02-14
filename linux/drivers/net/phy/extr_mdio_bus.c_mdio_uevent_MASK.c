
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct kobj_uevent_env*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != -VAR_0)
  return VAR_3;

 return 0;
}
