
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int state; int * ptp_tx_skb; struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;

 FUNC_0(VAR_3, VAR_0);
 if (VAR_2->ptp_tx_skb) {
  FUNC_2(VAR_2->ptp_tx_skb);
  VAR_2->ptp_tx_skb = ((void*)0);
 }
 FUNC_1(VAR_1, &VAR_2->state);
}
