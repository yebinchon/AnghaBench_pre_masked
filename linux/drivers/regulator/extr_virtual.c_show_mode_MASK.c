
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_consumer_data {int mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;






 struct virtual_consumer_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct virtual_consumer_data *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_3->mode) {
 case 131:
  return FUNC_1(VAR_2, "fast\n");
 case 129:
  return FUNC_1(VAR_2, "normal\n");
 case 130:
  return FUNC_1(VAR_2, "idle\n");
 case 128:
  return FUNC_1(VAR_2, "standby\n");
 default:
  return FUNC_1(VAR_2, "unknown\n");
 }
}
