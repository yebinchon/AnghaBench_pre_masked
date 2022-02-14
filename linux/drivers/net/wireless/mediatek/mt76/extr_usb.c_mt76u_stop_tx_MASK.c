
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mt76_queue_entry {int urb; } ;
struct mt76_queue {int ndesc; size_t head; int lock; scalar_t__ queued; struct mt76_queue_entry* entry; } ;
struct TYPE_6__ {int stat_work; } ;
struct mt76_dev {int state; TYPE_3__ usb; TYPE_2__* drv; TYPE_1__* q_tx; int tx_tasklet; int dev; int tx_wait; } ;
struct TYPE_5__ {int (* tx_complete_skb ) (struct mt76_dev*,int,struct mt76_queue_entry*) ;} ;
struct TYPE_4__ {struct mt76_queue* q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mt76_dev*) ;
 int FUNC_4 (struct mt76_dev*,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mt76_dev*,int,struct mt76_queue_entry*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;

void FUNC_11(struct mt76_dev *VAR_3)
{
 struct mt76_queue_entry VAR_4;
 struct mt76_queue *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_10(VAR_3->tx_wait, !FUNC_3(VAR_3),
     VAR_0 / 5);
 if (!VAR_8) {
  FUNC_2(VAR_3->dev, "timed out waiting for pending tx\n");

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   VAR_5 = VAR_3->q_tx[VAR_6].q;
   for (VAR_7 = 0; VAR_7 < VAR_5->ndesc; VAR_7++)
    FUNC_9(VAR_5->entry[VAR_7].urb);
  }

  FUNC_8(&VAR_3->tx_tasklet);




  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   VAR_5 = VAR_3->q_tx[VAR_6].q;


   FUNC_5(&VAR_5->lock);
   while (VAR_5->queued) {
    VAR_4 = VAR_5->entry[VAR_5->head];
    VAR_5->head = (VAR_5->head + 1) % VAR_5->ndesc;
    VAR_5->queued--;

    VAR_3->drv->tx_complete_skb(VAR_3, VAR_6, &VAR_4);
   }
   FUNC_6(&VAR_5->lock);
  }
 }

 FUNC_0(&VAR_3->usb.stat_work);
 FUNC_1(VAR_2, &VAR_3->state);

 FUNC_4(VAR_3, ((void*)0), 1);
}
