
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_dma {int size; int dma_addr0; int cpu_addr0; int pdev; } ;


 int FUNC_0 (struct flexcop_dma*,int ,int) ;
 int FUNC_1 (int ,int,int ,int ) ;

void FUNC_2(struct flexcop_dma *VAR_0)
{
 FUNC_1(VAR_0->pdev, VAR_0->size*2,
   VAR_0->cpu_addr0, VAR_0->dma_addr0);
 FUNC_0(VAR_0, 0, sizeof(struct flexcop_dma));
}
