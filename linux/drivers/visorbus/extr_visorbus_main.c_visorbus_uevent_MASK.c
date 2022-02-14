
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int visorchannel; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
typedef int guid_t ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int const*) ;
 struct visor_device* FUNC_1 (struct device*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct visor_device *VAR_2;
 const guid_t *VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_2->visorchannel);
 return FUNC_0(VAR_1, "MODALIAS=visorbus:%pUl", VAR_3);
}
