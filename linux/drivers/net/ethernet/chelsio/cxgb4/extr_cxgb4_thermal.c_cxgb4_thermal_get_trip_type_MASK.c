
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct adapter* devdata; } ;
struct TYPE_2__ {int trip_type; int trip_temp; } ;
struct adapter {TYPE_1__ ch_thermal; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_1,
           int VAR_2, enum thermal_trip_type *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->devdata;

 if (!VAR_4->ch_thermal.trip_temp)
  return -VAR_0;

 *VAR_3 = VAR_4->ch_thermal.trip_type;
 return 0;
}
