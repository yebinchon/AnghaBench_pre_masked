
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int hbalock; } ;


 struct lpfc_iocbq* FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct lpfc_iocbq *
FUNC_3(struct lpfc_hba *VAR_0)
{
 struct lpfc_iocbq * VAR_1 = ((void*)0);
 unsigned long VAR_2;

 FUNC_1(&VAR_0->hbalock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->hbalock, VAR_2);
 return VAR_1;
}
