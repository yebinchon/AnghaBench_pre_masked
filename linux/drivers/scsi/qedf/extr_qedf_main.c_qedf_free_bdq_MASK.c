
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedf_ctx {TYPE_2__* bdq; TYPE_1__* pdev; int bdq_pbl_dma; scalar_t__ bdq_pbl; int bdq_pbl_mem_size; int bdq_pbl_list_dma; scalar_t__ bdq_pbl_list; } ;
struct TYPE_4__ {int buf_dma; scalar_t__ buf_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct qedf_ctx *VAR_3)
{
 int VAR_4;

 if (VAR_3->bdq_pbl_list)
  FUNC_0(&VAR_3->pdev->dev, VAR_2,
      VAR_3->bdq_pbl_list, VAR_3->bdq_pbl_list_dma);

 if (VAR_3->bdq_pbl)
  FUNC_0(&VAR_3->pdev->dev, VAR_3->bdq_pbl_mem_size,
      VAR_3->bdq_pbl, VAR_3->bdq_pbl_dma);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->bdq[VAR_4].buf_addr) {
   FUNC_0(&VAR_3->pdev->dev, VAR_0,
       VAR_3->bdq[VAR_4].buf_addr, VAR_3->bdq[VAR_4].buf_dma);
  }
 }
}
