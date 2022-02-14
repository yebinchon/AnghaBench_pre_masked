
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int DriverLock; } ;
struct s_smc {TYPE_1__ os; } ;
struct net_device {int dummy; } ;
typedef TYPE_1__ skfddi_priv ;


 struct s_smc* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct s_smc *VAR_1 = FUNC_0(VAR_0);
 skfddi_priv *VAR_2 = &VAR_1->os;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->DriverLock, VAR_3);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_2->DriverLock, VAR_3);
}
