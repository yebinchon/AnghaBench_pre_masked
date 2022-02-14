
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
struct apr_device {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int FUNC_1 (struct device*,struct kobj_uevent_env*) ;
 struct apr_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct apr_device *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 != -VAR_0)
  return VAR_4;

 return FUNC_0(VAR_2, "MODALIAS=apr:%s", VAR_3->name);
}
