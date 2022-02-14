
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union lpfc_wqe128 {int dummy; } lpfc_wqe128 ;
typedef int uint32_t ;
struct lpfc_sli_ring {int txq; int ring_lock; } ;
struct lpfc_sglq {scalar_t__ sli4_xritag; int sli4_lxritag; } ;
struct lpfc_queue {struct lpfc_sli_ring* pring; } ;
struct TYPE_6__ {scalar_t__ ulpCommand; } ;
struct lpfc_iocbq {int iocb_flag; size_t hba_wqidx; scalar_t__ sli4_xritag; int sli4_lxritag; TYPE_3__ iocb; } ;
struct TYPE_5__ {struct lpfc_queue* els_wq; TYPE_1__* hdwq; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; } ;
struct TYPE_4__ {struct lpfc_queue* io_wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct lpfc_sglq* FUNC_0 (struct lpfc_hba*,int ) ;
 struct lpfc_sglq* FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_sglq*) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,struct lpfc_iocbq*,union lpfc_wqe128*) ;
 scalar_t__ FUNC_7 (struct lpfc_queue*,union lpfc_wqe128*) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_9, uint32_t VAR_10,
    struct lpfc_iocbq *VAR_11, uint32_t VAR_12)
{
 struct lpfc_sglq *VAR_13;
 union lpfc_wqe128 VAR_14;
 struct lpfc_queue *VAR_15;
 struct lpfc_sli_ring *VAR_16;


 if ((VAR_11->iocb_flag & VAR_5) ||
     (VAR_11->iocb_flag & VAR_6)) {
  VAR_15 = VAR_9->sli4_hba.hdwq[VAR_11->hba_wqidx].io_wq;
 } else {
  VAR_15 = VAR_9->sli4_hba.els_wq;
 }


 VAR_16 = VAR_15->pring;





 FUNC_4(&VAR_16->ring_lock);

 if (VAR_11->sli4_xritag == VAR_7) {
  if (VAR_11->iocb.ulpCommand == VAR_0 ||
      VAR_11->iocb.ulpCommand == VAR_1)
   VAR_13 = ((void*)0);
  else {
   if (!FUNC_3(&VAR_16->txq)) {
    if (!(VAR_12 & VAR_8)) {
     FUNC_2(VAR_9,
      VAR_16, VAR_11);
     return VAR_4;
    } else {
     return VAR_2;
    }
   } else {
    VAR_13 = FUNC_1(VAR_9, VAR_11);
    if (!VAR_13) {
     if (!(VAR_12 & VAR_8)) {
      FUNC_2(VAR_9,
        VAR_16,
        VAR_11);
      return VAR_4;
     } else
      return VAR_2;
    }
   }
  }
 } else if (VAR_11->iocb_flag & VAR_5)

  VAR_13 = ((void*)0);
 else {




  VAR_13 = FUNC_0(VAR_9, VAR_11->sli4_lxritag);
  if (!VAR_13)
   return VAR_3;
 }

 if (VAR_13) {
  VAR_11->sli4_lxritag = VAR_13->sli4_lxritag;
  VAR_11->sli4_xritag = VAR_13->sli4_xritag;
  if (VAR_7 == FUNC_5(VAR_9, VAR_11, VAR_13))
   return VAR_3;
 }

 if (FUNC_6(VAR_9, VAR_11, &VAR_14))
  return VAR_3;

 if (FUNC_7(VAR_15, &VAR_14))
  return VAR_3;
 FUNC_8(VAR_9, VAR_16, VAR_11);

 return 0;
}
