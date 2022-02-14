
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct mt76_rx_tid {int head; int size; scalar_t__* reorder_buf; } ;


 int FUNC_0 (struct mt76_rx_tid*,struct sk_buff_head*,int) ;

__attribute__((used)) static void
FUNC_1(struct mt76_rx_tid *VAR_0, struct sk_buff_head *VAR_1)
{
 int VAR_2 = VAR_0->head % VAR_0->size;

 while (VAR_0->reorder_buf[VAR_2]) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_2 = VAR_0->head % VAR_0->size;
 }
}
