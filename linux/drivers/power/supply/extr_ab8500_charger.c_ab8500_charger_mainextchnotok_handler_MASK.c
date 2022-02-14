
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int psy; } ;
struct TYPE_3__ {int mainextchnotok; } ;
struct ab8500_charger {int check_hw_failure_work; int charger_wq; TYPE_2__ ac_chg; TYPE_1__ flags; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ab8500_charger*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct ab8500_charger *VAR_3 = VAR_2;

 FUNC_1(VAR_3->dev, "Main charger not ok\n");
 VAR_3->flags.mainextchnotok = 1;
 FUNC_0(VAR_3, VAR_3->ac_chg.psy);


 FUNC_2(VAR_3->charger_wq, &VAR_3->check_hw_failure_work, 0);

 return VAR_0;
}
