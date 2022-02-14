
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int hw; int deferred_tx_queue; int deferred_rx_queue; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wl1271 *VAR_0)
{
 struct sk_buff *VAR_1;


 while ((VAR_1 = FUNC_2(&VAR_0->deferred_rx_queue)))
  FUNC_0(VAR_0->hw, VAR_1);


 while ((VAR_1 = FUNC_2(&VAR_0->deferred_tx_queue)))
  FUNC_1(VAR_0->hw, VAR_1);
}
