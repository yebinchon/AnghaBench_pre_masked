
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct power_supply {int dummy; } ;
struct ds2780_device_info {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ds2780_device_info*,int) ;
 int FUNC_2 (char const*,int ,int*) ;
 struct ds2780_device_info* FUNC_3 (struct power_supply*) ;
 struct power_supply* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
 struct device_attribute *VAR_2,
 const char *VAR_3,
 size_t VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 struct power_supply *VAR_7 = FUNC_4(VAR_1);
 struct ds2780_device_info *VAR_8 = FUNC_3(VAR_7);

 VAR_5 = FUNC_2(VAR_3, 0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;


 if (VAR_6 > 1999) {
  FUNC_0(VAR_8->dev, "Invalid rsgain setting (0 - 1999)\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_8, VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4;
}
