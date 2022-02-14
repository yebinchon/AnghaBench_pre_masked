
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thermal_cooling_device {struct int3406_thermal_data* devdata; } ;
struct int3406_thermal_data {int lower_limit; int upper_limit; TYPE_1__* br; TYPE_3__* raw_bd; } ;
struct TYPE_5__ {int brightness; } ;
struct TYPE_6__ {TYPE_2__ props; } ;
struct TYPE_4__ {int* levels; } ;


 int FUNC_0 (int ,struct int3406_thermal_data*) ;

__attribute__((used)) static int
FUNC_1(struct thermal_cooling_device *VAR_0,
         unsigned long *VAR_1)
{
 struct int3406_thermal_data *VAR_2 = VAR_0->devdata;
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2->raw_bd->props.brightness, VAR_2);






 for (VAR_4 = VAR_2->lower_limit; VAR_4 < VAR_2->upper_limit; VAR_4++) {
  if (VAR_3 <= VAR_2->br->levels[VAR_4])
   break;
 }

 *VAR_1 = VAR_2->upper_limit - VAR_4;
 return 0;
}
