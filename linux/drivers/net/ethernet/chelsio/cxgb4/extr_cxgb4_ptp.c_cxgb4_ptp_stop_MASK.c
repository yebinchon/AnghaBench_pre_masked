
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int * ptp_clock; int * ptp_tx_skb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct adapter *VAR_0)
{
 if (VAR_0->ptp_tx_skb) {
  FUNC_0(VAR_0->ptp_tx_skb);
  VAR_0->ptp_tx_skb = ((void*)0);
 }

 if (VAR_0->ptp_clock) {
  FUNC_1(VAR_0->ptp_clock);
  VAR_0->ptp_clock = ((void*)0);
 }
}
