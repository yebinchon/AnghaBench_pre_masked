
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_state; } ;
struct lpfc_iocbq {int dummy; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct lpfc_vport *VAR_1, struct lpfc_nodelist *VAR_2,
     void *VAR_3, uint32_t VAR_4)
{
 struct lpfc_hba *VAR_5 = VAR_1->phba;
 struct lpfc_iocbq *VAR_6;

 VAR_6 = (struct lpfc_iocbq *) VAR_3;


 FUNC_0(VAR_5, VAR_2);

 FUNC_1(VAR_1, VAR_2, VAR_6, VAR_0);
 return VAR_2->nlp_state;
}
