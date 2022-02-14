
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgtport {int dev; } ;
struct nvmet_fc_ls_iod {int rspdma; struct nvmet_fc_tgtport* tgtport; } ;
struct nvmefc_tgt_ls_req {struct nvmet_fc_ls_iod* nvmet_fc_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct nvmet_fc_tgtport*,struct nvmet_fc_ls_iod*) ;
 int FUNC_2 (struct nvmet_fc_tgtport*) ;

__attribute__((used)) static void
FUNC_3(struct nvmefc_tgt_ls_req *VAR_2)
{
 struct nvmet_fc_ls_iod *VAR_3 = VAR_2->nvmet_fc_private;
 struct nvmet_fc_tgtport *VAR_4 = VAR_3->tgtport;

 FUNC_0(VAR_4->dev, VAR_3->rspdma,
    VAR_1, VAR_0);
 FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_4);
}
