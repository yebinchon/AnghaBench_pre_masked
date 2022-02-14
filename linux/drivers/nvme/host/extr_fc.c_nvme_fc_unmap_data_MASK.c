
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_4__ {int sgl; } ;
struct nvmefc_fcp_req {scalar_t__ sg_cnt; TYPE_2__ sg_table; } ;
struct nvme_fc_fcp_op {int nents; struct nvmefc_fcp_req fcp_req; } ;
struct nvme_fc_ctrl {TYPE_1__* lport; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_4(struct nvme_fc_ctrl *VAR_1, struct request *VAR_2,
  struct nvme_fc_fcp_op *VAR_3)
{
 struct nvmefc_fcp_req *VAR_4 = &VAR_3->fcp_req;

 if (!VAR_4->sg_cnt)
  return;

 FUNC_0(VAR_1->lport->dev, VAR_4->sg_table.sgl, VAR_3->nents,
   FUNC_2(VAR_2));

 FUNC_1(VAR_2);

 FUNC_3(&VAR_4->sg_table, VAR_0);

 VAR_4->sg_cnt = 0;
}
