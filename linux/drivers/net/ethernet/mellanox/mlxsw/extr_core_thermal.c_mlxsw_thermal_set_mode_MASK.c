
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int lock; int polling_delay; struct mlxsw_thermal* devdata; } ;
struct mlxsw_thermal {int mode; int polling_delay; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thermal_zone_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_2,
      enum thermal_device_mode VAR_3)
{
 struct mlxsw_thermal *VAR_4 = VAR_2->devdata;

 FUNC_0(&VAR_2->lock);

 if (VAR_3 == VAR_0)
  VAR_2->polling_delay = VAR_4->polling_delay;
 else
  VAR_2->polling_delay = 0;

 FUNC_1(&VAR_2->lock);

 VAR_4->mode = VAR_3;
 FUNC_2(VAR_2, VAR_1);

 return 0;
}
