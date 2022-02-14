
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct mt76_rx_tid {int nframes; int head; int size; struct sk_buff** reorder_buf; } ;
struct mt76_rx_status {int seqno; scalar_t__ reorder_time; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76_rx_tid*,struct sk_buff_head*,int ) ;
 int FUNC_1 (struct mt76_rx_tid*,struct sk_buff_head*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct mt76_rx_tid *VAR_2, struct sk_buff_head *VAR_3)
{
 struct mt76_rx_status *VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 if (!VAR_2->nframes)
  return;

 FUNC_1(VAR_2, VAR_3);

 VAR_6 = VAR_2->head % VAR_2->size;
 VAR_8 = VAR_2->nframes;

 for (VAR_7 = (VAR_2->head + 1) % VAR_2->size;
      VAR_7 != VAR_6 && VAR_8;
      VAR_7 = (VAR_7 + 1) % VAR_2->size) {
  VAR_5 = VAR_2->reorder_buf[VAR_7];
  if (!VAR_5)
   continue;

  VAR_8--;
  VAR_4 = (struct mt76_rx_status *)VAR_5->cb;
  if (!FUNC_2(VAR_1,
    VAR_4->reorder_time + VAR_0))
   continue;

  FUNC_0(VAR_2, VAR_3, VAR_4->seqno);
 }

 FUNC_1(VAR_2, VAR_3);
}
