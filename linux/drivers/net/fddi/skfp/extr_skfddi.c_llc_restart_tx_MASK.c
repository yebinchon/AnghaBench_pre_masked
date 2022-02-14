
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int DriverLock; } ;
struct s_smc {TYPE_1__ os; } ;
typedef TYPE_1__ skfddi_priv ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct s_smc *VAR_0)
{
 skfddi_priv *VAR_1 = &VAR_0->os;

 FUNC_1("[llc_restart_tx]\n");


 FUNC_4(&VAR_1->DriverLock);
 FUNC_2(VAR_0);
 FUNC_3(&VAR_1->DriverLock);
 FUNC_0(VAR_1->dev);

}
