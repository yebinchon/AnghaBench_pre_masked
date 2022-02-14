
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct emac_ring_header {scalar_t__ used; scalar_t__ size; scalar_t__ dma_addr; int * v_addr; } ;
struct emac_adapter {TYPE_2__* netdev; struct emac_ring_header ring_header; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct device*,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct emac_adapter*) ;

void FUNC_3(struct emac_adapter *VAR_0)
{
 struct emac_ring_header *VAR_1 = &VAR_0->ring_header;
 struct device *VAR_2 = VAR_0->netdev->dev.parent;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1->size,
     VAR_1->v_addr, VAR_1->dma_addr);

 VAR_1->v_addr = ((void*)0);
 VAR_1->dma_addr = 0;
 VAR_1->size = 0;
 VAR_1->used = 0;
}
