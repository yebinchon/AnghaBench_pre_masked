
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thermal_zone_device*) ;
 int FUNC_3 (struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_4(struct thermal_zone_device *VAR_2,
    enum thermal_device_mode VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_1);
 if (VAR_3 == VAR_0)
  VAR_4 = FUNC_3(VAR_2);
 else
  VAR_4 = FUNC_2(VAR_2);
 FUNC_1(&VAR_1);

 return VAR_4;
}
