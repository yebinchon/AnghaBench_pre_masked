
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {int pre_to_fast_voltage; int max_charge_voltage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smb347_charger *VAR_4)
{
 int VAR_5;

 if (VAR_4->pdata->pre_to_fast_voltage) {
  VAR_5 = VAR_4->pdata->pre_to_fast_voltage;


  VAR_5 = FUNC_0(VAR_5, 2400000, 3000000) - 2400000;
  VAR_5 /= 200000;

  VAR_5 = FUNC_1(VAR_4->regmap, VAR_0,
    VAR_2,
    VAR_5 << VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_4->pdata->max_charge_voltage) {
  VAR_5 = VAR_4->pdata->max_charge_voltage;


  VAR_5 = FUNC_0(VAR_5, 3500000, 4500000) - 3500000;
  VAR_5 /= 20000;

  VAR_5 = FUNC_1(VAR_4->regmap, VAR_0,
      VAR_1, VAR_5);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
