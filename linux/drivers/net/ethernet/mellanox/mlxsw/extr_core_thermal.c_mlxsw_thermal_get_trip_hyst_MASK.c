
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct mlxsw_thermal* devdata; } ;
struct mlxsw_thermal {TYPE_1__* trips; } ;
struct TYPE_2__ {int hyst; } ;



__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_0,
           int VAR_1, int *VAR_2)
{
 struct mlxsw_thermal *VAR_3 = VAR_0->devdata;

 *VAR_2 = VAR_3->trips[VAR_1].hyst;
 return 0;
}
