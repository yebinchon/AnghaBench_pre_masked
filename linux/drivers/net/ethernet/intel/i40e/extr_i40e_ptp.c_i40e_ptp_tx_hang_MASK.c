
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i40e_pf {int flags; int tx_hwtstamp_timeouts; int state; struct sk_buff* ptp_tx_skb; scalar_t__ ptp_tx_start; int ptp_tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void FUNC_4(struct i40e_pf *VAR_3)
{
 struct sk_buff *VAR_4;

 if (!(VAR_3->flags & VAR_1) || !VAR_3->ptp_tx)
  return;


 if (!FUNC_2(VAR_2, VAR_3->state))
  return;





 if (FUNC_3(VAR_3->ptp_tx_start + VAR_0)) {
  VAR_4 = VAR_3->ptp_tx_skb;
  VAR_3->ptp_tx_skb = ((void*)0);
  FUNC_0(VAR_2, VAR_3->state);


  FUNC_1(VAR_4);
  VAR_3->tx_hwtstamp_timeouts++;
 }
}
