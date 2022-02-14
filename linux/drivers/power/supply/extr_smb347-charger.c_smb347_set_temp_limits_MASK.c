
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {int chip_temp_threshold; int soft_cold_temp_limit; int soft_hot_temp_limit; int hard_cold_temp_limit; int hard_hot_temp_limit; int soft_temp_limit_compensation; scalar_t__ charge_current_compensation; scalar_t__ suspend_on_hard_temp_limit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct smb347_charger *VAR_25)
{
 bool VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28;

 if (VAR_25->pdata->chip_temp_threshold) {
  VAR_28 = VAR_25->pdata->chip_temp_threshold;


  VAR_28 = FUNC_1(VAR_28, 100, 130) - 100;
  VAR_28 /= 10;

  VAR_27 = FUNC_3(VAR_25->regmap, VAR_0,
      VAR_3,
      VAR_28 << VAR_4);
  if (VAR_27 < 0)
   return VAR_27;
 }

 if (VAR_25->pdata->soft_cold_temp_limit != VAR_23) {
  VAR_28 = VAR_25->pdata->soft_cold_temp_limit;

  VAR_28 = FUNC_1(VAR_28, 0, 15);
  VAR_28 /= 5;

  VAR_28 = ~VAR_28 & 0x3;

  VAR_27 = FUNC_3(VAR_25->regmap, VAR_7,
      VAR_12,
      VAR_28 << VAR_13);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_26 = 1;
 }

 if (VAR_25->pdata->soft_hot_temp_limit != VAR_23) {
  VAR_28 = VAR_25->pdata->soft_hot_temp_limit;

  VAR_28 = FUNC_1(VAR_28, 40, 55) - 40;
  VAR_28 /= 5;

  VAR_27 = FUNC_3(VAR_25->regmap, VAR_7,
      VAR_14,
      VAR_28 << VAR_15);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_26 = 1;
 }

 if (VAR_25->pdata->hard_cold_temp_limit != VAR_23) {
  VAR_28 = VAR_25->pdata->hard_cold_temp_limit;

  VAR_28 = FUNC_1(VAR_28, -5, 10) + 5;
  VAR_28 /= 5;

  VAR_28 = ~VAR_28 & 0x3;

  VAR_27 = FUNC_3(VAR_25->regmap, VAR_7,
      VAR_8,
      VAR_28 << VAR_9);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_26 = 1;
 }

 if (VAR_25->pdata->hard_hot_temp_limit != VAR_23) {
  VAR_28 = VAR_25->pdata->hard_hot_temp_limit;

  VAR_28 = FUNC_1(VAR_28, 50, 65) - 50;
  VAR_28 /= 5;

  VAR_27 = FUNC_3(VAR_25->regmap, VAR_7,
      VAR_10,
      VAR_28 << VAR_11);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_26 = 1;
 }
 if (VAR_26) {
  VAR_27 = FUNC_3(VAR_25->regmap, VAR_16,
      VAR_17, 0);
  if (VAR_27 < 0)
   return VAR_27;
 }

 if (VAR_25->pdata->suspend_on_hard_temp_limit) {
  VAR_27 = FUNC_3(VAR_25->regmap, VAR_5,
     VAR_6, 0);
  if (VAR_27 < 0)
   return VAR_27;
 }

 if (VAR_25->pdata->soft_temp_limit_compensation !=
     VAR_22) {
  VAR_28 = VAR_25->pdata->soft_temp_limit_compensation & 0x3;

  VAR_27 = FUNC_3(VAR_25->regmap, VAR_16,
     VAR_20,
     VAR_28 << VAR_21);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_27 = FUNC_3(VAR_25->regmap, VAR_16,
     VAR_18,
     VAR_28 << VAR_19);
  if (VAR_27 < 0)
   return VAR_27;
 }

 if (VAR_25->pdata->charge_current_compensation) {
  VAR_28 = FUNC_2(VAR_24, FUNC_0(VAR_24),
        VAR_25->pdata->charge_current_compensation);
  if (VAR_28 < 0)
   return VAR_28;

  VAR_27 = FUNC_3(VAR_25->regmap, VAR_0,
    VAR_1,
    (VAR_28 & 0x3) << VAR_2);
  if (VAR_27 < 0)
   return VAR_27;
 }

 return VAR_27;
}
