
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_fc_tgtport {int fc_target_port; TYPE_1__* ops; int dev; } ;
struct nvmet_fc_ls_iod {int lsreq; int rspdma; } ;
struct TYPE_2__ {int (* xmt_ls_rsp ) (int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_tgtport *VAR_2,
    struct nvmet_fc_ls_iod *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2->dev, VAR_3->rspdma,
      VAR_1, VAR_0);

 VAR_4 = VAR_2->ops->xmt_ls_rsp(&VAR_2->fc_target_port, VAR_3->lsreq);
 if (VAR_4)
  FUNC_1(VAR_3->lsreq);
}
