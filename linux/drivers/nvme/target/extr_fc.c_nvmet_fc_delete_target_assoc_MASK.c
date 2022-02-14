
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgtport {int lock; } ;
struct nvmet_fc_tgt_queue {int dummy; } ;
struct nvmet_fc_tgt_assoc {struct nvmet_fc_tgt_queue** queues; struct nvmet_fc_tgtport* tgtport; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvmet_fc_tgt_queue*) ;
 int FUNC_1 (struct nvmet_fc_tgt_assoc*) ;
 int FUNC_2 (struct nvmet_fc_tgt_queue*) ;
 int FUNC_3 (struct nvmet_fc_tgt_queue*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct nvmet_fc_tgt_assoc *VAR_1)
{
 struct nvmet_fc_tgtport *VAR_2 = VAR_1->tgtport;
 struct nvmet_fc_tgt_queue *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_4(&VAR_2->lock, VAR_4);
 for (VAR_5 = VAR_0; VAR_5 >= 0; VAR_5--) {
  VAR_3 = VAR_1->queues[VAR_5];
  if (VAR_3) {
   if (!FUNC_2(VAR_3))
    continue;
   FUNC_5(&VAR_2->lock, VAR_4);
   FUNC_0(VAR_3);
   FUNC_3(VAR_3);
   FUNC_4(&VAR_2->lock, VAR_4);
  }
 }
 FUNC_5(&VAR_2->lock, VAR_4);

 FUNC_1(VAR_1);
}
