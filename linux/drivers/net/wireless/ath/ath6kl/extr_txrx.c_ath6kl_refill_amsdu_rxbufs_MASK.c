
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; scalar_t__ head; } ;
struct htc_packet {int list; struct sk_buff* skb; } ;
struct ath6kl {int lock; int amsdu_rx_buffer_queue; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 struct sk_buff* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct htc_packet*,struct sk_buff*,scalar_t__,int ,int ) ;
 size_t FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct ath6kl *VAR_1, int VAR_2)
{
 struct htc_packet *VAR_3;
 struct sk_buff *VAR_4;

 while (VAR_2) {
  VAR_4 = FUNC_2(VAR_0);
  if (!VAR_4)
   return;

  VAR_3 = (struct htc_packet *) VAR_4->head;
  if (!FUNC_0((unsigned long) VAR_4->data, 4)) {
   size_t VAR_5 = FUNC_5(VAR_4);
   VAR_4->data = FUNC_1(VAR_4->data - 4, 4);
   FUNC_6(VAR_4, VAR_5);
  }
  FUNC_4(VAR_3, VAR_4, VAR_4->data,
       VAR_0, 0);
  VAR_3->skb = VAR_4;

  FUNC_7(&VAR_1->lock);
  FUNC_3(&VAR_3->list, &VAR_1->amsdu_rx_buffer_queue);
  FUNC_8(&VAR_1->lock);
  VAR_2--;
 }
}
