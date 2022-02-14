
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct power_supply {int dummy; } ;
struct ds2780_device_info {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ds2780_device_info*,int*,int ,int) ;
 int FUNC_2 (char const*,int ,int*) ;
 struct ds2780_device_info* FUNC_3 (struct power_supply*) ;
 struct power_supply* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
 struct device_attribute *VAR_3,
 const char *VAR_4,
 size_t VAR_5)
{
 int VAR_6;
 u8 VAR_7;
 struct power_supply *VAR_8 = FUNC_4(VAR_2);
 struct ds2780_device_info *VAR_9 = FUNC_3(VAR_8);

 VAR_6 = FUNC_2(VAR_4, 0, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 if ((VAR_7 != 0) && (VAR_7 != 1)) {
  FUNC_0(VAR_9->dev, "Invalid pio_pin setting (0 or 1)\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_1(VAR_9, &VAR_7,
    VAR_0, sizeof(u8));
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_5;
}
