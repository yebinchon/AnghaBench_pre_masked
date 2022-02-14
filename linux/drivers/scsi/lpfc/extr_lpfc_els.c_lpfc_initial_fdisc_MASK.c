
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_1 ;
 struct lpfc_nodelist* FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_vport*,int ) ;
 int FUNC_6 (struct lpfc_nodelist*) ;

int
FUNC_7(struct lpfc_vport *VAR_2)
{
 struct lpfc_nodelist *VAR_3;


 VAR_3 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_3) {

  VAR_3 = FUNC_5(VAR_2, VAR_0);
  if (!VAR_3)
   return 0;

  FUNC_2(VAR_2, VAR_3);
 } else if (!FUNC_0(VAR_3)) {

  VAR_3 = FUNC_1(VAR_2, VAR_3, VAR_1);
  if (!VAR_3)
   return 0;
 }

 if (FUNC_4(VAR_2, VAR_3, 0)) {



  FUNC_6(VAR_3);
  return 0;
 }
 return 1;
}
