
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_queue {TYPE_1__* regs; int head; int tail; int ndesc; int desc_dma; } ;
struct mt76_dev {int dummy; } ;
struct TYPE_2__ {int cpu_idx; int dma_idx; int ring_size; int desc_base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct mt76_dev *VAR_0, struct mt76_queue *VAR_1)
{
 FUNC_1(VAR_1->desc_dma, &VAR_1->regs->desc_base);
 FUNC_1(VAR_1->ndesc, &VAR_1->regs->ring_size);
 VAR_1->head = FUNC_0(&VAR_1->regs->dma_idx);
 VAR_1->tail = VAR_1->head;
 FUNC_1(VAR_1->head, &VAR_1->regs->cpu_idx);
}
