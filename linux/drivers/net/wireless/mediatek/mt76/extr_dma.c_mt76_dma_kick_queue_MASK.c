
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_queue {TYPE_1__* regs; int head; } ;
struct mt76_dev {int dummy; } ;
struct TYPE_2__ {int cpu_idx; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct mt76_dev *VAR_0, struct mt76_queue *VAR_1)
{
 FUNC_0(VAR_1->head, &VAR_1->regs->cpu_idx);
}
