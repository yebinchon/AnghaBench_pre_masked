
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mt76_sw_queue {int swq_queued; struct mt76_queue* q; } ;
struct mt76_queue_entry {int done; int schedule; } ;
struct mt76_queue {scalar_t__ queued; size_t head; int ndesc; int stopped; int lock; struct mt76_queue_entry* entry; } ;
struct TYPE_4__ {int stat_work; } ;
struct mt76_dev {int hw; TYPE_2__ usb; int state; int tx_wait; TYPE_1__* drv; struct mt76_sw_queue* q_tx; } ;
struct TYPE_3__ {int (* tx_complete_skb ) (struct mt76_dev*,int,struct mt76_queue_entry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mt76_dev*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mt76_dev*,int,struct mt76_queue_entry*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_2)
{
 struct mt76_dev *VAR_3 = (struct mt76_dev *)VAR_2;
 struct mt76_queue_entry VAR_4;
 struct mt76_sw_queue *VAR_5;
 struct mt76_queue *VAR_6;
 bool VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  u32 VAR_9 = 0, VAR_10 = 0;

  VAR_5 = &VAR_3->q_tx[VAR_8];
  VAR_6 = VAR_5->q;

  while (VAR_6->queued > VAR_9) {
   if (!VAR_6->entry[VAR_6->head].done)
    break;

   if (VAR_6->entry[VAR_6->head].schedule) {
    VAR_6->entry[VAR_6->head].schedule = 0;
    VAR_10++;
   }

   VAR_4 = VAR_6->entry[VAR_6->head];
   VAR_6->entry[VAR_6->head].done = 0;
   VAR_6->head = (VAR_6->head + 1) % VAR_6->ndesc;
   VAR_9++;

   VAR_3->drv->tx_complete_skb(VAR_3, VAR_8, &VAR_4);
  }

  FUNC_4(&VAR_6->lock);

  VAR_5->swq_queued -= VAR_10;
  VAR_6->queued -= VAR_9;

  VAR_7 = VAR_6->stopped && VAR_6->queued < VAR_6->ndesc - 8;
  if (VAR_7)
   VAR_6->stopped = 0;

  if (!VAR_6->queued)
   FUNC_8(&VAR_3->tx_wait);

  FUNC_5(&VAR_6->lock);

  FUNC_3(VAR_3, VAR_8);

  if (!FUNC_7(VAR_1, &VAR_3->state))
   FUNC_0(VAR_3->hw,
           &VAR_3->usb.stat_work,
           FUNC_2(10));

  if (VAR_7)
   FUNC_1(VAR_3->hw, VAR_8);
 }
}
