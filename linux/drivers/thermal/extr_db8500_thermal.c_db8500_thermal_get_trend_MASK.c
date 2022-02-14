
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db8500_thermal_zone {int trend; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;



__attribute__((used)) static int FUNC_0(void *VAR_0, int VAR_1, enum thermal_trend *VAR_2)
{
 struct db8500_thermal_zone *VAR_3 = VAR_0;

 *VAR_2 = VAR_3->trend;

 return 0;
}
