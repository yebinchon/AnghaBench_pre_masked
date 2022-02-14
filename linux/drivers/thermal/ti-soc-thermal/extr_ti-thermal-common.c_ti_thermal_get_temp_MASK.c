
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_thermal_data {int dummy; } ;
struct thermal_zone_device {struct ti_thermal_data* devdata; } ;


 int FUNC_0 (struct ti_thermal_data*,int*) ;

__attribute__((used)) static inline int FUNC_1(struct thermal_zone_device *VAR_0,
          int *VAR_1)
{
 struct ti_thermal_data *VAR_2 = VAR_0->devdata;

 return FUNC_0(VAR_2, VAR_1);
}
