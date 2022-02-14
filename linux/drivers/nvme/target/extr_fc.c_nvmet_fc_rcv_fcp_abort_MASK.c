
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgt_queue {int qlock; } ;
struct nvmet_fc_target_port {int dummy; } ;
struct nvmet_fc_fcp_iod {int abort; int aborted; int flock; scalar_t__ active; struct nvmet_fc_tgt_queue* queue; struct nvmefc_tgt_fcp_req* fcpreq; } ;
struct nvmefc_tgt_fcp_req {struct nvmet_fc_fcp_iod* nvmet_fc_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct nvmet_fc_target_port *VAR_0,
   struct nvmefc_tgt_fcp_req *VAR_1)
{
 struct nvmet_fc_fcp_iod *VAR_2 = VAR_1->nvmet_fc_private;
 struct nvmet_fc_tgt_queue *VAR_3;
 unsigned long VAR_4;

 if (!VAR_2 || VAR_2->fcpreq != VAR_1)

  return;

 VAR_3 = VAR_2->queue;

 FUNC_1(&VAR_3->qlock, VAR_4);
 if (VAR_2->active) {





  FUNC_0(&VAR_2->flock);
  VAR_2->abort = 1;
  VAR_2->aborted = 1;
  FUNC_2(&VAR_2->flock);
 }
 FUNC_3(&VAR_3->qlock, VAR_4);
}
