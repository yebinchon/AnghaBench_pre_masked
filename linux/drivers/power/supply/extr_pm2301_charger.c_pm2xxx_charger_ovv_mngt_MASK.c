
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int psy; } ;
struct TYPE_3__ {int ovv; } ;
struct pm2xxx_charger {int check_hw_failure_work; int charger_wq; TYPE_2__ ac_chg; TYPE_1__ flags; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct pm2xxx_charger *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->dev, "Overvoltage detected\n");
 VAR_0->flags.ovv = 1;
 FUNC_1(VAR_0->ac_chg.psy);


 FUNC_2(VAR_0->charger_wq, &VAR_0->check_hw_failure_work, 0);

 return 0;
}
