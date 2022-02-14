
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct rcar_thermal_priv {int dummy; } ;


 int FUNC_0 (struct rcar_thermal_priv*,int*) ;
 struct rcar_thermal_priv* FUNC_1 (struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_0, int *VAR_1)
{
 struct rcar_thermal_priv *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
