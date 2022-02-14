
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_charger {int charge_input_threshold_volt; int batttery_overcurrent; int thermal_regulation_temp; int min_system_volt; int constant_volt; int dev; TYPE_1__* max77693; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct max77693_charger*,int ) ;
 int FUNC_2 (struct max77693_charger*,int ) ;
 int FUNC_3 (struct max77693_charger*,int ) ;
 int FUNC_4 (struct max77693_charger*,int ) ;
 int FUNC_5 (struct max77693_charger*,int ) ;
 int FUNC_6 (struct max77693_charger*,int ) ;
 int FUNC_7 (struct max77693_charger*,int ) ;
 int FUNC_8 (struct max77693_charger*,int ) ;
 int FUNC_9 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct max77693_charger *VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;


 VAR_8 = (0x3 << VAR_1);
 VAR_7 = FUNC_9(VAR_6->max77693->regmap,
    VAR_5,
    VAR_0, VAR_8);
 if (VAR_7) {
  FUNC_0(VAR_6->dev, "Error unlocking registers: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_6, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_7(VAR_6,
   VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_6, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6, VAR_6->constant_volt);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_6, VAR_6->min_system_volt);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_6,
   VAR_6->thermal_regulation_temp);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_6->batttery_overcurrent);
 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_6,
   VAR_6->charge_input_threshold_volt);
}
