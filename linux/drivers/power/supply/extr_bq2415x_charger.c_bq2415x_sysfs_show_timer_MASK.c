
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bq2415x_device {char* timer_error; scalar_t__ autotimer; } ;
typedef int ssize_t ;


 struct power_supply* FUNC_0 (struct device*) ;
 struct bq2415x_device* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct power_supply *VAR_3 = FUNC_0(VAR_0);
 struct bq2415x_device *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->timer_error)
  return FUNC_2(VAR_2, "%s\n", VAR_4->timer_error);

 if (VAR_4->autotimer)
  return FUNC_2(VAR_2, "auto\n");
 return FUNC_2(VAR_2, "off\n");
}
