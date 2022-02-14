
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_queue {int ndesc; int lock; scalar_t__ queued; scalar_t__ tail; scalar_t__ head; TYPE_1__* entry; } ;
struct mt76_dev {struct mt76_queue* q_rx; } ;
struct TYPE_2__ {int urb; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mt76_dev*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mt76_dev *VAR_1)
{
 struct mt76_queue *VAR_2 = &VAR_1->q_rx[VAR_0];
 unsigned long VAR_3;
 int VAR_4, VAR_5 = 0;

 FUNC_1(&VAR_2->lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2->ndesc; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, VAR_2->entry[VAR_4].urb);
  if (VAR_5 < 0)
   break;
 }
 VAR_2->head = VAR_2->tail = 0;
 VAR_2->queued = 0;
 FUNC_2(&VAR_2->lock, VAR_3);

 return VAR_5;
}
