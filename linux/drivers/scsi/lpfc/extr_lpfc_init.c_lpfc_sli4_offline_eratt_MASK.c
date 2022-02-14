
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int hbalock; int link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct lpfc_hba *VAR_2)
{
 FUNC_5(&VAR_2->hbalock);
 VAR_2->link_state = VAR_0;
 FUNC_6(&VAR_2->hbalock);

 FUNC_2(VAR_2, VAR_1);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_4(VAR_2);
}
