
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_nvmet_rcv_ctx {int flag; int list; int oxid; int ctxlock; } ;
struct TYPE_2__ {int abts_nvmet_buf_list_lock; int lpfc_abts_nvmet_ctx_list; int t_active_list_lock; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_hba *VAR_3, struct lpfc_nvmet_rcv_ctx *VAR_4)
{
 FUNC_2(&VAR_4->ctxlock);

 FUNC_3(VAR_3, VAR_0, VAR_1,
   "6313 NVMET Defer ctx release oxid x%x flg x%x\n",
   VAR_4->oxid, VAR_4->flag);

 if (VAR_4->flag & VAR_2)
  return;

 VAR_4->flag |= VAR_2;
 FUNC_4(&VAR_3->sli4_hba.t_active_list_lock);
 FUNC_1(&VAR_4->list);
 FUNC_5(&VAR_3->sli4_hba.t_active_list_lock);
 FUNC_4(&VAR_3->sli4_hba.abts_nvmet_buf_list_lock);
 FUNC_0(&VAR_4->list, &VAR_3->sli4_hba.lpfc_abts_nvmet_ctx_list);
 FUNC_5(&VAR_3->sli4_hba.abts_nvmet_buf_list_lock);
}
