
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct lpfc_sli {size_t num_rings; int * sli3_ring; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int hbalock; struct lpfc_sli sli; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_nodelist*,int *,struct list_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_0,
  struct lpfc_nodelist *VAR_1, struct list_head *VAR_2)
{
 struct lpfc_sli *VAR_3 = &VAR_0->sli;
 uint32_t VAR_4;

 FUNC_1(&VAR_0->hbalock);
 for (VAR_4 = 0; VAR_4 < VAR_3->num_rings; VAR_4++)
  FUNC_0(VAR_0, VAR_1, &VAR_3->sli3_ring[VAR_4],
      VAR_2);
 FUNC_2(&VAR_0->hbalock);
}
