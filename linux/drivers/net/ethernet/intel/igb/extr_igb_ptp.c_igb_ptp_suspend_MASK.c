
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_adapter {int ptp_flags; int state; int * ptp_tx_skb; int ptp_tx_work; int ptp_overflow_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct igb_adapter *VAR_3)
{
 if (!(VAR_3->ptp_flags & VAR_0))
  return;

 if (VAR_3->ptp_flags & VAR_1)
  FUNC_0(&VAR_3->ptp_overflow_work);

 FUNC_1(&VAR_3->ptp_tx_work);
 if (VAR_3->ptp_tx_skb) {
  FUNC_3(VAR_3->ptp_tx_skb);
  VAR_3->ptp_tx_skb = ((void*)0);
  FUNC_2(VAR_2, &VAR_3->state);
 }
}
