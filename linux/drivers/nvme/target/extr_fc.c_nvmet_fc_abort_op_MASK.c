
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_fc_tgtport {int fc_target_port; TYPE_1__* ops; } ;
struct nvmet_fc_fcp_iod {int queue; int aborted; struct nvmefc_tgt_fcp_req* fcpreq; } ;
struct nvmefc_tgt_fcp_req {int dummy; } ;
struct TYPE_2__ {int (* fcp_abort ) (int *,struct nvmefc_tgt_fcp_req*) ;} ;


 int FUNC_0 (int ,struct nvmet_fc_fcp_iod*) ;
 int FUNC_1 (struct nvmet_fc_fcp_iod*) ;
 int FUNC_2 (int *,struct nvmefc_tgt_fcp_req*) ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_tgtport *VAR_0,
    struct nvmet_fc_fcp_iod *VAR_1)
{
 struct nvmefc_tgt_fcp_req *VAR_2 = VAR_1->fcpreq;


 FUNC_1(VAR_1);






 if (!VAR_1->aborted)
  VAR_0->ops->fcp_abort(&VAR_0->fc_target_port, VAR_2);

 FUNC_0(VAR_1->queue, VAR_1);
}
