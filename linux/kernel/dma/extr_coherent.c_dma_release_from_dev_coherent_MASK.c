
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct dma_coherent_mem*,int,void*) ;
 struct dma_coherent_mem* FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0, int VAR_1, void *VAR_2)
{
 struct dma_coherent_mem *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
