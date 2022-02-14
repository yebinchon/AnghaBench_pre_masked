
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct lpfc_sli_ring {int txcmplq; } ;
struct TYPE_6__ {TYPE_2__* hdwq; } ;
struct lpfc_hba {scalar_t__ sli_rev; size_t cfg_hdw_queue; TYPE_3__ sli4_hba; } ;
struct TYPE_5__ {TYPE_1__* io_wq; } ;
struct TYPE_4__ {struct lpfc_sli_ring* pring; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,size_t) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct lpfc_hba *VAR_4)
{
 struct lpfc_sli_ring *VAR_5;
 u32 VAR_6, VAR_7 = 0;

 if (VAR_4->sli_rev < VAR_2 || !VAR_4->sli4_hba.hdwq)
  return;




 for (VAR_6 = 0; VAR_6 < VAR_4->cfg_hdw_queue; VAR_6++) {
  if (!VAR_4->sli4_hba.hdwq[VAR_6].io_wq)
   continue;
  VAR_5 = VAR_4->sli4_hba.hdwq[VAR_6].io_wq->pring;

  if (!VAR_5)
   continue;


  while (!FUNC_0(&VAR_5->txcmplq)) {
   FUNC_2(VAR_3);
   VAR_7++;




   if ((VAR_7 % 1000) == 0) {
    FUNC_1(VAR_4, VAR_0, VAR_1,
      "6178 NVME IO not empty, "
      "cnt %d\n", VAR_7);
   }
  }
 }
}
