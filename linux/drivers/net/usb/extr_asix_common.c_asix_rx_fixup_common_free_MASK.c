
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asix_rx_fixup_info {int * ax_skb; } ;
struct asix_common_private {struct asix_rx_fixup_info rx_fixup_info; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct asix_common_private *VAR_0)
{
 struct asix_rx_fixup_info *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = &VAR_0->rx_fixup_info;

 if (VAR_1->ax_skb) {
  FUNC_0(VAR_1->ax_skb);
  VAR_1->ax_skb = ((void*)0);
 }
}
