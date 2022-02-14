
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli {int sli_flag; } ;
struct lpfc_hba {int link_state; int hbalock; struct lpfc_sli sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*,int ) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_hba *VAR_4)
{
 struct lpfc_sli *VAR_5 = &VAR_4->sli;

 FUNC_7(&VAR_4->hbalock);
 VAR_5->sli_flag &= ~VAR_3;
 FUNC_8(&VAR_4->hbalock);
 FUNC_2(VAR_4, VAR_2);

 FUNC_1(VAR_4);
 FUNC_3(VAR_4);
 FUNC_7(&VAR_4->hbalock);
 FUNC_5(VAR_4);
 FUNC_8(&VAR_4->hbalock);
 FUNC_0(VAR_4);
 FUNC_4(VAR_4, VAR_0);
 FUNC_6(VAR_4);
 VAR_4->link_state = VAR_1;
 return;
}
