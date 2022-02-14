
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int load_flag; } ;
struct lpfc_hba {scalar_t__ sli_rev; int max_vports; struct lpfc_vport* pport; int HCregaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lpfc_vport*) ;
 struct lpfc_vport** FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(struct lpfc_hba *VAR_2)
{
 struct lpfc_vport **VAR_3;
 int VAR_4;

 if (VAR_2->sli_rev <= VAR_1) {

  FUNC_4(0, VAR_2->HCregaddr);
  FUNC_3(VAR_2->HCregaddr);
 }

 if (VAR_2->pport->load_flag & VAR_0)
  FUNC_0(VAR_2->pport);
 else {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 != ((void*)0))
   for (VAR_4 = 0; VAR_4 <= VAR_2->max_vports &&
    VAR_3[VAR_4] != ((void*)0); VAR_4++)
    FUNC_0(VAR_3[VAR_4]);
  FUNC_2(VAR_2, VAR_3);
 }
 return 0;
}
