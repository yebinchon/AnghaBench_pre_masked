
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct da9062_thermal* devdata; } ;
struct da9062_thermal {int temperature; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_0,
       int *VAR_1)
{
 struct da9062_thermal *VAR_2 = VAR_0->devdata;

 FUNC_0(&VAR_2->lock);
 *VAR_1 = VAR_2->temperature;
 FUNC_1(&VAR_2->lock);

 return 0;
}
