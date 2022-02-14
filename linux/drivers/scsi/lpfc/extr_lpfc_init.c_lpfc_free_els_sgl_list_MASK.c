
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sgl_list_lock; int lpfc_els_sgl_list; } ;
struct lpfc_hba {int hbalock; TYPE_1__ sli4_hba; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct lpfc_hba*,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_1)
{
 FUNC_0(VAR_0);


 FUNC_4(&VAR_1->hbalock);
 FUNC_3(&VAR_1->sli4_hba.sgl_list_lock);
 FUNC_1(&VAR_1->sli4_hba.lpfc_els_sgl_list, &VAR_0);
 FUNC_5(&VAR_1->sli4_hba.sgl_list_lock);
 FUNC_6(&VAR_1->hbalock);


 FUNC_2(VAR_1, &VAR_0);
}
