
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct thermal_zone_device {TYPE_1__* tzp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int sustainable_power; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,int *) ;
 struct thermal_zone_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct thermal_zone_device *VAR_6 = FUNC_1(VAR_2);
 u32 VAR_7;

 if (!VAR_6->tzp)
  return -VAR_1;

 if (FUNC_0(VAR_4, 10, &VAR_7))
  return -VAR_0;

 VAR_6->tzp->sustainable_power = VAR_7;

 return VAR_5;
}
