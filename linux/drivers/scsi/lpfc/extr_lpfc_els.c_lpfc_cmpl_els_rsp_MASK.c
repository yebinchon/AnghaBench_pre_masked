
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct lpfc_vport {int fc_flag; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nlp_state; int nlp_rpi; int nlp_prev_state; int nlp_DID; struct lpfc_vport* vport; } ;
struct TYPE_10__ {int remoteID; } ;
struct TYPE_11__ {int * ulpWord; TYPE_2__ elsreq64; } ;
struct TYPE_13__ {scalar_t__ ulpStatus; int ulpTimeout; TYPE_3__ un; int ulpIoTag; } ;
struct TYPE_9__ {TYPE_4__* mbox; } ;
struct lpfc_iocbq {int * context1; TYPE_5__ iocb; scalar_t__ context2; TYPE_1__ context_un; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_12__ {struct lpfc_dmabuf* ctx_buf; int mbox_cmpl; int mbox_flag; struct lpfc_vport* vport; int ctx_ndlp; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;
typedef TYPE_5__ IOCB_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct lpfc_hba*,scalar_t__,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct lpfc_nodelist*) ;
 scalar_t__ FUNC_8 (struct lpfc_nodelist*) ;
 int FUNC_9 (struct lpfc_nodelist*) ;
 int FUNC_10 (struct lpfc_vport*,struct lpfc_nodelist*,scalar_t__) ;
 int FUNC_11 (struct lpfc_vport*,int ,int ,char*,int ,int,int,int,...) ;
 struct Scsi_Host* FUNC_12 (struct lpfc_vport*) ;
 scalar_t__ FUNC_13 (struct lpfc_hba*,TYPE_4__*,int ) ;
 int FUNC_14 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(struct lpfc_hba *VAR_17, struct lpfc_iocbq *VAR_18,
    struct lpfc_iocbq *VAR_19)
{
 struct lpfc_nodelist *VAR_20 = (struct lpfc_nodelist *) VAR_18->context1;
 struct lpfc_vport *VAR_21 = VAR_20 ? VAR_20->vport : ((void*)0);
 struct Scsi_Host *VAR_22 = VAR_21 ? FUNC_12(VAR_21) : ((void*)0);
 IOCB_t *VAR_23;
 uint8_t *VAR_24;
 LPFC_MBOXQ_t *VAR_25 = ((void*)0);
 struct lpfc_dmabuf *VAR_26 = ((void*)0);
 uint32_t VAR_27 = 0;

 VAR_23 = &VAR_19->iocb;

 if (VAR_18->context_un.mbox)
  VAR_25 = VAR_18->context_un.mbox;




