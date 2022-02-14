
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct rcar_thermal_priv {int dummy; } ;
struct device {int dummy; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (struct rcar_thermal_priv*) ;
 struct rcar_thermal_priv* FUNC_2 (struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_2,
          int VAR_3, enum thermal_trip_type *VAR_4)
{
 struct rcar_thermal_priv *VAR_5 = FUNC_2(VAR_2);
 struct device *VAR_6 = FUNC_1(VAR_5);


 switch (VAR_3) {
 case 0:
  *VAR_4 = VAR_1;
  break;
 default:
  FUNC_0(VAR_6, "rcar driver trip error\n");
  return -VAR_0;
 }

 return 0;
}
