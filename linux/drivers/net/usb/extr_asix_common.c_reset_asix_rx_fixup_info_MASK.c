
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asix_rx_fixup_info {int split_head; scalar_t__ header; scalar_t__ remaining; int * ax_skb; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct asix_rx_fixup_info *VAR_0)
{





 if (VAR_0->ax_skb) {

  FUNC_0(VAR_0->ax_skb);
  VAR_0->ax_skb = ((void*)0);
 }




 VAR_0->remaining = 0;
 VAR_0->split_head = 0;
 VAR_0->header = 0;
}
