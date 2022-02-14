
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_hba {struct lpfc_vport* pport; } ;


 int FUNC_0 (struct lpfc_vport*) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_0)
{
 struct lpfc_vport *VAR_1 = VAR_0->pport;


 FUNC_0(VAR_1);

 return;
}
