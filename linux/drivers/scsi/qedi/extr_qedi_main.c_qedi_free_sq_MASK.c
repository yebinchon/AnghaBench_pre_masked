
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_endpoint {int sq_dma; scalar_t__ sq; int sq_mem_size; int sq_pbl_dma; scalar_t__ sq_pbl; int sq_pbl_size; } ;
struct qedi_ctx {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;

void FUNC_1(struct qedi_ctx *VAR_0, struct qedi_endpoint *VAR_1)
{
 if (VAR_1->sq_pbl)
  FUNC_0(&VAR_0->pdev->dev, VAR_1->sq_pbl_size, VAR_1->sq_pbl,
      VAR_1->sq_pbl_dma);
 if (VAR_1->sq)
  FUNC_0(&VAR_0->pdev->dev, VAR_1->sq_mem_size, VAR_1->sq,
      VAR_1->sq_dma);
}
