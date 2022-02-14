
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int product; int vendor; } ;
struct ulpi {TYPE_1__ id; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ,int ) ;
 int FUNC_1 (struct device*,struct kobj_uevent_env*) ;
 struct ulpi* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 struct ulpi *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 != -VAR_0)
  return VAR_5;

 if (FUNC_0(VAR_3, "MODALIAS=ulpi:v%04xp%04x",
      VAR_4->id.vendor, VAR_4->id.product))
  return -VAR_1;
 return 0;
}
