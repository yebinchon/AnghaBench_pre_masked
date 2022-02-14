
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bq2415x_device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bq2415x_device*,unsigned int,unsigned int) ;
 struct power_supply* FUNC_1 (struct device*) ;
 struct bq2415x_device* FUNC_2 (struct power_supply*) ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3,
        size_t VAR_4)
{
 struct power_supply *VAR_5 = FUNC_1(VAR_1);
 struct bq2415x_device *VAR_6 = FUNC_2(VAR_5);
 ssize_t VAR_7 = 0;
 unsigned int VAR_8;
 unsigned int VAR_9;

 if (FUNC_3(VAR_3, "%x %x", &VAR_8, &VAR_9) != 2)
  return -VAR_0;

 if (VAR_8 > 4 || VAR_9 > 255)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6, VAR_8, VAR_9);
 if (VAR_7 < 0)
  return VAR_7;
 return VAR_4;
}
