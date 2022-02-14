
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
struct TYPE_3__ {int (* set_trip_hyst ) (struct thermal_zone_device*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,int*) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (struct thermal_zone_device*,int,int) ;
 int FUNC_3 (struct thermal_zone_device*) ;
 struct thermal_zone_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct thermal_zone_device *VAR_6 = FUNC_4(VAR_2);
 int VAR_7, VAR_8;
 int VAR_9;

 if (!VAR_6->ops->set_trip_hyst)
  return -VAR_1;

 if (FUNC_1(VAR_3->attr.name, "trip_point_%d_hyst", &VAR_7) != 1)
  return -VAR_0;

 if (FUNC_0(VAR_4, 10, &VAR_9))
  return -VAR_0;






 VAR_8 = VAR_6->ops->set_trip_hyst(VAR_6, VAR_7, VAR_9);

 if (!VAR_8)
  FUNC_3(VAR_6);

 return VAR_8 ? VAR_8 : VAR_5;
}
