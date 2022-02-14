
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_ctx {int num_queues; TYPE_1__* pdev; struct global_queue** global_queues; } ;
struct global_queue {int cq_pbl_dma; scalar_t__ cq_pbl; int cq_pbl_size; int cq_dma; scalar_t__ cq; int cq_mem_size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (struct global_queue*) ;
 int FUNC_2 (struct qedf_ctx*) ;

__attribute__((used)) static void FUNC_3(struct qedf_ctx *VAR_0)
{
 int VAR_1;
 struct global_queue **VAR_2 = VAR_0->global_queues;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_queues; VAR_1++) {
  if (!VAR_2[VAR_1])
   continue;

  if (VAR_2[VAR_1]->cq)
   FUNC_0(&VAR_0->pdev->dev,
       VAR_2[VAR_1]->cq_mem_size, VAR_2[VAR_1]->cq, VAR_2[VAR_1]->cq_dma);
  if (VAR_2[VAR_1]->cq_pbl)
   FUNC_0(&VAR_0->pdev->dev, VAR_2[VAR_1]->cq_pbl_size,
       VAR_2[VAR_1]->cq_pbl, VAR_2[VAR_1]->cq_pbl_dma);

  FUNC_1(VAR_2[VAR_1]);
 }

 FUNC_2(VAR_0);
}
