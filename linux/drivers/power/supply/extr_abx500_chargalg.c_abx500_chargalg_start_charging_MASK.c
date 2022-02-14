
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int charger_type; } ;
struct abx500_chargalg {int dev; TYPE_1__ chg_info; } ;




 int FUNC_0 (struct abx500_chargalg*,int,int,int) ;
 int FUNC_1 (struct abx500_chargalg*,int,int,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct abx500_chargalg *VAR_0,
 int VAR_1, int VAR_2)
{
 switch (VAR_0->chg_info.charger_type) {
 case 129:
  FUNC_2(VAR_0->dev,
   "AC parameters: Vset %d, Ich %d\n", VAR_1, VAR_2);
  FUNC_1(VAR_0, 0, 0, 0);
  FUNC_0(VAR_0, 1, VAR_1, VAR_2);
  break;

 case 128:
  FUNC_2(VAR_0->dev,
   "USB parameters: Vset %d, Ich %d\n", VAR_1, VAR_2);
  FUNC_0(VAR_0, 0, 0, 0);
  FUNC_1(VAR_0, 1, VAR_1, VAR_2);
  break;

 default:
  FUNC_3(VAR_0->dev, "Unknown charger to charge from\n");
  break;
 }
}
