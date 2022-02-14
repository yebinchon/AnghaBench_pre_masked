
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
struct nvmet_fc_ls_iod {int rqstdatalen; int assoc; TYPE_3__* lsreq; scalar_t__ rspbuf; scalar_t__ rqstbuf; } ;
struct fcnvme_lsdesc_cr_conn_cmd {int dummy; } ;
struct fcnvme_lsdesc_conn_id {int dummy; } ;
struct fcnvme_lsdesc_assoc_id {int dummy; } ;
struct TYPE_10__ {scalar_t__ desc_tag; scalar_t__ desc_len; int qid; int ersp_ratio; int sqsize; } ;
struct TYPE_7__ {int ls_cmd; } ;
struct TYPE_6__ {scalar_t__ desc_tag; scalar_t__ desc_len; int association_id; } ;
struct fcnvme_ls_cr_conn_rqst {scalar_t__ desc_list_len; TYPE_5__ connect_cmd; TYPE_2__ w0; TYPE_1__ associd; } ;
struct TYPE_9__ {int connection_id; scalar_t__ desc_len; scalar_t__ desc_tag; } ;
struct fcnvme_ls_cr_conn_acc {TYPE_4__ connectid; } ;
struct TYPE_8__ {int rsplen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct fcnvme_ls_cr_conn_acc*,int ,int) ;
 struct nvmet_fc_tgt_queue* FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct nvmet_fc_tgtport*,int ) ;
 int FUNC_10 (struct fcnvme_ls_cr_conn_acc*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct fcnvme_ls_cr_conn_acc*,int ,scalar_t__,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ) ;
 int * VAR_18 ;

__attribute__((used)) static void
FUNC_14(struct nvmet_fc_tgtport *VAR_19,
   struct nvmet_fc_ls_iod *VAR_20)
{
 struct fcnvme_ls_cr_conn_rqst *VAR_21 =
    (struct fcnvme_ls_cr_conn_rqst *)VAR_20->rqstbuf;
 struct fcnvme_ls_cr_conn_acc *VAR_22 =
    (struct fcnvme_ls_cr_conn_acc *)VAR_20->rspbuf;
 struct nvmet_fc_tgt_queue *VAR_23;
 int VAR_24 = 0;

 FUNC_7(VAR_22, 0, sizeof(*VAR_22));

 if (VAR_20->rqstdatalen < sizeof(struct fcnvme_ls_cr_conn_rqst))
  VAR_24 = VAR_13;
 else if (VAR_21->desc_list_len !=
   FUNC_6(
    sizeof(struct fcnvme_ls_cr_conn_rqst)))
  VAR_24 = VAR_14;
 else if (VAR_21->associd.desc_tag != FUNC_3(VAR_0))
  VAR_24 = VAR_9;
 else if (VAR_21->associd.desc_len !=
   FUNC_6(
    sizeof(struct fcnvme_lsdesc_assoc_id)))
  VAR_24 = VAR_10;
 else if (VAR_21->connect_cmd.desc_tag !=
   FUNC_3(VAR_2))
  VAR_24 = VAR_11;
 else if (VAR_21->connect_cmd.desc_len !=
   FUNC_6(
    sizeof(struct fcnvme_lsdesc_cr_conn_cmd)))
  VAR_24 = VAR_12;
 else if (!VAR_21->connect_cmd.ersp_ratio ||
   (FUNC_1(VAR_21->connect_cmd.ersp_ratio) >=
    FUNC_1(VAR_21->connect_cmd.sqsize)))
  VAR_24 = VAR_15;

 else {

  VAR_20->assoc = FUNC_9(VAR_19,
    FUNC_2(VAR_21->associd.association_id));
  if (!VAR_20->assoc)
   VAR_24 = VAR_16;
  else {
   VAR_23 = FUNC_8(VAR_20->assoc,
     FUNC_1(VAR_21->connect_cmd.qid),
     FUNC_1(VAR_21->connect_cmd.sqsize));
   if (!VAR_23)
    VAR_24 = VAR_17;


   FUNC_13(VAR_20->assoc);
  }
 }

 if (VAR_24) {
  FUNC_5(VAR_19->dev,
   "Create Connection LS failed: %s\n",
   VAR_18[VAR_24]);
  VAR_20->lsreq->rsplen = FUNC_10(VAR_22,
    VAR_8, VAR_21->w0.ls_cmd,
    (VAR_24 == VAR_16) ?
     VAR_6 :
     VAR_7,
    VAR_5, 0);
  return;
 }

 VAR_23->ersp_ratio = FUNC_1(VAR_21->connect_cmd.ersp_ratio);
 FUNC_0(&VAR_23->connected, 1);
 VAR_23->sqhd = 0;



 VAR_20->lsreq->rsplen = sizeof(*VAR_22);

 FUNC_11(VAR_22, VAR_3,
   FUNC_6(sizeof(struct fcnvme_ls_cr_conn_acc)),
   VAR_4);
 VAR_22->connectid.desc_tag = FUNC_3(VAR_1);
 VAR_22->connectid.desc_len =
   FUNC_6(
    sizeof(struct fcnvme_lsdesc_conn_id));
 VAR_22->connectid.connection_id =
   FUNC_4(FUNC_12(VAR_20->assoc,
    FUNC_1(VAR_21->connect_cmd.qid)));
}
