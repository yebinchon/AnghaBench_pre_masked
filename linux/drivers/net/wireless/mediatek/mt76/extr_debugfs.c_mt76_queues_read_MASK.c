
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct mt76_sw_queue {int swq_queued; TYPE_1__* q; } ;
struct mt76_dev {struct mt76_sw_queue* q_tx; } ;
struct TYPE_2__ {int tail; int head; int queued; } ;


 int FUNC_0 (struct mt76_sw_queue*) ;
 struct mt76_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct mt76_dev *VAR_2 = FUNC_1(VAR_0->private);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->q_tx); VAR_3++) {
  struct mt76_sw_queue *VAR_4 = &VAR_2->q_tx[VAR_3];

  if (!VAR_4->q)
   continue;

  FUNC_2(VAR_0,
      "%d:	queued=%d head=%d tail=%d swq_queued=%d\n",
      VAR_3, VAR_4->q->queued, VAR_4->q->head, VAR_4->q->tail,
      VAR_4->swq_queued);
 }

 return 0;
}
