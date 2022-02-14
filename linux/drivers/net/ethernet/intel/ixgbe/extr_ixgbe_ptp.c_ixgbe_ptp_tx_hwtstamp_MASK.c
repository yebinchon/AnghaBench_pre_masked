
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int state; struct sk_buff* ptp_tx_skb; struct ixgbe_hw hw; } ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ixgbe_adapter*,struct skb_shared_hwtstamps*,int) ;
 int FUNC_4 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_adapter *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_3->ptp_tx_skb;
 struct ixgbe_hw *VAR_5 = &VAR_3->hw;
 struct skb_shared_hwtstamps VAR_6;
 u64 VAR_7 = 0;

 VAR_7 |= (u64)FUNC_0(VAR_5, VAR_1);
 VAR_7 |= (u64)FUNC_0(VAR_5, VAR_0) << 32;
 FUNC_3(VAR_3, &VAR_6, VAR_7);






 VAR_3->ptp_tx_skb = ((void*)0);
 FUNC_1(VAR_2, &VAR_3->state);


 FUNC_4(VAR_4, &VAR_6);
 FUNC_2(VAR_4);
}
