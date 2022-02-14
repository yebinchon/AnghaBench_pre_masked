
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ cb; } ;
struct mt76_queue {int buf_size; int buf_offset; struct sk_buff* rx_head; } ;
struct mt76_dev {struct mt76_queue* q_rx; TYPE_1__* drv; } ;
struct TYPE_2__ {int (* rx_skb ) (struct mt76_dev*,int,struct sk_buff*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct mt76_dev*,struct mt76_queue*,unsigned char*,int,int) ;
 unsigned char* FUNC_5 (struct mt76_dev*,struct mt76_queue*,int,int*,int *,int*) ;
 int FUNC_6 (struct mt76_dev*,struct mt76_queue*) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct mt76_dev*,int,struct sk_buff*) ;

__attribute__((used)) static int
FUNC_10(struct mt76_dev *VAR_1, struct mt76_queue *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 struct sk_buff *VAR_7;
 unsigned char *VAR_8;
 bool VAR_9;

 while (VAR_6 < VAR_3) {
  u32 VAR_10;

  VAR_8 = FUNC_5(VAR_1, VAR_2, 0, &VAR_4, &VAR_10, &VAR_9);
  if (!VAR_8)
   break;

  if (VAR_2->rx_head)
   VAR_5 = VAR_2->buf_size;
  else
   VAR_5 = FUNC_0(VAR_2->buf_size);

  if (VAR_5 < VAR_4 + VAR_2->buf_offset) {
   FUNC_3(VAR_2->rx_head);
   VAR_2->rx_head = ((void*)0);

   FUNC_7(VAR_8);
   continue;
  }

  if (VAR_2->rx_head) {
   FUNC_4(VAR_1, VAR_2, VAR_8, VAR_4, VAR_9);
   continue;
  }

  VAR_7 = FUNC_2(VAR_8, VAR_2->buf_size);
  if (!VAR_7) {
   FUNC_7(VAR_8);
   continue;
  }
  FUNC_8(VAR_7, VAR_2->buf_offset);

  if (VAR_2 == &VAR_1->q_rx[VAR_0]) {
   u32 *VAR_11 = (u32 *)VAR_7->cb;
   *VAR_11 = VAR_10;
  }

  FUNC_1(VAR_7, VAR_4);
  VAR_6++;

  if (VAR_9) {
   VAR_2->rx_head = VAR_7;
   continue;
  }

  VAR_1->drv->rx_skb(VAR_1, VAR_2 - VAR_1->q_rx, VAR_7);
 }

 FUNC_6(VAR_1, VAR_2);
 return VAR_6;
}
