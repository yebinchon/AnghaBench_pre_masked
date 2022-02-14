
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; scalar_t__ port_state; int vpi_state; int port_type; int vpi; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; struct lpfc_vport* pport; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_11__ {scalar_t__ upd; } ;
struct TYPE_12__ {TYPE_2__ varRegVpi; } ;
struct TYPE_13__ {int mbxStatus; TYPE_3__ un; } ;
struct TYPE_10__ {TYPE_4__ mb; } ;
struct TYPE_14__ {int mbox_cmpl; struct lpfc_vport* vport; TYPE_1__ u; scalar_t__ ctx_ndlp; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_5__*,int ) ;
 int VAR_13 ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*) ;
 int FUNC_8 (struct lpfc_nodelist*) ;
 int FUNC_9 (struct lpfc_vport*,int ,int ,char*,...) ;
 struct Scsi_Host* FUNC_10 (struct lpfc_vport*) ;
 int FUNC_11 (struct lpfc_vport*) ;
 int FUNC_12 (struct lpfc_hba*,TYPE_5__*,int ) ;
 int FUNC_13 (struct lpfc_hba*) ;
 int FUNC_14 (struct lpfc_vport*,int ) ;
 int FUNC_15 (TYPE_5__*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(struct lpfc_hba *VAR_14, LPFC_MBOXQ_t *VAR_15)
{
 struct lpfc_vport *VAR_16 = VAR_15->vport;
 struct Scsi_Host *VAR_17 = FUNC_10(VAR_16);
 struct lpfc_nodelist *VAR_18 = (struct lpfc_nodelist *)VAR_15->ctx_ndlp;
 MAILBOX_t *VAR_19 = &VAR_15->u.mb;
 int VAR_20;

 FUNC_16(VAR_17->host_lock);
 VAR_16->fc_flag &= ~VAR_4;
 FUNC_17(VAR_17->host_lock);

 if (VAR_19->mbxStatus) {
  FUNC_9(VAR_16, VAR_5, VAR_6,
    "0915 Register VPI failed : Status: x%x"
    " upd bit: x%x \n", VAR_19->mbxStatus,
     VAR_19->un.varRegVpi.upd);
  if (VAR_14->sli_rev == VAR_9 &&
   VAR_19->un.varRegVpi.upd)
   goto mbox_err_exit ;

  switch (VAR_19->mbxStatus) {
  case 0x11:
  case 0x9603:
  case 0x9602:

   FUNC_14(VAR_16, VAR_3);
   FUNC_16(VAR_17->host_lock);
   VAR_16->fc_flag &= ~(VAR_0 | VAR_2);
   FUNC_17(VAR_17->host_lock);
   FUNC_0(VAR_16);
   break;

  case 0x20:
   FUNC_16(VAR_17->host_lock);
   VAR_16->fc_flag |= VAR_4;
   FUNC_17(VAR_17->host_lock);
   FUNC_2(VAR_14, VAR_15, VAR_16->vpi);
   VAR_15->vport = VAR_16;
   VAR_15->mbox_cmpl = VAR_13;
   VAR_20 = FUNC_12(VAR_14, VAR_15,
    VAR_12);
   if (VAR_20 == VAR_11) {
    FUNC_9(VAR_16,
     VAR_5, VAR_6,
     "2732 Failed to issue INIT_VPI"
     " mailbox command\n");
   } else {
    FUNC_8(VAR_18);
    return;
   }

  default:

   if (VAR_14->sli_rev == VAR_9)
    FUNC_11(VAR_16);
   FUNC_7(VAR_16);
   FUNC_16(VAR_17->host_lock);
   VAR_16->fc_flag |= VAR_4;
   FUNC_17(VAR_17->host_lock);
   if (VAR_19->mbxStatus == VAR_11)
    break;
   if ((VAR_16->port_type == VAR_8) &&
       !(VAR_16->fc_flag & VAR_1)) {
    if (VAR_14->sli_rev == VAR_9)
     FUNC_6(VAR_16);
    else
     FUNC_4(VAR_16);
   } else {
    FUNC_3(VAR_16);
   }
   break;
  }
 } else {
  FUNC_16(VAR_17->host_lock);
  VAR_16->vpi_state |= VAR_10;
  FUNC_17(VAR_17->host_lock);
  if (VAR_16 == VAR_14->pport) {
   if (VAR_14->sli_rev < VAR_9)
    FUNC_5(VAR_16);
   else {




    if (VAR_16->port_state != VAR_7)
     FUNC_13(VAR_14);
    FUNC_1(VAR_14, VAR_16);
   }
  } else
   FUNC_1(VAR_14, VAR_16);
 }
mbox_err_exit:



 FUNC_8(VAR_18);

 FUNC_15(VAR_15, VAR_14->mbox_mem_pool);
 return;
}
