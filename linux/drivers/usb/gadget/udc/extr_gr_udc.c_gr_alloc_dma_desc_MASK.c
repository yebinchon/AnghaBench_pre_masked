
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gr_ep {TYPE_1__* dev; } ;
struct gr_dma_desc {int paddr; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; int desc_pool; } ;


 int FUNC_0 (int ,char*) ;
 struct gr_dma_desc* FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static struct gr_dma_desc *FUNC_2(struct gr_ep *VAR_0, gfp_t VAR_1)
{
 dma_addr_t VAR_2;
 struct gr_dma_desc *VAR_3;

 VAR_3 = FUNC_1(VAR_0->dev->desc_pool, VAR_1, &VAR_2);
 if (!VAR_3) {
  FUNC_0(VAR_0->dev->dev, "Could not allocate from DMA pool\n");
  return ((void*)0);
 }

 VAR_3->paddr = VAR_2;

 return VAR_3;
}
