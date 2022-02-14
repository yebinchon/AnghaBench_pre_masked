
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct mlxsw_thermal* devdata; } ;
struct mlxsw_thermal {TYPE_1__* trips; } ;
struct TYPE_2__ {int temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_3,
           int VAR_4, int VAR_5)
{
 struct mlxsw_thermal *VAR_6 = VAR_3->devdata;

 if (VAR_4 < 0 || VAR_4 >= VAR_2 ||
     VAR_5 > VAR_1)
  return -VAR_0;

 VAR_6->trips[VAR_4].temp = VAR_5;
 return 0;
}
