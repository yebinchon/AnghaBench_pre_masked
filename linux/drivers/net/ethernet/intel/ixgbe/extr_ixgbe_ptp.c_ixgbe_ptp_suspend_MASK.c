
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int ptp_tx_work; int (* ptp_setup_sdp ) (struct ixgbe_adapter*) ;int flags2; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct ixgbe_adapter *VAR_2)
{

 if (!FUNC_3(VAR_1, &VAR_2->state))
  return;

 VAR_2->flags2 &= ~VAR_0;
 if (VAR_2->ptp_setup_sdp)
  VAR_2->ptp_setup_sdp(VAR_2);


 FUNC_0(&VAR_2->ptp_tx_work);
 FUNC_1(VAR_2);
}
