
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fcf_flag; } ;
struct lpfc_hba {int hba_flag; int mbox_mem_pool; int hbalock; TYPE_7__* pport; TYPE_1__ fcf; } ;
struct TYPE_10__ {scalar_t__ port_state; int fc_flag; } ;
struct TYPE_9__ {int mbox_cmpl; TYPE_7__* vport; } ;
typedef TYPE_2__ LPFC_MBOXQ_t ;


 int VAR_0 ;
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
 int FUNC_0 (TYPE_7__*) ;
 int VAR_11 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_2__*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_12)
{
 LPFC_MBOXQ_t *VAR_13;
 int VAR_14;

 FUNC_5(&VAR_12->hbalock);

 if (!(VAR_12->fcf.fcf_flag & VAR_0)) {
  VAR_12->hba_flag &= ~(VAR_5 | VAR_3);
  FUNC_6(&VAR_12->hbalock);
  return;
 }


 if (VAR_12->fcf.fcf_flag & VAR_2) {
  VAR_12->fcf.fcf_flag |= (VAR_4 | VAR_1);
  VAR_12->hba_flag &= ~VAR_5;
  if (VAR_12->pport->port_state != VAR_8 &&
      VAR_12->pport->fc_flag & VAR_6) {
   VAR_12->hba_flag |= VAR_3;
   FUNC_6(&VAR_12->hbalock);
   FUNC_0(VAR_12->pport);
   return;
  }
  FUNC_6(&VAR_12->hbalock);
  return;
 }
 FUNC_6(&VAR_12->hbalock);

 VAR_13 = FUNC_3(VAR_12->mbox_mem_pool, VAR_7);
 if (!VAR_13) {
  FUNC_5(&VAR_12->hbalock);
  VAR_12->hba_flag &= ~(VAR_5 | VAR_3);
  FUNC_6(&VAR_12->hbalock);
  return;
 }

 FUNC_1(VAR_12, VAR_13);
 VAR_13->vport = VAR_12->pport;
 VAR_13->mbox_cmpl = VAR_11;
 VAR_14 = FUNC_2(VAR_12, VAR_13, VAR_10);
 if (VAR_14 == VAR_9) {
  FUNC_5(&VAR_12->hbalock);
  VAR_12->hba_flag &= ~(VAR_5 | VAR_3);
  FUNC_6(&VAR_12->hbalock);
  FUNC_4(VAR_13, VAR_12->mbox_mem_pool);
 }

 return;
}
