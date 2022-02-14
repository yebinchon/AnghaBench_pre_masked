
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_fc_tgtport {int dummy; } ;
struct nvmet_fc_ls_iod {int rspbuf; TYPE_1__* lsreq; int * assoc; int rspdma; scalar_t__ rqstbuf; } ;
struct fcnvme_ls_rqst_w0 {int ls_cmd; } ;
struct TYPE_2__ {scalar_t__ rsplen; int done; int rspdma; int rspbuf; struct nvmet_fc_ls_iod* nvmet_fc_private; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ,int ,int ) ;
 int FUNC_1 (struct nvmet_fc_tgtport*,struct nvmet_fc_ls_iod*) ;
 int FUNC_2 (struct nvmet_fc_tgtport*,struct nvmet_fc_ls_iod*) ;
 int FUNC_3 (struct nvmet_fc_tgtport*,struct nvmet_fc_ls_iod*) ;
 int FUNC_4 (struct nvmet_fc_tgtport*,struct nvmet_fc_ls_iod*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct nvmet_fc_tgtport *VAR_4,
   struct nvmet_fc_ls_iod *VAR_5)
{
 struct fcnvme_ls_rqst_w0 *VAR_6 =
   (struct fcnvme_ls_rqst_w0 *)VAR_5->rqstbuf;

 VAR_5->lsreq->nvmet_fc_private = VAR_5;
 VAR_5->lsreq->rspbuf = VAR_5->rspbuf;
 VAR_5->lsreq->rspdma = VAR_5->rspdma;
 VAR_5->lsreq->done = VAR_3;

 VAR_5->lsreq->rsplen = 0;

 VAR_5->assoc = ((void*)0);






 switch (VAR_6->ls_cmd) {
 case 130:

  FUNC_1(VAR_4, VAR_5);
  break;
 case 129:

  FUNC_2(VAR_4, VAR_5);
  break;
 case 128:

  FUNC_3(VAR_4, VAR_5);
  break;
 default:
  VAR_5->lsreq->rsplen = FUNC_0(VAR_5->rspbuf,
    VAR_2, VAR_6->ls_cmd,
    VAR_1, VAR_0, 0);
 }

 FUNC_4(VAR_4, VAR_5);
}
