
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct rcar_thermal_priv {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct rcar_thermal_priv*) ;
 struct rcar_thermal_priv* FUNC_3 (struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_4(struct thermal_zone_device *VAR_1,
          int VAR_2, int *VAR_3)
{
 struct rcar_thermal_priv *VAR_4 = FUNC_3(VAR_1);
 struct device *VAR_5 = FUNC_2(VAR_4);


 switch (VAR_2) {
 case 0:
  *VAR_3 = FUNC_0(90);
  break;
 default:
  FUNC_1(VAR_5, "rcar driver trip error\n");
  return -VAR_0;
 }

 return 0;
}
