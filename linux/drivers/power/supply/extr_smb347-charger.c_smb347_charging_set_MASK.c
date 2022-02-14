
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int charging_enabled; int lock; int regmap; int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ enable_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct smb347_charger *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3->pdata->enable_control != VAR_2) {
  FUNC_0(VAR_3->dev, "charging enable/disable in SW disabled\n");
  return 0;
 }

 FUNC_1(&VAR_3->lock);
 if (VAR_3->charging_enabled != VAR_4) {
  VAR_5 = FUNC_3(VAR_3->regmap, VAR_0, VAR_1,
      VAR_4 ? VAR_1 : 0);
  if (!VAR_5)
   VAR_3->charging_enabled = VAR_4;
 }
 FUNC_2(&VAR_3->lock);
 return VAR_5;
}
