
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_nodelist {int nlp_flag; } ;
struct lpfc_hba {scalar_t__ sli_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_nodelist*,int *) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_nodelist*,int *) ;
 int FUNC_4 (struct lpfc_hba*,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_5, struct lpfc_nodelist *VAR_6)
{
 FUNC_0(VAR_4);

 FUNC_1(VAR_6);





 if (VAR_6->nlp_flag & VAR_3) {
  if (VAR_5->sli_rev != VAR_2)
   FUNC_2(VAR_5, VAR_6, &VAR_4);
  else
   FUNC_3(VAR_5, VAR_6, &VAR_4);
 }


 FUNC_4(VAR_5, &VAR_4, VAR_1,
         VAR_0);

 return 0;
}
