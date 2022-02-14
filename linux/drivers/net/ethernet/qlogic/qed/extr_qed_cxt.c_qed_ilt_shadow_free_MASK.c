
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_ilt_client_cfg {int dummy; } ;
struct qed_hwfn {TYPE_2__* cdev; struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_dma_mem {int * p_virt; int p_phys; int size; } ;
struct qed_cxt_mngr {struct qed_dma_mem* ilt_shadow; struct qed_ilt_client_cfg* clients; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct qed_dma_mem*) ;
 size_t FUNC_2 (struct qed_ilt_client_cfg*) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_0)
{
 struct qed_ilt_client_cfg *VAR_1 = VAR_0->p_cxt_mngr->clients;
 struct qed_cxt_mngr *VAR_2 = VAR_0->p_cxt_mngr;
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_1);

 for (VAR_4 = 0; VAR_2->ilt_shadow && VAR_4 < VAR_3; VAR_4++) {
  struct qed_dma_mem *VAR_5 = &VAR_2->ilt_shadow[VAR_4];

  if (VAR_5->p_virt)
   FUNC_0(&VAR_0->cdev->pdev->dev,
       VAR_5->size, VAR_5->p_virt,
       VAR_5->p_phys);
  VAR_5->p_virt = ((void*)0);
 }
 FUNC_1(VAR_2->ilt_shadow);
}
