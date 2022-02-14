
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_fc_tgtport {TYPE_1__* ops; } ;
struct nvmet_fc_tgt_queue {int qid; } ;
struct nvmet_fc_fcp_iod {int dummy; } ;
struct nvmefc_tgt_fcp_req {int hwqid; struct nvmet_fc_fcp_iod* nvmet_fc_private; } ;
struct TYPE_2__ {int max_hw_queues; } ;


 int FUNC_0 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;

__attribute__((used)) static void
FUNC_1(struct nvmet_fc_tgtport *VAR_0,
         struct nvmet_fc_tgt_queue *VAR_1,
         struct nvmefc_tgt_fcp_req *VAR_2)
{
 struct nvmet_fc_fcp_iod *VAR_3 = VAR_2->nvmet_fc_private;





 VAR_2->hwqid = VAR_1->qid ?
   ((VAR_1->qid - 1) % VAR_0->ops->max_hw_queues) : 0;

 FUNC_0(VAR_0, VAR_3);
}
