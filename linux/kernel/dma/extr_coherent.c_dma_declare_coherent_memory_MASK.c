
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int dummy; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,struct dma_coherent_mem*) ;
 int FUNC_1 (int ,int ,size_t,struct dma_coherent_mem**) ;
 int FUNC_2 (struct dma_coherent_mem*) ;

int FUNC_3(struct device *VAR_0, phys_addr_t VAR_1,
    dma_addr_t VAR_2, size_t VAR_3)
{
 struct dma_coherent_mem *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_4);
 return VAR_5;
}
