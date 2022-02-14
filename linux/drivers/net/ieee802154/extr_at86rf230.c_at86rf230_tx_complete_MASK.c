
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at86rf230_state_change {struct at86rf230_local* lp; } ;
struct at86rf230_local {int tx_skb; int hw; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct at86rf230_state_change*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct at86rf230_state_change *VAR_1 = VAR_0;
 struct at86rf230_local *VAR_2 = VAR_1->lp;

 FUNC_0(VAR_2->hw, VAR_2->tx_skb, 0);
 FUNC_1(VAR_1);
}
