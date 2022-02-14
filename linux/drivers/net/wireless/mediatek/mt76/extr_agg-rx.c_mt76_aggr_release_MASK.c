
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mt76_rx_tid {int nframes; struct sk_buff** reorder_buf; int head; } ;


 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mt76_rx_tid *VAR_0, struct sk_buff_head *VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_0->head = FUNC_1(VAR_0->head);

 VAR_3 = VAR_0->reorder_buf[VAR_2];
 if (!VAR_3)
  return;

 VAR_0->reorder_buf[VAR_2] = ((void*)0);
 VAR_0->nframes--;
 FUNC_0(VAR_1, VAR_3);
}
