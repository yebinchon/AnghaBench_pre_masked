
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct dma_coherent_mem {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct dma_coherent_mem*,struct vm_area_struct*,void*,size_t,int*) ;
 struct dma_coherent_mem* FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0, struct vm_area_struct *VAR_1,
      void *VAR_2, size_t VAR_3, int *VAR_4)
{
 struct dma_coherent_mem *VAR_5 = FUNC_1(VAR_0);

 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
