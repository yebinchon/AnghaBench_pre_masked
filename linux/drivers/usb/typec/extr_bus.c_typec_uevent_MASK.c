
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_altmode {int mode; int svid; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int ,...) ;
 struct typec_altmode* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct typec_altmode *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2, "SVID=%04X", VAR_3->svid))
  return -VAR_0;

 if (FUNC_0(VAR_2, "MODE=%u", VAR_3->mode))
  return -VAR_0;

 return FUNC_0(VAR_2, "MODALIAS=typec:id%04Xm%02X",
         VAR_3->svid, VAR_3->mode);
}
