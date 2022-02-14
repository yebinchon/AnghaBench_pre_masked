
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgtport {int dev; int ls_list; struct nvmet_fc_ls_iod* iod; } ;
struct nvmet_fc_ls_iod {int ls_list; struct nvmet_fc_ls_iod* rqstbuf; int rspdma; struct nvmet_fc_ls_iod* rspbuf; struct nvmet_fc_tgtport* tgtport; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct nvmet_fc_ls_iod*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct nvmet_fc_ls_iod*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct nvmet_fc_tgtport *VAR_7)
{
 struct nvmet_fc_ls_iod *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_4, sizeof(struct nvmet_fc_ls_iod),
   VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_7->iod = VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_8++, VAR_9++) {
  FUNC_0(&VAR_8->work, VAR_6);
  VAR_8->tgtport = VAR_7;
  FUNC_6(&VAR_8->ls_list, &VAR_7->ls_list);

  VAR_8->rqstbuf = FUNC_4(2, VAR_5,
   VAR_3);
  if (!VAR_8->rqstbuf)
   goto out_fail;

  VAR_8->rspbuf = VAR_8->rqstbuf + VAR_5;

  VAR_8->rspdma = FUNC_1(VAR_7->dev, VAR_8->rspbuf,
      VAR_5,
      VAR_0);
  if (FUNC_2(VAR_7->dev, VAR_8->rspdma))
   goto out_fail;
 }

 return 0;

out_fail:
 FUNC_5(VAR_8->rqstbuf);
 FUNC_7(&VAR_8->ls_list);
 for (VAR_8--, VAR_9--; VAR_9 >= 0; VAR_8--, VAR_9--) {
  FUNC_3(VAR_7->dev, VAR_8->rspdma,
    VAR_5, VAR_0);
  FUNC_5(VAR_8->rqstbuf);
  FUNC_7(&VAR_8->ls_list);
 }

 FUNC_5(VAR_8);

 return -VAR_1;
}
