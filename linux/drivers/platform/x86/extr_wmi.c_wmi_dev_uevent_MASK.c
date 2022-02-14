
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int guid; } ;
struct wmi_block {TYPE_1__ gblock; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct wmi_block* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct wmi_block *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2, "MODALIAS=wmi:%pUL", VAR_3->gblock.guid))
  return -VAR_0;

 if (FUNC_0(VAR_2, "WMI_GUID=%pUL", VAR_3->gblock.guid))
  return -VAR_0;

 return 0;
}
