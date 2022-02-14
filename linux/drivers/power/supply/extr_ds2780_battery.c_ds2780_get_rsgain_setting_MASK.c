
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct power_supply {int dummy; } ;
struct ds2780_device_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ds2780_device_info*,int*) ;
 int FUNC_1 (char*,char*,int) ;
 struct ds2780_device_info* FUNC_2 (struct power_supply*) ;
 struct power_supply* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
 struct device_attribute *VAR_1,
 char *VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 struct power_supply *VAR_5 = FUNC_3(VAR_0);
 struct ds2780_device_info *VAR_6 = FUNC_2(VAR_5);

 VAR_3 = FUNC_0(VAR_6, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
