
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {size_t state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int FUNC_0 (char const* const*) ;






 struct nvme_ctrl* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct nvme_ctrl *VAR_3 = FUNC_1(VAR_0);
 static const char *const VAR_4[] = {
  [129] = "new",
  [130] = "live",
  [128] = "resetting",
  [133] = "connecting",
  [131] = "deleting",
  [132] = "dead",
 };

 if ((unsigned)VAR_3->state < FUNC_0(VAR_4) &&
     VAR_4[VAR_3->state])
  return FUNC_2(VAR_2, "%s\n", VAR_4[VAR_3->state]);

 return FUNC_2(VAR_2, "unknown state\n");
}
