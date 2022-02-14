
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvmet_fc_tgtport {int dev; } ;
struct nvmet_fc_tgt_assoc {int dummy; } ;
struct nvmet_fc_ls_iod {int rqstdatalen; struct nvmet_fc_tgt_assoc* assoc; TYPE_4__* lsreq; scalar_t__ rspbuf; scalar_t__ rqstbuf; } ;
struct fcnvme_lsdesc_disconn_cmd {int dummy; } ;
struct fcnvme_lsdesc_assoc_id {int dummy; } ;
struct TYPE_7__ {int ls_cmd; } ;
struct TYPE_6__ {scalar_t__ desc_tag; scalar_t__ desc_len; int association_id; } ;
struct TYPE_5__ {scalar_t__ desc_tag; scalar_t__ desc_len; scalar_t__ scope; } ;
struct fcnvme_ls_disconnect_rqst {scalar_t__ desc_list_len; TYPE_3__ w0; TYPE_2__ associd; TYPE_1__ discon_cmd; } ;
struct fcnvme_ls_disconnect_acc {int dummy; } ;
struct TYPE_8__ {int rsplen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct fcnvme_ls_disconnect_acc*,int ,int) ;
 int FUNC_5 (struct nvmet_fc_tgt_assoc*) ;
 struct nvmet_fc_tgt_assoc* FUNC_6 (struct nvmet_fc_tgtport*,int ) ;
 int FUNC_7 (struct fcnvme_ls_disconnect_acc*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct fcnvme_ls_disconnect_acc*,int ,scalar_t__,int ) ;
 int FUNC_9 (struct nvmet_fc_tgt_assoc*) ;
 int * VAR_20 ;

__attribute__((used)) static void
FUNC_10(struct nvmet_fc_tgtport *VAR_21,
   struct nvmet_fc_ls_iod *VAR_22)
{
 struct fcnvme_ls_disconnect_rqst *VAR_23 =
   (struct fcnvme_ls_disconnect_rqst *)VAR_22->rqstbuf;
 struct fcnvme_ls_disconnect_acc *VAR_24 =
   (struct fcnvme_ls_disconnect_acc *)VAR_22->rspbuf;
 struct nvmet_fc_tgt_assoc *VAR_25;
 int VAR_26 = 0;

 FUNC_4(VAR_24, 0, sizeof(*VAR_24));

 if (VAR_22->rqstdatalen < sizeof(struct fcnvme_ls_disconnect_rqst))
  VAR_26 = VAR_15;
 else if (VAR_23->desc_list_len !=
   FUNC_3(
    sizeof(struct fcnvme_ls_disconnect_rqst)))
  VAR_26 = VAR_16;
 else if (VAR_23->associd.desc_tag != FUNC_1(VAR_2))
  VAR_26 = VAR_11;
 else if (VAR_23->associd.desc_len !=
   FUNC_3(
    sizeof(struct fcnvme_lsdesc_assoc_id)))
  VAR_26 = VAR_12;
 else if (VAR_23->discon_cmd.desc_tag !=
   FUNC_1(VAR_3))
  VAR_26 = VAR_13;
 else if (VAR_23->discon_cmd.desc_len !=
   FUNC_3(
    sizeof(struct fcnvme_lsdesc_disconn_cmd)))
  VAR_26 = VAR_14;
 else if ((VAR_23->discon_cmd.scope != VAR_0) &&
   (VAR_23->discon_cmd.scope != VAR_1))
  VAR_26 = VAR_17;
 else {

  VAR_25 = FUNC_6(VAR_21,
    FUNC_0(VAR_23->associd.association_id));
  VAR_22->assoc = VAR_25;
  if (!VAR_25)
   VAR_26 = VAR_18;
 }

 if (VAR_26) {
  FUNC_2(VAR_21->dev,
   "Disconnect LS failed: %s\n",
   VAR_20[VAR_26]);
  VAR_22->lsreq->rsplen = FUNC_7(VAR_24,
    VAR_10, VAR_23->w0.ls_cmd,
    (VAR_26 == VAR_18) ?
     VAR_7 :
     (VAR_26 == VAR_19) ?
      VAR_8 :
      VAR_9,
    VAR_6, 0);
  return;
 }



 VAR_22->lsreq->rsplen = sizeof(*VAR_24);

 FUNC_8(VAR_24, VAR_4,
   FUNC_3(
    sizeof(struct fcnvme_ls_disconnect_acc)),
   VAR_5);


 FUNC_9(VAR_22->assoc);

 FUNC_5(VAR_22->assoc);
}
