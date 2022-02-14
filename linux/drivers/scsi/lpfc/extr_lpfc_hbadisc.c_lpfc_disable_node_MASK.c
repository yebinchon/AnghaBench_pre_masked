
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_listp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_vport*,scalar_t__,int) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_vport *VAR_1, struct lpfc_nodelist *VAR_2)
{
 FUNC_1(VAR_1, VAR_2);
 if (VAR_2->nlp_state && !FUNC_0(&VAR_2->nlp_listp))
  FUNC_2(VAR_1, VAR_2->nlp_state, -1);
 FUNC_3(VAR_1, VAR_2, VAR_2->nlp_state,
    VAR_0);
}
