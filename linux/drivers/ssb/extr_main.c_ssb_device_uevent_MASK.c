
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revision; int coreid; int vendor; } ;
struct ssb_device {TYPE_1__ id; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int ,int ,int ) ;
 struct ssb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct ssb_device *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2,
        "MODALIAS=ssb:v%04Xid%04Xrev%02X",
        VAR_3->id.vendor, VAR_3->id.coreid,
        VAR_3->id.revision);
}
