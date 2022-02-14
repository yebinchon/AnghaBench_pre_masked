
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {int type; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;






 int FUNC_0 (struct kobj_uevent_env*,char*,...) ;
 int FUNC_1 (struct mmc_card*) ;
 struct mmc_card* FUNC_2 (struct device*) ;

__attribute__((used)) static int
FUNC_3(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct mmc_card *VAR_2 = FUNC_2(VAR_0);
 const char *VAR_3;
 int VAR_4 = 0;

 switch (VAR_2->type) {
 case 131:
  VAR_3 = "MMC";
  break;
 case 130:
  VAR_3 = "SD";
  break;
 case 129:
  VAR_3 = "SDIO";
  break;
 case 128:
  VAR_3 = "SDcombo";
  break;
 default:
  VAR_3 = ((void*)0);
 }

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_1, "MMC_TYPE=%s", VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_1, "MMC_NAME=%s", FUNC_1(VAR_2));
 if (VAR_4)
  return VAR_4;





 VAR_4 = FUNC_0(VAR_1, "MODALIAS=mmc:block");

 return VAR_4;
}
