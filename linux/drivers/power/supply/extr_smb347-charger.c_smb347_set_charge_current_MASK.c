
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int regmap; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ termination_current; scalar_t__ pre_charge_current; scalar_t__ max_charge_current; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct smb347_charger *VAR_9)
{
 int VAR_10;

 if (VAR_9->pdata->max_charge_current) {
  VAR_10 = FUNC_1(VAR_6, FUNC_0(VAR_6),
        VAR_9->pdata->max_charge_current);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_2(VAR_9->regmap, VAR_0,
      VAR_1,
      VAR_10 << VAR_2);
  if (VAR_10 < 0)
   return VAR_10;
 }

 if (VAR_9->pdata->pre_charge_current) {
  VAR_10 = FUNC_1(VAR_7, FUNC_0(VAR_7),
        VAR_9->pdata->pre_charge_current);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_2(VAR_9->regmap, VAR_0,
      VAR_3,
      VAR_10 << VAR_4);
  if (VAR_10 < 0)
   return VAR_10;
 }

 if (VAR_9->pdata->termination_current) {
  VAR_10 = FUNC_1(VAR_8, FUNC_0(VAR_8),
        VAR_9->pdata->termination_current);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_2(VAR_9->regmap, VAR_0,
      VAR_5, VAR_10);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
