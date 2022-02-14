
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int dummy; } ;
struct device {struct dma_coherent_mem* dma_mem; } ;



__attribute__((used)) static inline struct dma_coherent_mem *FUNC_0(struct device *VAR_0)
{
 if (VAR_0 && VAR_0->dma_mem)
  return VAR_0->dma_mem;
 return ((void*)0);
}
