
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int q; } ;
struct TYPE_5__ {int sgl; } ;
struct nvmefc_fcp_req {scalar_t__ sg_cnt; TYPE_2__ sg_table; int first_sgl; } ;
struct nvme_fc_fcp_op {int nents; struct nvmefc_fcp_req fcp_req; } ;
struct nvme_fc_ctrl {TYPE_1__* lport; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct request*,int ) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct nvme_fc_ctrl *VAR_3, struct request *VAR_4,
  struct nvme_fc_fcp_op *VAR_5)
{
 struct nvmefc_fcp_req *VAR_6 = &VAR_5->fcp_req;
 int VAR_7;

 VAR_6->sg_cnt = 0;

 if (!FUNC_2(VAR_4))
  return 0;

 VAR_6->sg_table.sgl = VAR_6->first_sgl;
 VAR_7 = FUNC_5(&VAR_6->sg_table,
   FUNC_2(VAR_4), VAR_6->sg_table.sgl,
   VAR_2);
 if (VAR_7)
  return -VAR_1;

 VAR_5->nents = FUNC_1(VAR_4->q, VAR_4, VAR_6->sg_table.sgl);
 FUNC_0(VAR_5->nents > FUNC_2(VAR_4));
 VAR_6->sg_cnt = FUNC_3(VAR_3->lport->dev, VAR_6->sg_table.sgl,
    VAR_5->nents, FUNC_4(VAR_4));
 if (FUNC_7(VAR_6->sg_cnt <= 0)) {
  FUNC_6(&VAR_6->sg_table, VAR_2);
  VAR_6->sg_cnt = 0;
  return -VAR_0;
 }




 return 0;
}
