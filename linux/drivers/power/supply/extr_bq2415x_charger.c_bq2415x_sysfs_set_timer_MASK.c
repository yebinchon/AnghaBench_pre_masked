
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bq2415x_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct bq2415x_device*,int ) ;
 int FUNC_1 (struct bq2415x_device*,int) ;
 struct power_supply* FUNC_2 (struct device*) ;
 struct bq2415x_device* FUNC_3 (struct power_supply*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3,
           size_t VAR_4)
{
 struct power_supply *VAR_5 = FUNC_2(VAR_1);
 struct bq2415x_device *VAR_6 = FUNC_3(VAR_5);
 int VAR_7 = 0;

 if (FUNC_4(VAR_3, "auto", 4) == 0)
  FUNC_1(VAR_6, 1);
 else if (FUNC_4(VAR_3, "off", 3) == 0)
  FUNC_1(VAR_6, 0);
 else
  VAR_7 = FUNC_0(VAR_6, VAR_0);

 if (VAR_7 < 0)
  return VAR_7;
 return VAR_4;
}
