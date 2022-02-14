
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int flags; int state; struct sk_buff* ptp_tx_skb; int ptp_tx; struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct skb_shared_hwtstamps*,int) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

void FUNC_5(struct i40e_pf *VAR_4)
{
 struct skb_shared_hwtstamps VAR_5;
 struct sk_buff *VAR_6 = VAR_4->ptp_tx_skb;
 struct i40e_hw *VAR_7 = &VAR_4->hw;
 u32 VAR_8, VAR_9;
 u64 VAR_10;

 if (!(VAR_4->flags & VAR_0) || !VAR_4->ptp_tx)
  return;


 if (!VAR_4->ptp_tx_skb)
  return;

 VAR_9 = FUNC_3(VAR_7, VAR_2);
 VAR_8 = FUNC_3(VAR_7, VAR_1);

 VAR_10 = (((u64)VAR_8) << 32) | VAR_9;
 FUNC_2(&VAR_5, VAR_10);






 VAR_4->ptp_tx_skb = ((void*)0);
 FUNC_0(VAR_3, VAR_4->state);


 FUNC_4(VAR_6, &VAR_5);
 FUNC_1(VAR_6);
}
