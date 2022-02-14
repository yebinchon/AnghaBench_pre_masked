
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_sli_ring {int dummy; } ;
struct lpfc_sli {struct lpfc_sli_ring* sli3_ring; } ;
struct TYPE_4__ {TYPE_3__* hdwq; } ;
struct lpfc_hba {scalar_t__ sli_rev; size_t cfg_hdw_queue; TYPE_1__ sli4_hba; struct lpfc_sli sli; } ;
struct TYPE_6__ {TYPE_2__* io_wq; } ;
struct TYPE_5__ {struct lpfc_sli_ring* pring; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_sli_ring*) ;

void
FUNC_1(struct lpfc_hba *VAR_2)
{
 struct lpfc_sli *VAR_3 = &VAR_2->sli;
 struct lpfc_sli_ring *VAR_4;
 uint32_t VAR_5;


 if (VAR_2->sli_rev >= VAR_1) {
  for (VAR_5 = 0; VAR_5 < VAR_2->cfg_hdw_queue; VAR_5++) {
   VAR_4 = VAR_2->sli4_hba.hdwq[VAR_5].io_wq->pring;
   FUNC_0(VAR_2, VAR_4);
  }
 } else {
  VAR_4 = &VAR_3->sli3_ring[VAR_0];
  FUNC_0(VAR_2, VAR_4);
 }
}
