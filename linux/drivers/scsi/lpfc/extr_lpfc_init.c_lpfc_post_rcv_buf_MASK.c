
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli {int * sli3_ring; } ;
struct lpfc_hba {struct lpfc_sli sli; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_2)
{
 struct lpfc_sli *VAR_3 = &VAR_2->sli;


 FUNC_0(VAR_2, &VAR_3->sli3_ring[VAR_1], VAR_0);


 return 0;
}
