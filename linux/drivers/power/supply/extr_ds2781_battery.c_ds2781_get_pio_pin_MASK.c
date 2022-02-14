
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct power_supply {int dummy; } ;
struct ds2781_device_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds2781_device_info*,int*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct ds2781_device_info* FUNC_2 (struct power_supply*) ;
 struct power_supply* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
 struct device_attribute *VAR_3,
 char *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 struct power_supply *VAR_7 = FUNC_3(VAR_2);
 struct ds2781_device_info *VAR_8 = FUNC_2(VAR_7);

 VAR_5 = FUNC_0(VAR_8, &VAR_6, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4, "%d\n", VAR_6 & VAR_1);
 return VAR_5;
}
