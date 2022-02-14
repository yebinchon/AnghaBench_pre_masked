
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k {int hw; int wmi_mgmt_tx_queue; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

void FUNC_2(struct ath10k *VAR_0)
{
 struct sk_buff *VAR_1;

 for (;;) {
  VAR_1 = FUNC_1(&VAR_0->wmi_mgmt_tx_queue);
  if (!VAR_1)
   break;

  FUNC_0(VAR_0->hw, VAR_1);
 }
}
