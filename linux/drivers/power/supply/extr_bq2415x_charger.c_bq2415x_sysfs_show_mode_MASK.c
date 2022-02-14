
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bq2415x_device {scalar_t__ automode; int mode; } ;
typedef int ssize_t ;







 struct power_supply* FUNC_0 (struct device*) ;
 struct bq2415x_device* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 struct power_supply *VAR_3 = FUNC_0(VAR_0);
 struct bq2415x_device *VAR_4 = FUNC_1(VAR_3);
 ssize_t VAR_5 = 0;

 if (VAR_4->automode > 0)
  VAR_5 += FUNC_2(VAR_2+VAR_5, "auto (");

 switch (VAR_4->mode) {
 case 128:
  VAR_5 += FUNC_2(VAR_2+VAR_5, "off");
  break;
 case 129:
  VAR_5 += FUNC_2(VAR_2+VAR_5, "none");
  break;
 case 130:
  VAR_5 += FUNC_2(VAR_2+VAR_5, "host");
  break;
 case 131:
  VAR_5 += FUNC_2(VAR_2+VAR_5, "dedicated");
  break;
 case 132:
  VAR_5 += FUNC_2(VAR_2+VAR_5, "boost");
  break;
 }

 if (VAR_4->automode > 0)
  VAR_5 += FUNC_2(VAR_2+VAR_5, ")");

 VAR_5 += FUNC_2(VAR_2+VAR_5, "\n");
 return VAR_5;
}
