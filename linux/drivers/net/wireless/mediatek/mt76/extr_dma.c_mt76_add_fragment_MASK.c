
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct mt76_queue {struct sk_buff* rx_head; int buf_size; scalar_t__ buf_offset; } ;
struct mt76_dev {int q_rx; TYPE_1__* drv; } ;
struct TYPE_4__ {int nr_frags; } ;
struct TYPE_3__ {int (* rx_skb ) (struct mt76_dev*,struct mt76_queue*,struct sk_buff*) ;} ;


 void* FUNC_0 (struct page*) ;
 int FUNC_1 (struct sk_buff*,int ,struct page*,int,int,int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct mt76_dev*,struct mt76_queue*,struct sk_buff*) ;
 struct page* FUNC_4 (void*) ;

__attribute__((used)) static void
FUNC_5(struct mt76_dev *VAR_0, struct mt76_queue *VAR_1, void *VAR_2,
    int VAR_3, bool VAR_4)
{
 struct page *VAR_5 = FUNC_4(VAR_2);
 int VAR_6 = VAR_2 - FUNC_0(VAR_5);
 struct sk_buff *VAR_7 = VAR_1->rx_head;

 VAR_6 += VAR_1->buf_offset;
 FUNC_1(VAR_7, FUNC_2(VAR_7)->nr_frags, VAR_5, VAR_6, VAR_3,
   VAR_1->buf_size);

 if (VAR_4)
  return;

 VAR_1->rx_head = ((void*)0);
 VAR_0->drv->rx_skb(VAR_0, VAR_1 - VAR_0->q_rx, VAR_7);
}
