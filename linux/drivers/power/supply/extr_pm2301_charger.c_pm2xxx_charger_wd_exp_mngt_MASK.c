
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int psy; } ;
struct TYPE_3__ {int wd_expired; } ;
struct pm2xxx_charger {TYPE_2__ ac_chg; TYPE_1__ ac; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pm2xxx_charger *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->dev , "20 minutes watchdog expired\n");

 VAR_0->ac.wd_expired = 1;
 FUNC_1(VAR_0->ac_chg.psy);

 return 0;
}
