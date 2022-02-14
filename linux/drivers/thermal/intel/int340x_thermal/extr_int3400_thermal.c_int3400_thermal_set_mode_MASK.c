
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct int3400_thermal_priv* devdata; } ;
struct int3400_thermal_priv {int mode; int current_uuid_index; TYPE_1__* adev; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_3,
    enum thermal_device_mode VAR_4)
{
 struct int3400_thermal_priv *VAR_5 = VAR_3->devdata;
 bool VAR_6;
 int VAR_7 = 0;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_4 == VAR_2)
  VAR_6 = 1;
 else if (VAR_4 == VAR_1)
  VAR_6 = 0;
 else
  return -VAR_0;

 if (VAR_6 != VAR_5->mode) {
  VAR_5->mode = VAR_6;
  VAR_7 = FUNC_0(VAR_5->adev->handle,
       VAR_5->current_uuid_index,
       VAR_6);
 }
 return VAR_7;
}
