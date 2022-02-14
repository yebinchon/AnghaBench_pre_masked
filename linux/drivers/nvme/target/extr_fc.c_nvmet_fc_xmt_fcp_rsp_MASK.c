
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmet_fc_tgtport {int fc_target_port; TYPE_1__* ops; } ;
struct nvmet_fc_fcp_iod {TYPE_2__* fcpreq; } ;
struct TYPE_4__ {scalar_t__ timeout; int op; } ;
struct TYPE_3__ {int (* fcp_op ) (int *,TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;
 int FUNC_1 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_tgtport *VAR_1,
    struct nvmet_fc_fcp_iod *VAR_2)
{
 int VAR_3;

 VAR_2->fcpreq->op = VAR_0;
 VAR_2->fcpreq->timeout = 0;

 FUNC_1(VAR_1, VAR_2);

 VAR_3 = VAR_1->ops->fcp_op(&VAR_1->fc_target_port, VAR_2->fcpreq);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_2);
}
