
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct qed_hwfn {TYPE_2__* cdev; } ;
struct qed_fcoe_conn {int * xferq_addr; scalar_t__* xferq_addr_virt_addr; int xferq_pbl_addr; scalar_t__ xferq_pbl_addr_virt_addr; int * confq_addr; scalar_t__* confq_addr_virt_addr; int confq_pbl_addr; scalar_t__ confq_pbl_addr_virt_addr; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (struct qed_fcoe_conn*) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_1,
         struct qed_fcoe_conn *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2)
  return;

 if (VAR_2->confq_pbl_addr_virt_addr)
  FUNC_1(&VAR_1->cdev->pdev->dev,
      VAR_0,
      VAR_2->confq_pbl_addr_virt_addr,
      VAR_2->confq_pbl_addr);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->confq_addr); VAR_3++) {
  if (!VAR_2->confq_addr_virt_addr[VAR_3])
   continue;
  FUNC_1(&VAR_1->cdev->pdev->dev,
      VAR_0,
      VAR_2->confq_addr_virt_addr[VAR_3],
      VAR_2->confq_addr[VAR_3]);
 }

 if (VAR_2->xferq_pbl_addr_virt_addr)
  FUNC_1(&VAR_1->cdev->pdev->dev,
      VAR_0,
      VAR_2->xferq_pbl_addr_virt_addr,
      VAR_2->xferq_pbl_addr);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->xferq_addr); VAR_3++) {
  if (!VAR_2->xferq_addr_virt_addr[VAR_3])
   continue;
  FUNC_1(&VAR_1->cdev->pdev->dev,
      VAR_0,
      VAR_2->xferq_addr_virt_addr[VAR_3],
      VAR_2->xferq_addr[VAR_3]);
 }
 FUNC_2(VAR_2);
}
