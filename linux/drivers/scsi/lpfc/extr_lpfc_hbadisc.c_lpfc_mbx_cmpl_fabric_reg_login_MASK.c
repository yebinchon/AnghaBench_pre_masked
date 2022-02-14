
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_state; int fc_flag; } ;
struct lpfc_nodelist {int nlp_type; int nlp_flag; int nlp_rpi; } ;
struct lpfc_hba {scalar_t__ fc_topology; scalar_t__ sli_rev; int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_8__ {int * varWords; } ;
struct TYPE_9__ {TYPE_2__ un; scalar_t__ mbxStatus; } ;
struct TYPE_7__ {TYPE_3__ mb; } ;
struct TYPE_10__ {int * ctx_buf; int * ctx_ndlp; TYPE_1__ u; struct lpfc_vport* vport; } ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_7 (struct lpfc_vport*,int ,int ,char*,scalar_t__) ;
 struct Scsi_Host* FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_vport*,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

void
FUNC_14(struct lpfc_hba *VAR_10, LPFC_MBOXQ_t *VAR_11)
{
 struct lpfc_vport *VAR_12 = VAR_11->vport;
 MAILBOX_t *VAR_13 = &VAR_11->u.mb;
 struct lpfc_dmabuf *VAR_14 = (struct lpfc_dmabuf *)(VAR_11->ctx_buf);
 struct lpfc_nodelist *VAR_15;
 struct Scsi_Host *VAR_16;

 VAR_15 = (struct lpfc_nodelist *)VAR_11->ctx_ndlp;
 VAR_11->ctx_ndlp = ((void*)0);
 VAR_11->ctx_buf = ((void*)0);

 if (VAR_13->mbxStatus) {
  FUNC_7(VAR_12, VAR_2, VAR_3,
     "0258 Register Fabric login error: 0x%x\n",
     VAR_13->mbxStatus);
  FUNC_4(VAR_10, VAR_14->virt, VAR_14->phys);
  FUNC_0(VAR_14);
  FUNC_11(VAR_11, VAR_10->mbox_mem_pool);

  if (VAR_10->fc_topology == VAR_6) {

   FUNC_1(VAR_12);


   FUNC_2(VAR_12);



   FUNC_5(VAR_15);
   return;
  }

  FUNC_10(VAR_12, VAR_1);



  FUNC_5(VAR_15);
  return;
 }

 if (VAR_10->sli_rev < VAR_5)
  VAR_15->nlp_rpi = VAR_13->un.varWords[0];
 VAR_15->nlp_flag |= VAR_8;
 VAR_15->nlp_type |= VAR_7;
 FUNC_6(VAR_12, VAR_15, VAR_9);

 if (VAR_12->port_state == VAR_4) {


  if (!(VAR_12->fc_flag & VAR_0))
   FUNC_9(VAR_10);
  else {
   VAR_16 = FUNC_8(VAR_12);
   FUNC_12(VAR_16->host_lock);
   VAR_12->fc_flag &= ~VAR_0 ;
   FUNC_13(VAR_16->host_lock);
  }
  FUNC_3(VAR_10, VAR_12);
 }

 FUNC_4(VAR_10, VAR_14->virt, VAR_14->phys);
 FUNC_0(VAR_14);
 FUNC_11(VAR_11, VAR_10->mbox_mem_pool);




 FUNC_5(VAR_15);
 return;
}
