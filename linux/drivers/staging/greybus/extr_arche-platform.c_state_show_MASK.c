
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct arche_platform_drvdata {int state; } ;
typedef int ssize_t ;






 struct arche_platform_drvdata* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct arche_platform_drvdata *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_3->state) {
 case 129:
  return FUNC_1(VAR_2, "off\n");
 case 131:
  return FUNC_1(VAR_2, "active\n");
 case 128:
  return FUNC_1(VAR_2, "standby\n");
 case 130:
  return FUNC_1(VAR_2, "fw_flashing\n");
 default:
  return FUNC_1(VAR_2, "unknown state\n");
 }
}
