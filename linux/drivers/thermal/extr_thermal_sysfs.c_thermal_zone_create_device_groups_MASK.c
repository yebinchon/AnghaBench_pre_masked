
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct attribute_group const** groups; } ;
struct attribute_group {int dummy; } ;
struct thermal_zone_device {TYPE_1__ device; struct attribute_group trips_attribute_group; scalar_t__ trips; } ;


 int FUNC_0 (struct attribute_group**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct thermal_zone_device*,int) ;
 struct attribute_group** FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct attribute_group const**) ;
 struct attribute_group** VAR_2 ;

int FUNC_4(struct thermal_zone_device *VAR_3,
          int VAR_4)
{
 const struct attribute_group **VAR_5;
 int VAR_6, VAR_7, VAR_8;


 VAR_7 = FUNC_0(VAR_2) + 2;

 VAR_5 = FUNC_2(VAR_7, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7 - 2; VAR_6++)
  VAR_5[VAR_6] = VAR_2[VAR_6];

 if (VAR_3->trips) {
  VAR_8 = FUNC_1(VAR_3, VAR_4);
  if (VAR_8) {
   FUNC_3(VAR_5);

   return VAR_8;
  }

  VAR_5[VAR_7 - 2] = &VAR_3->trips_attribute_group;
 }

 VAR_3->device.groups = VAR_5;

 return 0;
}
