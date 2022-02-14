
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct rcar_thermal_priv {int dummy; } ;
struct device {int dummy; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;



 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (struct rcar_thermal_priv*) ;
 struct rcar_thermal_priv* FUNC_2 (struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_0,
          int VAR_1, enum thermal_trip_type VAR_2)
{
 struct rcar_thermal_priv *VAR_3 = FUNC_2(VAR_0);
 struct device *VAR_4 = FUNC_1(VAR_3);

 switch (VAR_2) {
 case 128:

  FUNC_0(VAR_4, "Thermal reached to critical temperature\n");
  break;
 default:
  break;
 }

 return 0;
}
