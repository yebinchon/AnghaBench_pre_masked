
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {scalar_t__ port_type; int fc_flag; int port_state; } ;
struct lpfc_sli {int sli_flag; TYPE_2__* sli3_ring; } ;
struct lpfc_hba {int hbalock; int HCregaddr; int mbox_mem_pool; int link_state; struct lpfc_sli sli; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_9__ {int mbxStatus; } ;
struct TYPE_7__ {TYPE_3__ mb; } ;
struct TYPE_10__ {TYPE_1__ u; struct lpfc_vport* vport; } ;
struct TYPE_8__ {int flag; } ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,...) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_13, LPFC_MBOXQ_t *VAR_14)
{
 struct lpfc_vport *VAR_15 = VAR_14->vport;
 struct Scsi_Host *VAR_16 = FUNC_2(VAR_15);
 struct lpfc_sli *VAR_17 = &VAR_13->sli;
 MAILBOX_t *VAR_18 = &VAR_14->u.mb;
 uint32_t VAR_19;


 VAR_17->sli3_ring[VAR_6].flag &= ~VAR_12;
 VAR_17->sli3_ring[VAR_7].flag &= ~VAR_12;


 if ((VAR_18->mbxStatus) && (VAR_18->mbxStatus != 0x1601)) {

  FUNC_1(VAR_15, VAR_2, VAR_5,
     "0320 CLEAR_LA mbxStatus error x%x hba "
     "state x%x\n",
     VAR_18->mbxStatus, VAR_15->port_state);
  VAR_13->link_state = VAR_8;
  goto out;
 }

 if (VAR_15->port_type == VAR_10)
  VAR_13->link_state = VAR_9;

 FUNC_5(&VAR_13->hbalock);
 VAR_17->sli_flag |= VAR_11;
 VAR_19 = FUNC_4(VAR_13->HCregaddr);
 VAR_19 |= VAR_1;
 FUNC_7(VAR_19, VAR_13->HCregaddr);
 FUNC_4(VAR_13->HCregaddr);
 FUNC_6(&VAR_13->hbalock);
 FUNC_3(VAR_14, VAR_13->mbox_mem_pool);
 return;

out:

 FUNC_1(VAR_15, VAR_3, VAR_4,
    "0225 Device Discovery completes\n");
 FUNC_3(VAR_14, VAR_13->mbox_mem_pool);

 FUNC_5(VAR_16->host_lock);
 VAR_15->fc_flag &= ~VAR_0;
 FUNC_6(VAR_16->host_lock);

 FUNC_0(VAR_15);



 FUNC_5(&VAR_13->hbalock);
 VAR_17->sli_flag |= VAR_11;
 VAR_19 = FUNC_4(VAR_13->HCregaddr);
 VAR_19 |= VAR_1;
 FUNC_7(VAR_19, VAR_13->HCregaddr);
 FUNC_4(VAR_13->HCregaddr);
 FUNC_6(&VAR_13->hbalock);

 return;
}
