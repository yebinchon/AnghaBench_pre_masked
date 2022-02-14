
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_sli_ring {int dummy; } ;
struct TYPE_4__ {struct lpfc_sli_ring* sli3_ring; } ;
struct TYPE_6__ {TYPE_2__* els_wq; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_1__ sli; TYPE_3__ sli4_hba; } ;
struct TYPE_5__ {struct lpfc_sli_ring* pring; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline struct lpfc_sli_ring *
FUNC_0(struct lpfc_hba *VAR_4)
{

 if (VAR_4->sli_rev != VAR_3 &&
     VAR_4->sli_rev != VAR_2 &&
     VAR_4->sli_rev != VAR_1)
  return ((void*)0);

 if (VAR_4->sli_rev == VAR_3) {
  if (VAR_4->sli4_hba.els_wq)
   return VAR_4->sli4_hba.els_wq->pring;
  else
   return ((void*)0);
 }
 return &VAR_4->sli.sli3_ring[VAR_0];
}
