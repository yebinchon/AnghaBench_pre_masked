
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_hw {int dummy; } ;
struct igb_adapter {TYPE_1__* pdev; int tx_hwtstamp_timeouts; int state; int * ptp_tx_skb; int ptp_tx_work; scalar_t__ ptp_tx_start; struct e1000_hw hw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct igb_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 bool VAR_5 = FUNC_6(VAR_3->ptp_tx_start +
           VAR_1);

 if (!VAR_3->ptp_tx_skb)
  return;

 if (!FUNC_5(VAR_2, &VAR_3->state))
  return;





 if (VAR_5) {
  FUNC_0(&VAR_3->ptp_tx_work);
  FUNC_2(VAR_3->ptp_tx_skb);
  VAR_3->ptp_tx_skb = ((void*)0);
  FUNC_1(VAR_2, &VAR_3->state);
  VAR_3->tx_hwtstamp_timeouts++;



  FUNC_4(VAR_0);
  FUNC_3(&VAR_3->pdev->dev, "clearing Tx timestamp hang\n");
 }
}
