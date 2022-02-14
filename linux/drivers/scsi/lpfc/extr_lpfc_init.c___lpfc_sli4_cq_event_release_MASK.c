
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sp_cqe_event_pool; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
struct lpfc_cq_event {int list; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(struct lpfc_hba *VAR_0,
        struct lpfc_cq_event *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->sli4_hba.sp_cqe_event_pool);
}
