
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int dma_addr_t ;


 void* FUNC_0 (struct dma_coherent_mem*,int ,int *) ;
 struct dma_coherent_mem* FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0, ssize_t VAR_1,
  dma_addr_t *VAR_2, void **VAR_3)
{
 struct dma_coherent_mem *VAR_4 = FUNC_1(VAR_0);

 if (!VAR_4)
  return 0;

 *VAR_3 = FUNC_0(VAR_4, VAR_1, VAR_2);
 return 1;
}
