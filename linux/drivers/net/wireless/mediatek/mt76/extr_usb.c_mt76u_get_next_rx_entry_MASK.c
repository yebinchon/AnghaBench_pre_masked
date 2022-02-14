
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct mt76_queue {scalar_t__ queued; size_t head; int ndesc; int lock; TYPE_1__* entry; } ;
struct mt76_dev {struct mt76_queue* q_rx; } ;
struct TYPE_2__ {struct urb* urb; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline struct urb *
FUNC_2(struct mt76_dev *VAR_1)
{
 struct mt76_queue *VAR_2 = &VAR_1->q_rx[VAR_0];
 struct urb *VAR_3 = ((void*)0);
 unsigned long VAR_4;

 FUNC_0(&VAR_2->lock, VAR_4);
 if (VAR_2->queued > 0) {
  VAR_3 = VAR_2->entry[VAR_2->head].urb;
  VAR_2->head = (VAR_2->head + 1) % VAR_2->ndesc;
  VAR_2->queued--;
 }
 FUNC_1(&VAR_2->lock, VAR_4);

 return VAR_3;
}
