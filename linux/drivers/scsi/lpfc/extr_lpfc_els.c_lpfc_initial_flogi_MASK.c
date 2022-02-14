
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int port_state; } ;
struct lpfc_nodelist {int nlp_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct lpfc_nodelist* FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_vport*,int ) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*) ;

int
FUNC_8(struct lpfc_vport *VAR_4)
{
 struct lpfc_nodelist *VAR_5;

 VAR_4->port_state = VAR_1;
 FUNC_7(VAR_4);


 VAR_5 = FUNC_3(VAR_4, VAR_0);
 if (!VAR_5) {

  VAR_5 = FUNC_5(VAR_4, VAR_0);
  if (!VAR_5)
   return 0;

  VAR_5->nlp_type |= VAR_2;

  FUNC_2(VAR_4, VAR_5);
 } else if (!FUNC_0(VAR_5)) {

  VAR_5 = FUNC_1(VAR_4, VAR_5, VAR_3);
  if (!VAR_5)
   return 0;
 }

 if (FUNC_4(VAR_4, VAR_5, 0)) {



  FUNC_6(VAR_5);
  return 0;
 }
 return 1;
}
