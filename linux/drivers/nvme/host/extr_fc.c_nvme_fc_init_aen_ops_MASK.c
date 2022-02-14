
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_7__ {void* private; } ;
struct TYPE_8__ {scalar_t__ command_id; int opcode; } ;
struct nvme_command {TYPE_4__ common; } ;
struct nvme_fc_cmd_iu {struct nvme_command sqe; } ;
struct nvme_fc_fcp_op {TYPE_3__ fcp_req; int flags; struct nvme_fc_cmd_iu cmd_iu; } ;
struct nvme_fc_ctrl {int * queues; TYPE_2__* lport; struct nvme_fc_fcp_op* aen_ops; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int fcprqst_priv_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvme_fc_ctrl*,int *,struct nvme_fc_fcp_op*,struct request*,scalar_t__) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nvme_command*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct nvme_fc_ctrl *VAR_6)
{
 struct nvme_fc_fcp_op *VAR_7;
 struct nvme_fc_cmd_iu *VAR_8;
 struct nvme_command *VAR_9;
 void *VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = VAR_6->aen_ops;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++, VAR_7++) {
  VAR_10 = FUNC_2(VAR_6->lport->ops->fcprqst_priv_sz,
      VAR_2);
  if (!VAR_10)
   return -VAR_0;

  VAR_8 = &VAR_7->cmd_iu;
  VAR_9 = &VAR_8->sqe;
  VAR_12 = FUNC_0(VAR_6, &VAR_6->queues[0],
    VAR_7, (struct request *)((void*)0),
    (VAR_3 + VAR_11));
  if (VAR_12) {
   FUNC_1(VAR_10);
   return VAR_12;
  }

  VAR_7->flags = VAR_1;
  VAR_7->fcp_req.private = VAR_10;

  FUNC_3(VAR_9, 0, sizeof(*VAR_9));
  VAR_9->common.opcode = VAR_5;

  VAR_9->common.command_id = VAR_3 + VAR_11;
 }
 return 0;
}
