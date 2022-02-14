
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bq2415x_device {scalar_t__ automode; int reported_mode; } ;
typedef int ssize_t ;







 int VAR_0 ;
 struct power_supply* FUNC_0 (struct device*) ;
 struct bq2415x_device* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct power_supply *VAR_4 = FUNC_0(VAR_1);
 struct bq2415x_device *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->automode < 0)
  return -VAR_0;

 switch (VAR_5->reported_mode) {
 case 128:
  return FUNC_2(VAR_3, "off\n");
 case 129:
  return FUNC_2(VAR_3, "none\n");
 case 130:
  return FUNC_2(VAR_3, "host\n");
 case 131:
  return FUNC_2(VAR_3, "dedicated\n");
 case 132:
  return FUNC_2(VAR_3, "boost\n");
 }

 return -VAR_0;
}
