
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_devres {int attrs; int dma_handle; int vaddr; int size; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct dma_devres *VAR_2 = VAR_1;

 FUNC_0(VAR_0, VAR_2->size, VAR_2->vaddr, VAR_2->dma_handle,
   VAR_2->attrs);
}
