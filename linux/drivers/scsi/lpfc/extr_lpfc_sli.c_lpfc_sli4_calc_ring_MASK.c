
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_sli_ring {int dummy; } ;
struct lpfc_iocbq {int iocb_flag; size_t hba_wqidx; scalar_t__ context1; } ;
struct lpfc_io_buf {size_t hdwq_no; } ;
struct TYPE_8__ {TYPE_3__* els_wq; TYPE_2__* hdwq; } ;
struct lpfc_hba {TYPE_4__ sli4_hba; } ;
struct TYPE_7__ {struct lpfc_sli_ring* pring; } ;
struct TYPE_6__ {TYPE_1__* io_wq; } ;
struct TYPE_5__ {struct lpfc_sli_ring* pring; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

struct lpfc_sli_ring *
FUNC_1(struct lpfc_hba *VAR_2, struct lpfc_iocbq *VAR_3)
{
 struct lpfc_io_buf *VAR_4;

 if (VAR_3->iocb_flag & (VAR_0 | VAR_1)) {
  if (FUNC_0(!VAR_2->sli4_hba.hdwq))
   return ((void*)0);




  if (!(VAR_3->iocb_flag & VAR_1)) {
   VAR_4 = (struct lpfc_io_buf *)VAR_3->context1;
   VAR_3->hba_wqidx = VAR_4->hdwq_no;
  }
  return VAR_2->sli4_hba.hdwq[VAR_3->hba_wqidx].io_wq->pring;
 } else {
  if (FUNC_0(!VAR_2->sli4_hba.els_wq))
   return ((void*)0);
  VAR_3->hba_wqidx = 0;
  return VAR_2->sli4_hba.els_wq->pring;
 }
}
