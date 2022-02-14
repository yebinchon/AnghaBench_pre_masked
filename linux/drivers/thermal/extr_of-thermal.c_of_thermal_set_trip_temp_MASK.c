
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int ntrips; TYPE_1__* trips; int sensor_data; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* set_trip_temp ) (int ,int,int) ;} ;
struct TYPE_3__ {int temperature; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_1, int VAR_2,
        int VAR_3)
{
 struct __thermal_zone *VAR_4 = VAR_1->devdata;

 if (VAR_2 >= VAR_4->ntrips || VAR_2 < 0)
  return -VAR_0;

 if (VAR_4->ops->set_trip_temp) {
  int VAR_5;

  VAR_5 = VAR_4->ops->set_trip_temp(VAR_4->sensor_data, VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;
 }


 VAR_4->trips[VAR_2].temperature = VAR_3;

 return 0;
}
