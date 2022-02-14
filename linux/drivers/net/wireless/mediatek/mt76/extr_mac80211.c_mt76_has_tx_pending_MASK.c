
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_queue {scalar_t__ queued; } ;
struct mt76_dev {TYPE_1__* q_tx; } ;
struct TYPE_2__ {struct mt76_queue* q; } ;


 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1(struct mt76_dev *VAR_0)
{
 struct mt76_queue *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->q_tx); VAR_2++) {
  VAR_1 = VAR_0->q_tx[VAR_2].q;
  if (VAR_1 && VAR_1->queued)
   return 1;
 }

 return 0;
}
