
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_devres {size_t size; unsigned long attrs; int dma_handle; void* vaddr; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,struct dma_devres*) ;
 struct dma_devres* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct dma_devres*) ;
 void* FUNC_3 (struct device*,size_t,int *,int ,unsigned long) ;
 int VAR_0 ;

void *FUNC_4(struct device *VAR_1, size_t VAR_2, dma_addr_t *VAR_3,
  gfp_t VAR_4, unsigned long VAR_5)
{
 struct dma_devres *VAR_6;
 void *VAR_7;

 VAR_6 = FUNC_1(VAR_0, sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 VAR_6->vaddr = VAR_7;
 VAR_6->dma_handle = *VAR_3;
 VAR_6->size = VAR_2;
 VAR_6->attrs = VAR_5;

 FUNC_0(VAR_1, VAR_6);

 return VAR_7;
}
