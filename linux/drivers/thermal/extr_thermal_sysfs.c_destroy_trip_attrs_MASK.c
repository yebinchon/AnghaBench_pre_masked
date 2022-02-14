
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int attrs; } ;
struct thermal_zone_device {TYPE_2__ trips_attribute_group; int trip_hyst_attrs; TYPE_1__* ops; int trip_temp_attrs; int trip_type_attrs; } ;
struct TYPE_3__ {scalar_t__ get_trip_hyst; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct thermal_zone_device *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->trip_type_attrs);
 FUNC_0(VAR_0->trip_temp_attrs);
 if (VAR_0->ops->get_trip_hyst)
  FUNC_0(VAR_0->trip_hyst_attrs);
 FUNC_0(VAR_0->trips_attribute_group.attrs);
}
