
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_4__ {int * private; int * first_sgl; } ;
struct TYPE_6__ {TYPE_1__ fcp_req; } ;
struct nvme_fcp_op_w_sgl {int * priv; TYPE_3__ op; int * sgl; } ;
struct nvme_fc_queue {int rqcnt; } ;
struct blk_mq_tag_set {struct nvme_fc_ctrl* driver_data; } ;
struct nvme_fc_ctrl {int ctrl; struct nvme_fc_queue* queues; struct blk_mq_tag_set tag_set; } ;
struct TYPE_5__ {int * ctrl; } ;


 int FUNC_0 (struct nvme_fc_ctrl*,struct nvme_fc_queue*,TYPE_3__*,struct request*,int ) ;
 struct nvme_fcp_op_w_sgl* FUNC_1 (struct request*) ;
 TYPE_2__* FUNC_2 (struct request*) ;

__attribute__((used)) static int
FUNC_3(struct blk_mq_tag_set *VAR_0, struct request *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct nvme_fc_ctrl *VAR_4 = VAR_0->driver_data;
 struct nvme_fcp_op_w_sgl *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = (VAR_0 == &VAR_4->tag_set) ? VAR_2 + 1 : 0;
 struct nvme_fc_queue *VAR_7 = &VAR_4->queues[VAR_6];
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_7, &VAR_5->op, VAR_1, VAR_7->rqcnt++);
 if (VAR_8)
  return VAR_8;
 VAR_5->op.fcp_req.first_sgl = &VAR_5->sgl[0];
 VAR_5->op.fcp_req.private = &VAR_5->priv[0];
 FUNC_2(VAR_1)->ctrl = &VAR_4->ctrl;
 return VAR_8;
}
