
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; struct lpfc_hba* phba; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_1__* pport; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_8__ {int mbox_cmpl; struct lpfc_vport* vport; } ;
struct TYPE_7__ {int port_state; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,int,...) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,struct lpfc_vport*) ;
 int VAR_9 ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct lpfc_vport *VAR_10)
{
 struct lpfc_hba *VAR_11 = VAR_10->phba;
 struct Scsi_Host *VAR_12;
 LPFC_MBOXQ_t *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(VAR_11->mbox_mem_pool, VAR_3);
 if (!VAR_13) {
  FUNC_0(VAR_11, VAR_4, VAR_5|VAR_6,
    "2556 UNREG_VFI mbox allocation failed"
    "HBA state x%x\n", VAR_11->pport->port_state);
  return -VAR_1;
 }

 FUNC_3(VAR_13, VAR_10);
 VAR_13->vport = VAR_10;
 VAR_13->mbox_cmpl = VAR_9;

 VAR_14 = FUNC_2(VAR_11, VAR_13, VAR_8);
 if (VAR_14 == VAR_7) {
  FUNC_0(VAR_11, VAR_4, VAR_5|VAR_6,
    "2557 UNREG_VFI issue mbox failed rc x%x "
    "HBA state x%x\n",
    VAR_14, VAR_11->pport->port_state);
  FUNC_5(VAR_13, VAR_11->mbox_mem_pool);
  return -VAR_0;
 }

 VAR_12 = FUNC_1(VAR_10);
 FUNC_6(VAR_12->host_lock);
 VAR_10->fc_flag &= ~VAR_2;
 FUNC_7(VAR_12->host_lock);
 return 0;
}
