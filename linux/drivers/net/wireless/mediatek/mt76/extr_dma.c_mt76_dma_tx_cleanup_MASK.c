
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt76_sw_queue {unsigned int swq_queued; struct mt76_queue* q; } ;
struct mt76_queue_entry {size_t qid; scalar_t__ txwi; scalar_t__ skb; scalar_t__ schedule; } ;
struct mt76_queue {unsigned int queued; int tail; int ndesc; int stopped; int lock; TYPE_2__* regs; } ;
struct mt76_dev {int hw; int tx_wait; struct mt76_sw_queue* q_tx; TYPE_1__* drv; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;
struct TYPE_4__ {int dma_idx; } ;
struct TYPE_3__ {int txwi_flags; int (* tx_complete_skb ) (struct mt76_dev*,int,struct mt76_queue_entry*) ;} ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mt76_dev*,struct mt76_queue*) ;
 int FUNC_3 (struct mt76_dev*,struct mt76_queue*,int,struct mt76_queue_entry*) ;
 int FUNC_4 (struct mt76_dev*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mt76_dev*,int,struct mt76_queue_entry*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct mt76_dev *VAR_2, enum mt76_txq_id VAR_3, bool VAR_4)
{
 struct mt76_sw_queue *VAR_5 = &VAR_2->q_tx[VAR_3];
 struct mt76_queue *VAR_6 = VAR_5->q;
 struct mt76_queue_entry VAR_7;
 unsigned int VAR_8[4] = {};
 unsigned int VAR_9 = 0;
 bool VAR_10 = 0;
 int VAR_11, VAR_12;

 if (!VAR_6)
  return;

 if (VAR_4)
  VAR_12 = -1;
 else
  VAR_12 = FUNC_5(&VAR_6->regs->dma_idx);

 while ((VAR_6->queued > VAR_9) && VAR_6->tail != VAR_12) {
  FUNC_3(VAR_2, VAR_6, VAR_6->tail, &VAR_7);
  if (VAR_7.schedule)
   VAR_8[VAR_7.qid]++;

  VAR_6->tail = (VAR_6->tail + 1) % VAR_6->ndesc;
  VAR_9++;

  if (VAR_7.skb)
   VAR_2->drv->tx_complete_skb(VAR_2, VAR_3, &VAR_7);

  if (VAR_7.txwi) {
   if (!(VAR_2->drv->txwi_flags & VAR_1))
    FUNC_4(VAR_2, VAR_7.txwi);
   VAR_10 = !VAR_4;
  }

  if (!VAR_4 && VAR_6->tail == VAR_12)
   VAR_12 = FUNC_5(&VAR_6->regs->dma_idx);
 }

 FUNC_6(&VAR_6->lock);

 VAR_6->queued -= VAR_9;
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_8); VAR_11++) {
  if (!VAR_8[VAR_11])
   continue;

  VAR_2->q_tx[VAR_11].swq_queued -= VAR_8[VAR_11];
 }

 if (VAR_4)
  FUNC_2(VAR_2, VAR_6);

 VAR_10 = VAR_10 && VAR_6->stopped &&
        VAR_3 < VAR_0 && VAR_6->queued < VAR_6->ndesc - 8;
 if (VAR_10)
  VAR_6->stopped = 0;

 if (!VAR_6->queued)
  FUNC_9(&VAR_2->tx_wait);

 FUNC_7(&VAR_6->lock);

 if (VAR_10)
  FUNC_1(VAR_2->hw, VAR_3);
}
