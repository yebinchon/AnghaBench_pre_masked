
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mt76_rx_tid {int size; int stopped; int lock; scalar_t__ nframes; struct sk_buff** reorder_buf; int reorder_work; } ;
struct mt76_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mt76_dev *VAR_0, struct mt76_rx_tid *VAR_1)
{
 u8 VAR_2 = VAR_1->size;
 int VAR_3;

 FUNC_0(&VAR_1->reorder_work);

 FUNC_2(&VAR_1->lock);

 VAR_1->stopped = 1;
 for (VAR_3 = 0; VAR_1->nframes && VAR_3 < VAR_2; VAR_3++) {
  struct sk_buff *VAR_4 = VAR_1->reorder_buf[VAR_3];

  if (!VAR_4)
   continue;

  VAR_1->nframes--;
  FUNC_1(VAR_4);
 }

 FUNC_3(&VAR_1->lock);
}
