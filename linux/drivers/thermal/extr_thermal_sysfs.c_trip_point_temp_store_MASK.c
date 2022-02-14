
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
struct TYPE_4__ {int name; } ;
struct device_attribute {TYPE_2__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* set_trip_temp ) (struct thermal_zone_device*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,int*) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (struct thermal_zone_device*,int,int) ;
 int FUNC_3 (struct thermal_zone_device*,int ) ;
 struct thermal_zone_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct thermal_zone_device *VAR_7 = FUNC_4(VAR_3);
 int VAR_8, VAR_9;
 int VAR_10;

 if (!VAR_7->ops->set_trip_temp)
  return -VAR_1;

 if (FUNC_1(VAR_4->attr.name, "trip_point_%d_temp", &VAR_8) != 1)
  return -VAR_0;

 if (FUNC_0(VAR_5, 10, &VAR_10))
  return -VAR_0;

 VAR_9 = VAR_7->ops->set_trip_temp(VAR_7, VAR_8, VAR_10);
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_7, VAR_2);

 return VAR_6;
}
