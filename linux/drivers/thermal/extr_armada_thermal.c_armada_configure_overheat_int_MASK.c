
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct thermal_trip {scalar_t__ type; int hysteresis; int temperature; } ;
struct armada_thermal_priv {int interrupt_source; struct thermal_zone_device* overheat_sensor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct armada_thermal_priv*) ;
 int FUNC_1 (struct armada_thermal_priv*,int) ;
 int FUNC_2 (struct armada_thermal_priv*,int ,int ) ;
 int FUNC_3 (struct thermal_zone_device*) ;
 struct thermal_trip* FUNC_4 (struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_5(struct armada_thermal_priv *VAR_2,
      struct thermal_zone_device *VAR_3,
      int VAR_4)
{

 const struct thermal_trip *VAR_5 = FUNC_4(VAR_3);
 int VAR_6;
 int VAR_7;

 if (!VAR_5)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_3); VAR_7++)
  if (VAR_5[VAR_7].type == VAR_1)
   break;

 if (VAR_7 == FUNC_3(VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_2,
           VAR_5[VAR_7].temperature,
           VAR_5[VAR_7].hysteresis);
 VAR_2->overheat_sensor = VAR_3;
 VAR_2->interrupt_source = VAR_4;

 FUNC_0(VAR_2);

 return 0;
}
