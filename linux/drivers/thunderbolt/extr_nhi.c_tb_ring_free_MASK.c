
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_ring {size_t hop; int size; int work; TYPE_2__* nhi; scalar_t__ descriptors_dma; int * descriptors; scalar_t__ running; scalar_t__ is_tx; } ;
struct TYPE_4__ {TYPE_1__* pdev; int lock; int ** rx_rings; int ** tx_rings; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct tb_ring*) ;
 int FUNC_1 (int *,char*,int ,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t) ;
 int FUNC_3 (int *,int,int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tb_ring*) ;
 int FUNC_6 (struct tb_ring*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct tb_ring *VAR_0)
{
 FUNC_7(&VAR_0->nhi->lock);




 if (VAR_0->is_tx)
  VAR_0->nhi->tx_rings[VAR_0->hop] = ((void*)0);
 else
  VAR_0->nhi->rx_rings[VAR_0->hop] = ((void*)0);

 if (VAR_0->running) {
  FUNC_1(&VAR_0->nhi->pdev->dev, "%s %d still running\n",
    FUNC_0(VAR_0), VAR_0->hop);
 }
 FUNC_8(&VAR_0->nhi->lock);

 FUNC_6(VAR_0);

 FUNC_3(&VAR_0->nhi->pdev->dev,
     VAR_0->size * sizeof(*VAR_0->descriptors),
     VAR_0->descriptors, VAR_0->descriptors_dma);

 VAR_0->descriptors = ((void*)0);
 VAR_0->descriptors_dma = 0;


 FUNC_2(&VAR_0->nhi->pdev->dev, "freeing %s %d\n", FUNC_0(VAR_0),
  VAR_0->hop);






 FUNC_4(&VAR_0->work);
 FUNC_5(VAR_0);
}
