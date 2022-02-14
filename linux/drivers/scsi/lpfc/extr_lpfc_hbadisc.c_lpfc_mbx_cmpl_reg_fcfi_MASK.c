
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_state; } ;
struct TYPE_13__ {int fcf_flag; int fcfi; } ;
struct lpfc_hba {int hba_flag; int mbox_mem_pool; int hbalock; TYPE_5__ fcf; } ;
struct TYPE_10__ {int reg_fcfi; } ;
struct TYPE_11__ {TYPE_2__ un; } ;
struct TYPE_9__ {scalar_t__ mbxStatus; } ;
struct TYPE_12__ {TYPE_3__ mqe; TYPE_1__ mb; } ;
struct TYPE_14__ {TYPE_4__ u; struct lpfc_vport* vport; } ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_10, LPFC_MBOXQ_t *VAR_11)
{
 struct lpfc_vport *VAR_12 = VAR_11->vport;

 if (VAR_11->u.mb.mbxStatus) {
  FUNC_3(VAR_12, VAR_5, VAR_6,
    "2017 REG_FCFI mbxStatus error x%x "
    "HBA state x%x\n",
    VAR_11->u.mb.mbxStatus, VAR_12->port_state);
  goto fail_out;
 }


 VAR_10->fcf.fcfi = FUNC_0(VAR_9, &VAR_11->u.mqe.un.reg_fcfi);

 FUNC_5(&VAR_10->hbalock);
 VAR_10->fcf.fcf_flag |= VAR_1;
 FUNC_6(&VAR_10->hbalock);


 if ((!(VAR_10->hba_flag & VAR_2)) &&
  FUNC_1(VAR_10, VAR_8))
  goto fail_out;


 FUNC_5(&VAR_10->hbalock);
 VAR_10->fcf.fcf_flag |= (VAR_3 | VAR_0);
 VAR_10->hba_flag &= ~VAR_4;
 if (VAR_12->port_state != VAR_7) {
  VAR_10->hba_flag |= VAR_2;
  FUNC_6(&VAR_10->hbalock);
  FUNC_2(VAR_12);
  goto out;
 }
 FUNC_6(&VAR_10->hbalock);
 goto out;

fail_out:
 FUNC_5(&VAR_10->hbalock);
 VAR_10->hba_flag &= ~VAR_2;
 FUNC_6(&VAR_10->hbalock);
out:
 FUNC_4(VAR_11, VAR_10->mbox_mem_pool);
}
