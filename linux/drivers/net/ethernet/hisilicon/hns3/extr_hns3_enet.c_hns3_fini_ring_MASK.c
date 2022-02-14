
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {int * skb; scalar_t__ pending_buf; scalar_t__ next_to_use; scalar_t__ next_to_clean; int * desc_cb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hns3_enet_ring*) ;
 int FUNC_3 (struct hns3_enet_ring*) ;

void FUNC_4(struct hns3_enet_ring *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_1(FUNC_3(VAR_0), VAR_0->desc_cb);
 VAR_0->desc_cb = ((void*)0);
 VAR_0->next_to_clean = 0;
 VAR_0->next_to_use = 0;
 VAR_0->pending_buf = 0;
 if (VAR_0->skb) {
  FUNC_0(VAR_0->skb);
  VAR_0->skb = ((void*)0);
 }
}
