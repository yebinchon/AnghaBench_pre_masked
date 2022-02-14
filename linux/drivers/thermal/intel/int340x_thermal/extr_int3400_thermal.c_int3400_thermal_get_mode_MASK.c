
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct int3400_thermal_priv* devdata; } ;
struct int3400_thermal_priv {int mode; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_1,
    enum thermal_device_mode *VAR_2)
{
 struct int3400_thermal_priv *VAR_3 = VAR_1->devdata;

 if (!VAR_3)
  return -VAR_0;

 *VAR_2 = VAR_3->mode;

 return 0;
}
