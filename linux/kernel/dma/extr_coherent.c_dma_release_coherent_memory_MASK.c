
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {struct dma_coherent_mem* bitmap; int virt_base; } ;


 int FUNC_0 (struct dma_coherent_mem*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dma_coherent_mem *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->virt_base);
 FUNC_0(VAR_0->bitmap);
 FUNC_0(VAR_0);
}
