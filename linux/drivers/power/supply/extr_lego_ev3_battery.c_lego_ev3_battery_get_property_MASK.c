
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct lego_ev3_battery {int technology; int v_max; int v_min; int iio_i; int iio_v; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 struct lego_ev3_battery* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2,
      enum power_supply_property VAR_3,
      union power_supply_propval *VAR_4)
{
 struct lego_ev3_battery *VAR_5 = FUNC_1(VAR_2);
 int VAR_6, VAR_7;

 switch (VAR_3) {
 case 131:
  VAR_4->intval = VAR_5->technology;
  break;
 case 128:

  VAR_6 = FUNC_0(VAR_5->iio_v, &VAR_4->intval);
  if (VAR_6)
   return VAR_6;

  VAR_4->intval *= 2000;
  VAR_4->intval += 50000;


  VAR_6 = FUNC_0(VAR_5->iio_i, &VAR_7);
  if (VAR_6)
   return VAR_6;

  VAR_7 *= 1000;
  VAR_7 /= 15;
  VAR_4->intval += VAR_7;
  break;
 case 130:
  VAR_4->intval = VAR_5->v_max;
  break;
 case 129:
  VAR_4->intval = VAR_5->v_min;
  break;
 case 133:

  VAR_6 = FUNC_0(VAR_5->iio_i, &VAR_4->intval);
  if (VAR_6)
   return VAR_6;

  VAR_4->intval *= 20000;
  VAR_4->intval /= 15;
  break;
 case 132:
  VAR_4->intval = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
