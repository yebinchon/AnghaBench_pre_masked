
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int dummy; } ;
struct device {struct dma_coherent_mem* dma_mem; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct device *VAR_2,
          struct dma_coherent_mem *VAR_3)
{
 if (!VAR_2)
  return -VAR_1;

 if (VAR_2->dma_mem)
  return -VAR_0;

 VAR_2->dma_mem = VAR_3;
 return 0;
}
