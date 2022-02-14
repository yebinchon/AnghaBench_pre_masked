
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int uuid; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int *) ;
 TYPE_2__* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0,
        struct kobj_uevent_env *VAR_1)
{
 uuid_t *VAR_2 = &FUNC_1(VAR_0)->id.uuid;

 return FUNC_0(VAR_1, "MODALIAS=tee:%pUb", VAR_2);
}
