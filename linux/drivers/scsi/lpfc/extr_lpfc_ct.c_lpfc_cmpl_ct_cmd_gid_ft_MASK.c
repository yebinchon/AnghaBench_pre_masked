
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {scalar_t__ fc_ns_retry; int load_flag; int fc_flag; int gidft_inp; scalar_t__ fc_rscn_id_cnt; scalar_t__ num_disc_nodes; scalar_t__ port_state; } ;
struct TYPE_18__ {scalar_t__ CmdRsp; } ;
struct TYPE_17__ {TYPE_8__ bits; } ;
struct TYPE_12__ {int Fc4Type; } ;
struct TYPE_13__ {TYPE_2__ gid; } ;
struct lpfc_sli_ct_request {scalar_t__ ReasonCode; scalar_t__ Explanation; TYPE_7__ CommandResponse; TYPE_3__ un; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_11__ {struct lpfc_nodelist* ndlp; struct lpfc_iocbq* rsp_iocb; } ;
struct TYPE_14__ {scalar_t__ bdeSize; } ;
struct TYPE_15__ {TYPE_4__ bdl; } ;
struct TYPE_16__ {scalar_t__* ulpWord; TYPE_5__ genreq64; } ;
struct TYPE_19__ {scalar_t__ ulpStatus; TYPE_6__ un; } ;
struct lpfc_iocbq {TYPE_1__ context_un; TYPE_9__ iocb; scalar_t__ context2; scalar_t__ context1; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
typedef TYPE_9__ IOCB_t ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct lpfc_vport*) ;
 scalar_t__ FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*) ;
 scalar_t__ FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (struct lpfc_vport*,struct lpfc_iocbq*) ;
 int FUNC_10 (struct lpfc_vport*,int ,scalar_t__,int) ;
 int FUNC_11 (struct lpfc_vport*,struct lpfc_dmabuf*,int ,scalar_t__) ;
 int FUNC_12 (struct lpfc_vport*,int ,int ,char*,...) ;
 struct Scsi_Host* FUNC_13 (struct lpfc_vport*) ;
 int FUNC_14 (struct lpfc_vport*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17(struct lpfc_hba *VAR_19, struct lpfc_iocbq *VAR_20,
   struct lpfc_iocbq *VAR_21)
{
 struct lpfc_vport *VAR_22 = VAR_20->vport;
 struct Scsi_Host *VAR_23 = FUNC_13(VAR_22);
 IOCB_t *VAR_24;
 struct lpfc_dmabuf *VAR_25;
 struct lpfc_dmabuf *VAR_26;
 struct lpfc_sli_ct_request *VAR_27;
 struct lpfc_sli_ct_request *VAR_28;
 struct lpfc_nodelist *VAR_29;
 int VAR_30, VAR_31;


 VAR_29 = VAR_20->context_un.ndlp;


 VAR_20->context_un.rsp_iocb = VAR_21;
 VAR_26 = (struct lpfc_dmabuf *) VAR_20->context1;
 VAR_25 = (struct lpfc_dmabuf *) VAR_20->context2;
 VAR_24 = &VAR_21->iocb;

 FUNC_3(VAR_22, VAR_12,
   "GID_FT cmpl:     status:x%x/x%x rtry:%d",
  VAR_24->ulpStatus, VAR_24->un.ulpWord[4], VAR_22->fc_ns_retry);


 if (VAR_22->load_flag & VAR_2) {
  if (VAR_22->fc_flag & VAR_1)
   FUNC_6(VAR_22);
  goto out;
 }

 if (FUNC_5(VAR_22)) {
  FUNC_12(VAR_22, VAR_8, VAR_9,
     "0216 Link event during NS query\n");
  if (VAR_22->fc_flag & VAR_1)
   FUNC_6(VAR_22);
  FUNC_14(VAR_22, VAR_3);
  goto out;
 }
 if (FUNC_8(VAR_24)) {
  FUNC_12(VAR_22, VAR_8, VAR_9,
     "0226 NS query failed due to link event\n");
  if (VAR_22->fc_flag & VAR_1)
   FUNC_6(VAR_22);
  goto out;
 }

 FUNC_15(VAR_23->host_lock);
 if (VAR_22->fc_flag & VAR_0) {
  VAR_22->fc_flag &= ~VAR_0;
  FUNC_16(VAR_23->host_lock);




  VAR_22->gidft_inp--;





  FUNC_12(VAR_22, VAR_8, VAR_10,
     "0151 Process Deferred RSCN Data: x%x x%x\n",
     VAR_22->fc_flag, VAR_22->fc_rscn_id_cnt);
  FUNC_7(VAR_22);

  goto out;
 }
 FUNC_16(VAR_23->host_lock);

 if (VAR_24->ulpStatus) {

  if (VAR_22->fc_ns_retry < VAR_13) {
   if (VAR_24->ulpStatus != VAR_6 ||
       (VAR_24->un.ulpWord[4] & VAR_5) !=
       VAR_4)
    VAR_22->fc_ns_retry++;

   VAR_31 = FUNC_9(VAR_22, VAR_20);
   if (VAR_31 == 0)
    goto out;


   VAR_22->gidft_inp--;
   VAR_30 = FUNC_10(VAR_22, VAR_14,
      VAR_22->fc_ns_retry, VAR_31);
   if (VAR_30 == 0)
    goto out;
  }
  if (VAR_22->fc_flag & VAR_1)
   FUNC_6(VAR_22);
  FUNC_14(VAR_22, VAR_3);
  FUNC_12(VAR_22, VAR_7, VAR_10,
     "0257 GID_FT Query error: 0x%x 0x%x\n",
     VAR_24->ulpStatus, VAR_22->fc_ns_retry);
 } else {

  VAR_28 = (struct lpfc_sli_ct_request *) VAR_26->virt;
  VAR_27 = (struct lpfc_sli_ct_request *) VAR_25->virt;
  if (VAR_27->CommandResponse.bits.CmdRsp ==
      FUNC_1(VAR_16)) {
   FUNC_12(VAR_22, VAR_8, VAR_9,
      "0208 NameServer Rsp Data: x%x x%x "
      "sz x%x\n",
      VAR_22->fc_flag,
      VAR_28->un.gid.Fc4Type,
      VAR_24->un.genreq64.bdl.bdeSize);

   FUNC_11(VAR_22,
        VAR_25,
        VAR_28->un.gid.Fc4Type,
        (uint32_t) (VAR_24->un.genreq64.bdl.bdeSize));
  } else if (VAR_27->CommandResponse.bits.CmdRsp ==
      FUNC_0(VAR_17)) {

   if ((VAR_27->ReasonCode == VAR_18)
       && (VAR_27->Explanation == VAR_15)) {
    FUNC_12(VAR_22, VAR_8,
     VAR_9,
     "0269 No NameServer Entries "
     "Data: x%x x%x x%x x%x\n",
     VAR_27->CommandResponse.bits.CmdRsp,
     (uint32_t) VAR_27->ReasonCode,
     (uint32_t) VAR_27->Explanation,
     VAR_22->fc_flag);

    FUNC_3(VAR_22, VAR_12,
    "GID_FT no entry  cmd:x%x rsn:x%x exp:x%x",
    (uint32_t)VAR_27->CommandResponse.bits.CmdRsp,
    (uint32_t) VAR_27->ReasonCode,
    (uint32_t) VAR_27->Explanation);
   } else {
    FUNC_12(VAR_22, VAR_8,
     VAR_9,
     "0240 NameServer Rsp Error "
     "Data: x%x x%x x%x x%x\n",
     VAR_27->CommandResponse.bits.CmdRsp,
     (uint32_t) VAR_27->ReasonCode,
     (uint32_t) VAR_27->Explanation,
     VAR_22->fc_flag);

    FUNC_3(VAR_22, VAR_12,
    "GID_FT rsp err1  cmd:x%x rsn:x%x exp:x%x",
    (uint32_t)VAR_27->CommandResponse.bits.CmdRsp,
    (uint32_t) VAR_27->ReasonCode,
    (uint32_t) VAR_27->Explanation);
   }


  } else {

   FUNC_12(VAR_22, VAR_7, VAR_9,
     "0241 NameServer Rsp Error "
     "Data: x%x x%x x%x x%x\n",
     VAR_27->CommandResponse.bits.CmdRsp,
     (uint32_t) VAR_27->ReasonCode,
     (uint32_t) VAR_27->Explanation,
     VAR_22->fc_flag);

   FUNC_3(VAR_22, VAR_12,
    "GID_FT rsp err2  cmd:x%x rsn:x%x exp:x%x",
    (uint32_t)VAR_27->CommandResponse.bits.CmdRsp,
    (uint32_t) VAR_27->ReasonCode,
    (uint32_t) VAR_27->Explanation);
  }
  VAR_22->gidft_inp--;
 }

 FUNC_12(VAR_22, VAR_8, VAR_9,
    "4216 GID_FT cmpl inp %d disc %d\n",
    VAR_22->gidft_inp, VAR_22->num_disc_nodes);


 if ((VAR_22->num_disc_nodes == 0) &&
     (VAR_22->gidft_inp == 0)) {





  if (VAR_22->port_state >= VAR_11) {
   if (VAR_22->fc_flag & VAR_1) {
    FUNC_6(VAR_22);
    FUNC_15(VAR_23->host_lock);
    VAR_22->fc_flag |= VAR_1;
    FUNC_16(VAR_23->host_lock);
   }
   else
    FUNC_6(VAR_22);
  }

  FUNC_4(VAR_22);
 }
out:
 VAR_20->context_un.ndlp = VAR_29;
 FUNC_2(VAR_19, VAR_20);
 return;
}
