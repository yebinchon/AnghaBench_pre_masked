
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
struct bq2415x_device {int dummy; } ;
typedef int ssize_t ;


 int EINVAL ;
 int bq2415x_get_battery_regulation_voltage (struct bq2415x_device*) ;
 int bq2415x_get_charge_current (struct bq2415x_device*) ;
 int bq2415x_get_current_limit (struct bq2415x_device*) ;
 int bq2415x_get_termination_current (struct bq2415x_device*) ;
 int bq2415x_get_weak_battery_voltage (struct bq2415x_device*) ;
 struct power_supply* dev_get_drvdata (struct device*) ;
 struct bq2415x_device* power_supply_get_drvdata (struct power_supply*) ;
 int sprintf (char*,char*,int) ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static ssize_t bq2415x_sysfs_show_limit(struct device *dev,
     struct device_attribute *attr,
     char *buf)
{
 struct power_supply *psy = dev_get_drvdata(dev);
 struct bq2415x_device *bq = power_supply_get_drvdata(psy);
 int ret;

 if (strcmp(attr->attr.name, "current_limit") == 0)
  ret = bq2415x_get_current_limit(bq);
 else if (strcmp(attr->attr.name, "weak_battery_voltage") == 0)
  ret = bq2415x_get_weak_battery_voltage(bq);
 else if (strcmp(attr->attr.name, "battery_regulation_voltage") == 0)
  ret = bq2415x_get_battery_regulation_voltage(bq);
 else if (strcmp(attr->attr.name, "charge_current") == 0)
  ret = bq2415x_get_charge_current(bq);
 else if (strcmp(attr->attr.name, "termination_current") == 0)
  ret = bq2415x_get_termination_current(bq);
 else
  return -EINVAL;

 if (ret < 0)
  return ret;
 return sprintf(buf, "%d\n", ret);
}
