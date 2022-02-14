
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; int port_state; scalar_t__ num_disc_nodes; scalar_t__ fc_npr_cnt; int vpi_state; int cfg_enable_fc4_type; int fc_myDID; } ;
struct lpfc_hba {int mbox_mem_pool; int nvmet_support; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_7__ {int mbxStatus; } ;
struct TYPE_6__ {TYPE_2__ mb; } ;
struct TYPE_8__ {TYPE_1__ u; struct lpfc_vport* vport; } ;
typedef TYPE_2__ MAILBOX_t ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


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
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,int) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct lpfc_hba *VAR_11, LPFC_MBOXQ_t *VAR_12)
{
 struct lpfc_vport *VAR_13 = VAR_12->vport;
 struct Scsi_Host *VAR_14 = FUNC_5(VAR_13);
 MAILBOX_t *VAR_15 = &VAR_12->u.mb;

 switch (VAR_15->mbxStatus) {
 case 0x0011:
 case 0x9601:
 case 0x9602:
  FUNC_4(VAR_13, VAR_5, VAR_6,
     "0912 cmpl_reg_vpi, mb status = 0x%x\n",
     VAR_15->mbxStatus);
  FUNC_6(VAR_13, VAR_3);
  FUNC_8(VAR_14->host_lock);
  VAR_13->fc_flag &= ~(VAR_0 | VAR_2);
  FUNC_9(VAR_14->host_lock);
  VAR_13->fc_myDID = 0;

  if ((VAR_13->cfg_enable_fc4_type == VAR_7) ||
      (VAR_13->cfg_enable_fc4_type == VAR_8)) {
   if (VAR_11->nvmet_support)
    FUNC_3(VAR_11);
   else
    FUNC_2(VAR_13);
  }
  goto out;
 }

 FUNC_8(VAR_14->host_lock);
 VAR_13->vpi_state |= VAR_9;
 VAR_13->fc_flag &= ~VAR_4;
 FUNC_9(VAR_14->host_lock);
 VAR_13->num_disc_nodes = 0;

 if (VAR_13->fc_npr_cnt)
  FUNC_1(VAR_13);

 if (!VAR_13->num_disc_nodes) {
  FUNC_8(VAR_14->host_lock);
  VAR_13->fc_flag &= ~VAR_1;
  FUNC_9(VAR_14->host_lock);
  FUNC_0(VAR_13);
 }
 VAR_13->port_state = VAR_10;

out:
 FUNC_7(VAR_12, VAR_11->mbox_mem_pool);
 return;
}
