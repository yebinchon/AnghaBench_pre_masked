
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli_ring {int txq; } ;
struct lpfc_iocbq {int list; } ;
struct lpfc_hba {int hbalock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct lpfc_hba *VAR_0, struct lpfc_sli_ring *VAR_1,
      struct lpfc_iocbq *VAR_2)
{
 FUNC_1(&VAR_0->hbalock);

 FUNC_0(&VAR_2->list, &VAR_1->txq);
}
