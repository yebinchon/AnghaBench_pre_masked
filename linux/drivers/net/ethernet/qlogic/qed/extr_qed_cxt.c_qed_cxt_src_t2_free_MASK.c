
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_hwfn {TYPE_2__* cdev; struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {size_t t2_num_pages; TYPE_3__* t2; } ;
struct TYPE_6__ {int p_phys; scalar_t__ p_virt; int size; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_0)
{
 struct qed_cxt_mngr *VAR_1 = VAR_0->p_cxt_mngr;
 u32 VAR_2;

 if (!VAR_1->t2)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->t2_num_pages; VAR_2++)
  if (VAR_1->t2[VAR_2].p_virt)
   FUNC_0(&VAR_0->cdev->pdev->dev,
       VAR_1->t2[VAR_2].size,
       VAR_1->t2[VAR_2].p_virt,
       VAR_1->t2[VAR_2].p_phys);

 FUNC_1(VAR_1->t2);
 VAR_1->t2 = ((void*)0);
}
