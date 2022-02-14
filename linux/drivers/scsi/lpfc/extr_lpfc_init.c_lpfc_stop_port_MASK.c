
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {scalar_t__ wq; int (* lpfc_stop_port ) (struct lpfc_hba*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct lpfc_hba*) ;

void
FUNC_2(struct lpfc_hba *VAR_0)
{
 VAR_0->lpfc_stop_port(VAR_0);

 if (VAR_0->wq)
  FUNC_0(VAR_0->wq);
}
