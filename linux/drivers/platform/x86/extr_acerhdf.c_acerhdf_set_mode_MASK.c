
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_3,
       enum thermal_device_mode VAR_4)
{
 if (VAR_4 == VAR_0 && VAR_2)
  FUNC_1();
 else if (VAR_4 == VAR_1 && !VAR_2)
  FUNC_0();

 return 0;
}
