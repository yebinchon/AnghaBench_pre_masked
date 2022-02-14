
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct lpfc_vport {int fc_flag; int vpi_state; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nlp_defer_did; int nlp_DID; int nlp_rpi; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_3__* pport; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_12__ {int vpi; } ;
struct TYPE_13__ {TYPE_1__ varRegLogin; int * varWords; } ;
struct TYPE_15__ {scalar_t__ mbxCommand; scalar_t__ mbxStatus; TYPE_2__ un; } ;
struct TYPE_16__ {int mqe; TYPE_4__ mb; } ;
struct TYPE_17__ {void (* mbox_cmpl ) (struct lpfc_hba*,TYPE_6__*) ;TYPE_5__ u; int * ctx_ndlp; int * ctx_buf; struct lpfc_vport* vport; } ;
struct TYPE_14__ {int load_flag; } ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct lpfc_dmabuf*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ) ;
 int VAR_18 ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_hba*,int ,int,char*) ;
 int FUNC_7 (struct lpfc_vport*,int ,int,char*,int ,int ,int,scalar_t__,struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (struct lpfc_hba*,TYPE_6__*) ;
 int FUNC_10 (struct lpfc_hba*,TYPE_6__*,int ) ;
 int FUNC_11 (struct lpfc_hba*,int ,int ,TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

void
FUNC_15(struct lpfc_hba *VAR_19, LPFC_MBOXQ_t *VAR_20)
{
 struct lpfc_vport *VAR_21 = VAR_20->vport;
 struct lpfc_dmabuf *VAR_22;
 struct lpfc_nodelist *VAR_23;
 struct Scsi_Host *VAR_24;
 uint16_t VAR_25, VAR_26;
 int VAR_27;

 VAR_22 = (struct lpfc_dmabuf *)(VAR_20->ctx_buf);

 if (VAR_22) {
  FUNC_4(VAR_19, VAR_22->virt, VAR_22->phys);
  FUNC_2(VAR_22);
 }





 if (!(VAR_19->pport->load_flag & VAR_0) &&
     VAR_20->u.mb.mbxCommand == VAR_12 &&
     !VAR_20->u.mb.mbxStatus) {
  VAR_25 = VAR_20->u.mb.un.varWords[0];
  VAR_26 = VAR_20->u.mb.un.varRegLogin.vpi;
  FUNC_11(VAR_19, VAR_26, VAR_25, VAR_20);
  VAR_20->vport = VAR_21;
  VAR_20->mbox_cmpl = FUNC_15;
  VAR_27 = FUNC_10(VAR_19, VAR_20, VAR_11);
  if (VAR_27 != VAR_10)
   return;
 }

 if ((VAR_20->u.mb.mbxCommand == VAR_13) &&
  !(VAR_19->pport->load_flag & VAR_0) &&
  !VAR_20->u.mb.mbxStatus) {
  VAR_24 = FUNC_8(VAR_21);
  FUNC_13(VAR_24->host_lock);
  VAR_21->vpi_state |= VAR_7;
  VAR_21->fc_flag &= ~VAR_1;
  FUNC_14(VAR_24->host_lock);
 }

 if (VAR_20->u.mb.mbxCommand == VAR_12) {
  VAR_23 = (struct lpfc_nodelist *)VAR_20->ctx_ndlp;
  FUNC_5(VAR_23);
  VAR_20->ctx_buf = ((void*)0);
  VAR_20->ctx_ndlp = ((void*)0);
 }

 if (VAR_20->u.mb.mbxCommand == VAR_15) {
  VAR_23 = (struct lpfc_nodelist *)VAR_20->ctx_ndlp;


  if (VAR_23) {
   FUNC_7(
    VAR_21,
    VAR_3, VAR_5 | VAR_4,
    "1438 UNREG cmpl deferred mbox x%x "
    "on NPort x%x Data: x%x x%x %px\n",
    VAR_23->nlp_rpi, VAR_23->nlp_DID,
    VAR_23->nlp_flag, VAR_23->nlp_defer_did, VAR_23);

   if ((VAR_23->nlp_flag & VAR_17) &&
       (VAR_23->nlp_defer_did != VAR_16)) {
    VAR_23->nlp_flag &= ~VAR_17;
    VAR_23->nlp_defer_did = VAR_16;
    FUNC_3(VAR_21, VAR_23->nlp_DID, 0);
   } else {
    FUNC_0(VAR_21, VAR_23);
   }
   VAR_20->ctx_ndlp = ((void*)0);
  }
 }


 if ((VAR_20->u.mb.mbxCommand == VAR_9) &&
     (VAR_20->u.mb.mbxStatus == VAR_8))
  FUNC_6(VAR_19, VAR_2, VAR_5 | VAR_6,
    "2860 SLI authentication is required "
    "for INIT_LINK but has not done yet\n");

 if (FUNC_1(VAR_18, &VAR_20->u.mqe) == VAR_14)
  FUNC_9(VAR_19, VAR_20);
 else
  FUNC_12(VAR_20, VAR_19->mbox_mem_pool);
}
