
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lpfc_nodelist* FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;

__attribute__((used)) static void
FUNC_6(struct lpfc_vport *VAR_4)
{
 struct lpfc_nodelist *VAR_5;





 VAR_5 = FUNC_2(VAR_4, VAR_0);
 if (!VAR_5) {
  VAR_5 = FUNC_4(VAR_4, VAR_0);
  if (VAR_5) {
   VAR_5->nlp_type |= VAR_1;
  } else {
   return;
  }
 }
 if (!FUNC_0(VAR_5))
  VAR_5 = FUNC_1(VAR_4, VAR_5, VAR_2);

 if (VAR_5) {
  FUNC_5(VAR_4, VAR_5, VAR_3);
  FUNC_3(VAR_4, VAR_5->nlp_DID, 0);
 }
}
