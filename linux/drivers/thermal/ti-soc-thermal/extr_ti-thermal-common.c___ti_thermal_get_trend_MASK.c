
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_thermal_data {int sensor_id; struct ti_bandgap* bgp; } ;
struct ti_bandgap {int dummy; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ti_bandgap*,int,int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_3, int VAR_4, enum thermal_trend *VAR_5)
{
 struct ti_thermal_data *VAR_6 = VAR_3;
 struct ti_bandgap *VAR_7;
 int VAR_8, VAR_9, VAR_10 = 0;

 VAR_7 = VAR_6->bgp;
 VAR_8 = VAR_6->sensor_id;

 VAR_10 = FUNC_0(VAR_7, VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 > 0)
  *VAR_5 = VAR_1;
 else if (VAR_9 < 0)
  *VAR_5 = VAR_0;
 else
  *VAR_5 = VAR_2;

 return 0;
}
