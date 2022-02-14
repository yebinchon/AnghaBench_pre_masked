
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 int FUNC_1 (struct thermal_zone_device*,char*) ;
 struct thermal_zone_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct thermal_zone_device *VAR_5 = FUNC_2(VAR_1);
 char VAR_6[VAR_0];
 int VAR_7;

 FUNC_0(VAR_6, sizeof(VAR_6), "%s", VAR_3);

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (!VAR_7)
  VAR_7 = VAR_4;

 return VAR_7;
}
