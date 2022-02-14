
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvmet_fc_tgtport {int dummy; } ;
struct nvme_completion {void* status; int command_id; void* sq_id; int sq_head; } ;
struct TYPE_7__ {struct nvme_completion cqe; } ;
struct nvme_common_command {int command_id; } ;
struct TYPE_5__ {struct nvme_common_command common; } ;
struct TYPE_6__ {TYPE_1__ sqe; } ;
struct nvmet_fc_fcp_iod {int abort; scalar_t__ io_dir; scalar_t__ data_sg_cnt; TYPE_4__* queue; int flock; TYPE_3__ rspiubuf; TYPE_2__ cmdiubuf; } ;
struct TYPE_8__ {int qid; int sqhd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct nvme_completion*,int ,int) ;
 int FUNC_2 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;
 int FUNC_3 (struct nvmet_fc_fcp_iod*) ;
 int FUNC_4 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*,int ) ;
 int FUNC_5 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct nvmet_fc_tgtport *VAR_2,
   struct nvmet_fc_fcp_iod *VAR_3, int VAR_4)
{
 struct nvme_common_command *VAR_5 = &VAR_3->cmdiubuf.sqe.common;
 struct nvme_completion *VAR_6 = &VAR_3->rspiubuf.cqe;
 unsigned long VAR_7;
 bool VAR_8;

 FUNC_6(&VAR_3->flock, VAR_7);
 VAR_8 = VAR_3->abort;
 FUNC_7(&VAR_3->flock, VAR_7);


 if (!VAR_4)
  VAR_3->queue->sqhd = VAR_6->sq_head;

 if (VAR_8) {
  FUNC_2(VAR_2, VAR_3);
  return;
 }


 if (VAR_4) {

  FUNC_1(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->sq_head = VAR_3->queue->sqhd;
  VAR_6->sq_id = FUNC_0(VAR_3->queue->qid);
  VAR_6->command_id = VAR_5->command_id;
  VAR_6->status = FUNC_0(VAR_4);
 } else {






  if ((VAR_3->io_dir == VAR_1) && (VAR_3->data_sg_cnt)) {

   FUNC_4(VAR_2, VAR_3,
      VAR_0);
   return;
  }


 }


 FUNC_3(VAR_3);

 FUNC_5(VAR_2, VAR_3);
}
