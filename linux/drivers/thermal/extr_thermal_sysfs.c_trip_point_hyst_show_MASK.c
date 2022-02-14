
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {TYPE_2__* ops; } ;
struct TYPE_3__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* get_trip_hyst ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (struct thermal_zone_device*,int,int*) ;
 struct thermal_zone_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct thermal_zone_device *VAR_5 = FUNC_3(VAR_2);
 int VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_5->ops->get_trip_hyst)
  return -VAR_1;

 if (FUNC_1(VAR_3->attr.name, "trip_point_%d_hyst", &VAR_6) != 1)
  return -VAR_0;

 VAR_7 = VAR_5->ops->get_trip_hyst(VAR_5, VAR_6, &VAR_8);

 return VAR_7 ? VAR_7 : FUNC_0(VAR_4, "%d\n", VAR_8);
}
