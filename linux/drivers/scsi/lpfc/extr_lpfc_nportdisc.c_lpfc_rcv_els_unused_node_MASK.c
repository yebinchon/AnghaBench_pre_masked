
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_state; } ;


 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_vport *VAR_0, struct lpfc_nodelist *VAR_1,
    void *VAR_2, uint32_t VAR_3)
{
 FUNC_0(VAR_0, VAR_1, 0);
 return VAR_1->nlp_state;
}
