
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int tx_hwtstamp_timeouts; int ptp_tx_work; int state; int ptp_tx_skb; scalar_t__ ptp_tx_start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct ixgbe_adapter *VAR_3)
{
 bool VAR_4 = FUNC_4(VAR_3->ptp_tx_start +
           VAR_0);

 if (!VAR_3->ptp_tx_skb)
  return;

 if (!FUNC_3(VAR_1, &VAR_3->state))
  return;





 if (VAR_4) {
  FUNC_0(&VAR_3->ptp_tx_work);
  FUNC_2(VAR_3);
  VAR_3->tx_hwtstamp_timeouts++;
  FUNC_1(VAR_2, "clearing Tx timestamp hang\n");
 }
}
