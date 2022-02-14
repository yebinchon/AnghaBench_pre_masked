
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_sli_ring {scalar_t__ ringno; int txcmplq_cnt; int txcmplq; int ring_lock; } ;
struct TYPE_3__ {scalar_t__ ulpCommand; } ;
struct lpfc_iocbq {TYPE_2__* vport; TYPE_1__ iocb; int iocb_flag; int list; } ;
struct lpfc_hba {scalar_t__ sli_rev; int fc_ratov; int hbalock; } ;
struct TYPE_4__ {int load_flag; int els_tmofunc; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_7, struct lpfc_sli_ring *VAR_8,
   struct lpfc_iocbq *VAR_9)
{
 if (VAR_7->sli_rev == VAR_5)
  FUNC_2(&VAR_8->ring_lock);
 else
  FUNC_2(&VAR_7->hbalock);

 FUNC_0(!VAR_9);

 FUNC_1(&VAR_9->list, &VAR_8->txcmplq);
 VAR_9->iocb_flag |= VAR_4;
 VAR_8->txcmplq_cnt++;

 if ((FUNC_5(VAR_8->ringno == VAR_3)) &&
    (VAR_9->iocb.ulpCommand != VAR_0) &&
    (VAR_9->iocb.ulpCommand != VAR_1)) {
  FUNC_0(!VAR_9->vport);
  if (!(VAR_9->vport->load_flag & VAR_2))
   FUNC_3(&VAR_9->vport->els_tmofunc,
      VAR_6 +
      FUNC_4(1000 * (VAR_7->fc_ratov << 1)));
 }

 return 0;
}
