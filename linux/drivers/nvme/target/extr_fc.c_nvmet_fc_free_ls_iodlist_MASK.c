
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgtport {struct nvmet_fc_ls_iod* iod; int dev; } ;
struct nvmet_fc_ls_iod {int ls_list; struct nvmet_fc_ls_iod* rqstbuf; int rspdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct nvmet_fc_ls_iod*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_tgtport *VAR_3)
{
 struct nvmet_fc_ls_iod *VAR_4 = VAR_3->iod;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_4++, VAR_5++) {
  FUNC_0(VAR_3->dev,
    VAR_4->rspdma, VAR_2,
    VAR_0);
  FUNC_1(VAR_4->rqstbuf);
  FUNC_2(&VAR_4->ls_list);
 }
 FUNC_1(VAR_3->iod);
}
