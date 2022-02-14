
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int state; int ptp_tx_work; int tmreg_lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ixgbe_adapter *VAR_2)
{




 FUNC_4(&VAR_2->tmreg_lock);


 if (FUNC_1(VAR_2))
  return;


 FUNC_0(&VAR_2->ptp_tx_work, VAR_1);


 FUNC_2(VAR_2);


 FUNC_3(VAR_0, &VAR_2->state);

 return;
}
