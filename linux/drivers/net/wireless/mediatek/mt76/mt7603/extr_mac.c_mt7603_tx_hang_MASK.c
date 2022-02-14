
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mt76_queue {TYPE_2__* regs; int queued; } ;
struct TYPE_4__ {TYPE_3__* q_tx; } ;
struct mt7603_dev {scalar_t__* tx_dma_idx; TYPE_1__ mt76; } ;
struct TYPE_6__ {struct mt76_queue* q; } ;
struct TYPE_5__ {int cpu_idx; int dma_idx; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct mt7603_dev *VAR_0)
{
 struct mt76_queue *VAR_1;
 u32 VAR_2, VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_1 = VAR_0->mt76.q_tx[VAR_4].q;

  if (!VAR_1->queued)
   continue;

  VAR_3 = VAR_0->tx_dma_idx[VAR_4];
  VAR_2 = FUNC_0(&VAR_1->regs->dma_idx);
  VAR_0->tx_dma_idx[VAR_4] = VAR_2;

  if (VAR_2 == VAR_3 &&
      VAR_2 != FUNC_0(&VAR_1->regs->cpu_idx))
   break;
 }

 return VAR_4 < 4;
}
