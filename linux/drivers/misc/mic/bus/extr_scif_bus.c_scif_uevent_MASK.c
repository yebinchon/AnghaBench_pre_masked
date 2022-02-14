
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor; int device; } ;
struct scif_hw_dev {TYPE_1__ id; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ,int ) ;
 struct scif_hw_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct scif_hw_dev *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, "MODALIAS=scif:d%08Xv%08X",
         VAR_2->id.device, VAR_2->id.vendor);
}
