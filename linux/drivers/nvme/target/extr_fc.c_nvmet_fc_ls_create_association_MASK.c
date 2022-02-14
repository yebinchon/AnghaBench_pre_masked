
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvmet_fc_tgtport {int dev; } ;
struct nvmet_fc_tgt_queue {scalar_t__ sqhd; int connected; scalar_t__ ersp_ratio; } ;
struct nvmet_fc_ls_iod {scalar_t__ rqstdatalen; int assoc; TYPE_3__* lsreq; scalar_t__ rspbuf; scalar_t__ rqstbuf; } ;
struct fcnvme_lsdesc_conn_id {int dummy; } ;
struct fcnvme_lsdesc_assoc_id {int dummy; } ;
struct TYPE_7__ {scalar_t__ desc_tag; int ersp_ratio; int sqsize; int desc_len; } ;
struct TYPE_6__ {int ls_cmd; } ;
struct fcnvme_ls_cr_assoc_rqst {TYPE_2__ assoc_cmd; TYPE_1__ w0; int desc_list_len; } ;
struct TYPE_10__ {int association_id; void* desc_len; scalar_t__ desc_tag; } ;
struct TYPE_9__ {int connection_id; void* desc_len; scalar_t__ desc_tag; } ;
struct fcnvme_ls_cr_assoc_acc {TYPE_5__ associd; TYPE_4__ connectid; } ;
struct TYPE_8__ {int rsplen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct fcnvme_ls_cr_assoc_acc*,int ,int) ;
 int FUNC_8 (struct nvmet_fc_tgtport*) ;
 struct nvmet_fc_tgt_queue* FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (struct fcnvme_ls_cr_assoc_acc*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct fcnvme_ls_cr_assoc_acc*,int ,void*,int ) ;
 int FUNC_12 (int ,int ) ;
 int * VAR_18 ;

__attribute__((used)) static void
FUNC_13(struct nvmet_fc_tgtport *VAR_19,
   struct nvmet_fc_ls_iod *VAR_20)
{
 struct fcnvme_ls_cr_assoc_rqst *VAR_21 =
    (struct fcnvme_ls_cr_assoc_rqst *)VAR_20->rqstbuf;
 struct fcnvme_ls_cr_assoc_acc *VAR_22 =
    (struct fcnvme_ls_cr_assoc_acc *)VAR_20->rspbuf;
 struct nvmet_fc_tgt_queue *VAR_23;
 int VAR_24 = 0;

 FUNC_7(VAR_22, 0, sizeof(*VAR_22));
 if (VAR_20->rqstdatalen < VAR_3)
  VAR_24 = VAR_14;
 else if (FUNC_2(VAR_21->desc_list_len) <
   VAR_4)
  VAR_24 = VAR_15;
 else if (VAR_21->assoc_cmd.desc_tag !=
   FUNC_3(VAR_5))
  VAR_24 = VAR_12;
 else if (FUNC_2(VAR_21->assoc_cmd.desc_len) <
   VAR_2)
  VAR_24 = VAR_13;
 else if (!VAR_21->assoc_cmd.ersp_ratio ||
   (FUNC_1(VAR_21->assoc_cmd.ersp_ratio) >=
    FUNC_1(VAR_21->assoc_cmd.sqsize)))
  VAR_24 = VAR_16;

 else {

  VAR_20->assoc = FUNC_8(VAR_19);
  if (!VAR_20->assoc)
   VAR_24 = VAR_11;
  else {
   VAR_23 = FUNC_9(VAR_20->assoc, 0,
     FUNC_1(VAR_21->assoc_cmd.sqsize));
   if (!VAR_23)
    VAR_24 = VAR_17;
  }
 }

 if (VAR_24) {
  FUNC_5(VAR_19->dev,
   "Create Association LS failed: %s\n",
   VAR_18[VAR_24]);
  VAR_20->lsreq->rsplen = FUNC_10(VAR_22,
    VAR_10, VAR_21->w0.ls_cmd,
    VAR_9,
    VAR_8, 0);
  return;
 }

 VAR_23->ersp_ratio = FUNC_1(VAR_21->assoc_cmd.ersp_ratio);
 FUNC_0(&VAR_23->connected, 1);
 VAR_23->sqhd = 0;



 VAR_20->lsreq->rsplen = sizeof(*VAR_22);

 FUNC_11(VAR_22, VAR_6,
   FUNC_6(
    sizeof(struct fcnvme_ls_cr_assoc_acc)),
   VAR_7);
 VAR_22->associd.desc_tag = FUNC_3(VAR_0);
 VAR_22->associd.desc_len =
   FUNC_6(
    sizeof(struct fcnvme_lsdesc_assoc_id));
 VAR_22->associd.association_id =
   FUNC_4(FUNC_12(VAR_20->assoc, 0));
 VAR_22->connectid.desc_tag = FUNC_3(VAR_1);
 VAR_22->connectid.desc_len =
   FUNC_6(
    sizeof(struct fcnvme_lsdesc_conn_id));
 VAR_22->connectid.connection_id = VAR_22->associd.association_id;
}
