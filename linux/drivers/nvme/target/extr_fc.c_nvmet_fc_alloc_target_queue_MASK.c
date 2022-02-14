
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct nvmet_fc_tgt_queue {size_t qid; size_t sqsize; int work_q; int nvme_sq; int ref; int qlock; int zrspcnt; int rsn; int sqtail; int connected; int pending_cmd_list; int avail_defer_list; int fod_list; struct nvmet_fc_tgt_assoc* assoc; } ;
struct nvmet_fc_tgt_assoc {TYPE_2__* tgtport; struct nvmet_fc_tgt_queue** queues; int a_id; } ;
struct TYPE_4__ {int port_num; } ;
struct TYPE_5__ {int lock; TYPE_1__ fc_target_port; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;
 int FUNC_1 (struct nvmet_fc_tgt_queue*) ;
 int FUNC_2 (char*,int ,int ,int ,int ,size_t) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct nvmet_fc_tgt_queue*) ;
 int FUNC_6 (int *) ;
 struct nvmet_fc_tgt_queue* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,struct nvmet_fc_tgt_queue*) ;
 int FUNC_9 (TYPE_2__*,struct nvmet_fc_tgt_queue*) ;
 int FUNC_10 (struct nvmet_fc_tgt_assoc*) ;
 int FUNC_11 (struct nvmet_fc_tgt_assoc*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct nvmet_fc_tgt_queue*,int ,size_t) ;

__attribute__((used)) static struct nvmet_fc_tgt_queue *
FUNC_17(struct nvmet_fc_tgt_assoc *VAR_3,
   u16 VAR_4, u16 VAR_5)
{
 struct nvmet_fc_tgt_queue *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_4 > VAR_1)
  return ((void*)0);

 VAR_6 = FUNC_7(FUNC_16(VAR_6, VAR_2, VAR_5), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 if (!FUNC_10(VAR_3))
  goto out_free_queue;

 VAR_6->work_q = FUNC_2("ntfc%d.%d.%d", 0, 0,
    VAR_3->tgtport->fc_target_port.port_num,
    VAR_3->a_id, VAR_4);
 if (!VAR_6->work_q)
  goto out_a_put;

 VAR_6->qid = VAR_4;
 VAR_6->sqsize = VAR_5;
 VAR_6->assoc = VAR_3;
 FUNC_0(&VAR_6->fod_list);
 FUNC_0(&VAR_6->avail_defer_list);
 FUNC_0(&VAR_6->pending_cmd_list);
 FUNC_3(&VAR_6->connected, 0);
 FUNC_3(&VAR_6->sqtail, 0);
 FUNC_3(&VAR_6->rsn, 1);
 FUNC_3(&VAR_6->zrspcnt, 0);
 FUNC_13(&VAR_6->qlock);
 FUNC_6(&VAR_6->ref);

 FUNC_9(VAR_3->tgtport, VAR_6);

 VAR_8 = FUNC_12(&VAR_6->nvme_sq);
 if (VAR_8)
  goto out_fail_iodlist;

 FUNC_1(VAR_3->queues[VAR_4]);
 FUNC_14(&VAR_3->tgtport->lock, VAR_7);
 VAR_3->queues[VAR_4] = VAR_6;
 FUNC_15(&VAR_3->tgtport->lock, VAR_7);

 return VAR_6;

out_fail_iodlist:
 FUNC_8(VAR_3->tgtport, VAR_6);
 FUNC_4(VAR_6->work_q);
out_a_put:
 FUNC_11(VAR_3);
out_free_queue:
 FUNC_5(VAR_6);
 return ((void*)0);
}
