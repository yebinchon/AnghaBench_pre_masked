
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_sli_ring {scalar_t__ ringno; int txq; } ;
struct lpfc_iocbq {int dummy; } ;
struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {TYPE_1__ sli; int hbalock; } ;
typedef int IOCB_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct lpfc_hba*) ;
 int * FUNC_3 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 struct lpfc_iocbq* FUNC_4 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_sli_ring*,int *,struct lpfc_iocbq*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_sli_ring*) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_sli_ring*) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_2, struct lpfc_sli_ring *VAR_3)
{
 IOCB_t *VAR_4;
 struct lpfc_iocbq *VAR_5;

 FUNC_1(&VAR_2->hbalock);
 if (FUNC_2(VAR_2) &&
     (!FUNC_0(&VAR_3->txq)) &&
     (VAR_3->ringno != VAR_0 ||
      VAR_2->sli.sli_flag & VAR_1)) {

  while ((VAR_4 = FUNC_3(VAR_2, VAR_3)) &&
         (VAR_5 = FUNC_4(VAR_2, VAR_3)))
   FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);

  if (VAR_4)
   FUNC_7(VAR_2, VAR_3);
  else
   FUNC_6(VAR_2, VAR_3);
 }

 return;
}
