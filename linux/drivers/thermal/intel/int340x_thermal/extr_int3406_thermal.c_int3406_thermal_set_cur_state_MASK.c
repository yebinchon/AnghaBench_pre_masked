
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct int3406_thermal_data* devdata; } ;
struct int3406_thermal_data {unsigned long upper_limit; unsigned long lower_limit; int raw_bd; TYPE_1__* br; } ;
struct TYPE_2__ {int* levels; } ;


 int FUNC_0 (int,struct int3406_thermal_data*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct thermal_cooling_device *VAR_1,
         unsigned long VAR_2)
{
 struct int3406_thermal_data *VAR_3 = VAR_1->devdata;
 int VAR_4, VAR_5;

 if (VAR_2 > VAR_3->upper_limit - VAR_3->lower_limit)
  return -VAR_0;

 VAR_4 = VAR_3->br->levels[VAR_3->upper_limit - VAR_2];

 VAR_5 = FUNC_0(VAR_4, VAR_3);

 return FUNC_1(VAR_3->raw_bd, VAR_5);
}
