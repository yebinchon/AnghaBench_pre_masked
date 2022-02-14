
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {scalar_t__ worker_thread; int * wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_0)
{
 if (VAR_0->wq) {
  FUNC_1(VAR_0->wq);
  FUNC_0(VAR_0->wq);
  VAR_0->wq = ((void*)0);
 }


 if (VAR_0->worker_thread)
  FUNC_2(VAR_0->worker_thread);
}
