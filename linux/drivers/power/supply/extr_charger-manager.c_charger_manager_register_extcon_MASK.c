
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charger_regulator {int num_cables; int regulator_name; struct charger_cable* cables; struct charger_manager* cm; int consumer; } ;
struct charger_manager {int dev; struct charger_desc* desc; } ;
struct charger_desc {int num_charger_regulators; struct charger_regulator* charger_regulators; } ;
struct charger_cable {struct charger_manager* cm; struct charger_regulator* charger; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct charger_manager*,struct charger_cable*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct charger_manager *VAR_0)
{
 struct charger_desc *VAR_1 = VAR_0->desc;
 struct charger_regulator *VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_charger_regulators; VAR_4++) {
  VAR_2 = &VAR_1->charger_regulators[VAR_4];

  VAR_2->consumer = FUNC_4(VAR_0->dev,
     VAR_2->regulator_name);
  if (FUNC_0(VAR_2->consumer)) {
   FUNC_3(VAR_0->dev, "Cannot find charger(%s)\n",
    VAR_2->regulator_name);
   return FUNC_1(VAR_2->consumer);
  }
  VAR_2->cm = VAR_0;

  for (VAR_5 = 0; VAR_5 < VAR_2->num_cables; VAR_5++) {
   struct charger_cable *VAR_6 = &VAR_2->cables[VAR_5];

   VAR_3 = FUNC_2(VAR_0, VAR_6);
   if (VAR_3 < 0) {
    FUNC_3(VAR_0->dev, "Cannot initialize charger(%s)\n",
     VAR_2->regulator_name);
    return VAR_3;
   }
   VAR_6->charger = VAR_2;
   VAR_6->cm = VAR_0;
  }
 }

 return 0;
}
