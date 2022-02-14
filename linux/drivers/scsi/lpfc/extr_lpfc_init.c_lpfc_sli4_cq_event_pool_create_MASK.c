
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq_ecount; int sp_cqe_event_pool; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
struct lpfc_cq_event {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lpfc_cq_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_3(struct lpfc_hba *VAR_2)
{
 struct lpfc_cq_event *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < (4 * VAR_2->sli4_hba.cq_ecount); VAR_4++) {
  VAR_3 = FUNC_0(sizeof(struct lpfc_cq_event), VAR_1);
  if (!VAR_3)
   goto out_pool_create_fail;
  FUNC_1(&VAR_3->list,
         &VAR_2->sli4_hba.sp_cqe_event_pool);
 }
 return 0;

out_pool_create_fail:
 FUNC_2(VAR_2);
 return -VAR_0;
}
