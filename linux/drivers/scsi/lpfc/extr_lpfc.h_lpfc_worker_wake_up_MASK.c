
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int work_waitq; int data_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct lpfc_hba *VAR_1)
{

 FUNC_0(VAR_0, &VAR_1->data_flags);


 FUNC_1(&VAR_1->work_waitq);
 return;
}
