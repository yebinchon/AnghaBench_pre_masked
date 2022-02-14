
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {scalar_t__ trips; struct power_allocator_params* governor_data; TYPE_2__* tzp; TYPE_1__* ops; int device; } ;
struct power_allocator_params {int allocated_tzp; int trip_switch_on; int trip_max_desired_temperature; } ;
struct TYPE_4__ {int sustainable_power; } ;
struct TYPE_3__ {int (* get_trip_temp ) (struct thermal_zone_device*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct thermal_zone_device*,int ,int ,int,int) ;
 int FUNC_2 (struct thermal_zone_device*,struct power_allocator_params*) ;
 int FUNC_3 (struct power_allocator_params*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct power_allocator_params*) ;
 int FUNC_6 (struct thermal_zone_device*,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct thermal_zone_device *VAR_2)
{
 int VAR_3;
 struct power_allocator_params *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 if (!VAR_2->tzp) {
  VAR_2->tzp = FUNC_4(sizeof(*VAR_2->tzp), VAR_1);
  if (!VAR_2->tzp) {
   VAR_3 = -VAR_0;
   goto free_params;
  }

  VAR_4->allocated_tzp = 1;
 }

 if (!VAR_2->tzp->sustainable_power)
  FUNC_0(&VAR_2->device, "power_allocator: sustainable_power will be estimated\n");

 FUNC_2(VAR_2, VAR_4);

 if (VAR_2->trips > 0) {
  VAR_3 = VAR_2->ops->get_trip_temp(VAR_2,
     VAR_4->trip_max_desired_temperature,
     &VAR_5);
  if (!VAR_3)
   FUNC_1(VAR_2, VAR_2->tzp->sustainable_power,
            VAR_4->trip_switch_on,
            VAR_5, 0);
 }

 FUNC_5(VAR_4);

 VAR_2->governor_data = VAR_4;

 return 0;

free_params:
 FUNC_3(VAR_4);

 return VAR_3;
}
