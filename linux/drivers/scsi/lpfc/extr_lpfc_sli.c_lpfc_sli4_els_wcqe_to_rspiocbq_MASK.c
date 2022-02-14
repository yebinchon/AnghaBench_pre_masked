
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_wcqe_complete {int word3; int parameter; int total_data_placed; int word0; } ;
struct TYPE_6__ {int iocb_event; } ;
struct lpfc_sli_ring {int ring_lock; TYPE_3__ stats; } ;
struct TYPE_4__ {struct lpfc_wcqe_complete wcqe_cmpl; } ;
struct TYPE_5__ {TYPE_1__ cqe; } ;
struct lpfc_iocbq {TYPE_2__ cq_event; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct lpfc_wcqe_complete*) ;
 struct lpfc_sli_ring* FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*,struct lpfc_wcqe_complete*) ;
 struct lpfc_iocbq* FUNC_4 (struct lpfc_hba*,struct lpfc_sli_ring*,int ) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_sli_ring*,struct lpfc_iocbq*) ;
 int VAR_2 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct lpfc_iocbq *
FUNC_10(struct lpfc_hba *VAR_3,
          struct lpfc_iocbq *VAR_4)
{
 struct lpfc_sli_ring *VAR_5;
 struct lpfc_iocbq *VAR_6;
 struct lpfc_wcqe_complete *VAR_7;
 unsigned long VAR_8;

 VAR_5 = FUNC_1(VAR_3);
 if (FUNC_9(!VAR_5))
  return ((void*)0);

 VAR_7 = &VAR_4->cq_event.cqe.wcqe_cmpl;
 VAR_5->stats.iocb_event++;

 VAR_6 = FUNC_4(VAR_3, VAR_5,
    FUNC_0(VAR_2, VAR_7));
 if (FUNC_9(!VAR_6)) {
  FUNC_2(VAR_3, VAR_0, VAR_1,
    "0386 ELS complete with no corresponding "
    "cmdiocb: 0x%x 0x%x 0x%x 0x%x\n",
    VAR_7->word0, VAR_7->total_data_placed,
    VAR_7->parameter, VAR_7->word3);
  FUNC_5(VAR_3, VAR_4);
  return ((void*)0);
 }

 FUNC_7(&VAR_5->ring_lock, VAR_8);

 FUNC_6(VAR_3, VAR_5, VAR_6);
 FUNC_8(&VAR_5->ring_lock, VAR_8);


 FUNC_3(VAR_3, VAR_4, VAR_6, VAR_7);

 return VAR_4;
}
