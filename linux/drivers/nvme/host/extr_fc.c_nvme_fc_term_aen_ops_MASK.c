
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * private; } ;
struct nvme_fc_fcp_op {TYPE_1__ fcp_req; } ;
struct nvme_fc_ctrl {struct nvme_fc_fcp_op* aen_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_fc_ctrl*,struct nvme_fc_fcp_op*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nvme_fc_ctrl *VAR_1)
{
 struct nvme_fc_fcp_op *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->aen_ops;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_2++) {
  if (!VAR_2->fcp_req.private)
   continue;

  FUNC_0(VAR_1, VAR_2);

  FUNC_1(VAR_2->fcp_req.private);
  VAR_2->fcp_req.private = ((void*)0);
 }
}
