
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct thermal_zone_device*,int*) ;
 struct thermal_zone_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct thermal_zone_device *VAR_3 = FUNC_2(VAR_0);
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);

 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_2, "%d\n", VAR_4);
}
