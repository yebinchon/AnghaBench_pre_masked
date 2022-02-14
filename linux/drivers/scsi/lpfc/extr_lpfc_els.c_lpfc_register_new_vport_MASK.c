
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_6__ {int mbox_cmpl; int ctx_ndlp; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_3 (struct lpfc_vport*,TYPE_1__*) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int FUNC_6 (struct lpfc_vport*,int ) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(struct lpfc_hba *VAR_8, struct lpfc_vport *VAR_9,
   struct lpfc_nodelist *VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_4(VAR_9);
 LPFC_MBOXQ_t *VAR_12;

 VAR_12 = FUNC_7(VAR_8->mbox_mem_pool, VAR_2);
 if (VAR_12) {
  FUNC_3(VAR_9, VAR_12);
  VAR_12->vport = VAR_9;
  VAR_12->ctx_ndlp = FUNC_0(VAR_10);
  VAR_12->mbox_cmpl = VAR_7;
  if (FUNC_5(VAR_8, VAR_12, VAR_6)
      == VAR_5) {



   FUNC_1(VAR_10);
   FUNC_8(VAR_12, VAR_8->mbox_mem_pool);

   FUNC_2(VAR_9, VAR_3, VAR_4,
    "0253 Register VPI: Can't send mbox\n");
   goto mbox_err_exit;
  }
 } else {
  FUNC_2(VAR_9, VAR_3, VAR_4,
     "0254 Register VPI: no memory\n");
  goto mbox_err_exit;
 }
 return;

mbox_err_exit:
 FUNC_6(VAR_9, VAR_0);
 FUNC_9(VAR_11->host_lock);
 VAR_9->fc_flag &= ~VAR_1;
 FUNC_10(VAR_11->host_lock);
 return;
}