 VAR_24 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_18->context2)->virt);
 if (VAR_20 && FUNC_0(VAR_20) &&
     (*((uint32_t *) (VAR_24)) == VAR_0)) {



  if (!(VAR_20->nlp_flag & VAR_12))
   VAR_27 = 1;
 }


 if (!VAR_20 || !FUNC_0(VAR_20) || FUNC_3(VAR_21)) {
  if (VAR_25) {
   VAR_26 = (struct lpfc_dmabuf *)VAR_25->ctx_buf;
   if (VAR_26) {
    FUNC_6(VAR_17, VAR_26->virt, VAR_26->phys);
    FUNC_1(VAR_26);
   }
   FUNC_15(VAR_25, VAR_17->mbox_mem_pool);
  }
  if (VAR_20 && FUNC_0(VAR_20) &&
      (VAR_20->nlp_flag & VAR_12))
   if (FUNC_8(VAR_20)) {
    VAR_20 = ((void*)0);




    VAR_18->context1 = ((void*)0);
   }
  goto out;
 }

 FUNC_2(VAR_21, VAR_6,
  "ELS rsp cmpl:    status:x%x/x%x did:x%x",
  VAR_23->ulpStatus, VAR_23->un.ulpWord[4],
  VAR_18->iocb.un.elsreq64.remoteID);

 FUNC_11(VAR_21, VAR_3, VAR_5,
    "0110 ELS response tag x%x completes "
    "Data: x%x x%x x%x x%x x%x x%x x%x\n",
    VAR_18->iocb.ulpIoTag, VAR_19->iocb.ulpStatus,
    VAR_19->iocb.un.ulpWord[4], VAR_19->iocb.ulpTimeout,
    VAR_20->nlp_DID, VAR_20->nlp_flag, VAR_20->nlp_state,
    VAR_20->nlp_rpi);
 if (VAR_25) {
  if ((VAR_19->iocb.ulpStatus == 0)
      && (VAR_20->nlp_flag & VAR_10)) {
   if (!FUNC_14(VAR_21, VAR_20) &&
       (!(VAR_21->fc_flag & VAR_1)) &&
       (VAR_20->nlp_state == VAR_13 ||
        VAR_20->nlp_state == VAR_14)) {
    FUNC_11(VAR_21, VAR_3,
     VAR_4,
     "0314 PLOGI recov DID x%x "
     "Data: x%x x%x x%x\n",
     VAR_20->nlp_DID, VAR_20->nlp_state,
     VAR_20->nlp_rpi, VAR_20->nlp_flag);
    VAR_26 = VAR_25->ctx_buf;
    if (VAR_26) {
     FUNC_6(VAR_17, VAR_26->virt,
             VAR_26->phys);
     FUNC_1(VAR_26);
    }
    FUNC_15(VAR_25, VAR_17->mbox_mem_pool);
    goto out;
   }




   VAR_25->ctx_ndlp = FUNC_7(VAR_20);
   VAR_25->vport = VAR_21;
   if (VAR_20->nlp_flag & VAR_12) {
    VAR_25->mbox_flag |= VAR_7;
    VAR_25->mbox_cmpl = VAR_15;
   }
   else {
    VAR_25->mbox_cmpl = VAR_16;
    VAR_20->nlp_prev_state = VAR_20->nlp_state;
    FUNC_10(VAR_21, VAR_20,
        VAR_14);
   }

   VAR_20->nlp_flag |= VAR_11;
   if (FUNC_13(VAR_17, VAR_25, VAR_9)
       != VAR_8)
    goto out;




   FUNC_9(VAR_20);
   VAR_20->nlp_flag &= ~VAR_11;


   FUNC_11(VAR_21, VAR_2, VAR_5,
    "0138 ELS rsp: Cannot issue reg_login for x%x "
    "Data: x%x x%x x%x\n",
    VAR_20->nlp_DID, VAR_20->nlp_flag, VAR_20->nlp_state,
    VAR_20->nlp_rpi);

   if (FUNC_8(VAR_20)) {
    VAR_20 = ((void*)0);




    VAR_18->context1 = ((void*)0);
   }
  } else {

   if (!FUNC_5(VAR_23) &&
       VAR_20->nlp_flag & VAR_10) {
    if (FUNC_8(VAR_20)) {
     VAR_20 = ((void*)0);





     VAR_18->context1 = ((void*)0);
    }
   }
  }
  VAR_26 = (struct lpfc_dmabuf *)VAR_25->ctx_buf;
  if (VAR_26) {
   FUNC_6(VAR_17, VAR_26->virt, VAR_26->phys);
   FUNC_1(VAR_26);
  }
  FUNC_15(VAR_25, VAR_17->mbox_mem_pool);
 }
out:
 if (VAR_20 && FUNC_0(VAR_20)) {
  FUNC_16(VAR_22->host_lock);
  VAR_20->nlp_flag &= ~(VAR_10 | VAR_12);
  FUNC_17(VAR_22->host_lock);






  if (VAR_27)
   if (FUNC_8(VAR_20))




    VAR_18->context1 = ((void*)0);

 }

 FUNC_4(VAR_17, VAR_18);
 return;
}
