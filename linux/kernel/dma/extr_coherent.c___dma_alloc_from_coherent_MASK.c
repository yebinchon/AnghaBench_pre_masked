
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int size; int spinlock; void* virt_base; scalar_t__ device_base; int bitmap; } ;
typedef int ssize_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void *FUNC_6(struct dma_coherent_mem *VAR_1,
  ssize_t VAR_2, dma_addr_t *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;
 int VAR_6;
 void *VAR_7;

 FUNC_3(&VAR_1->spinlock, VAR_5);

 if (FUNC_5(VAR_2 > (VAR_1->size << VAR_0)))
  goto err;

 VAR_6 = FUNC_0(VAR_1->bitmap, VAR_1->size, VAR_4);
 if (FUNC_5(VAR_6 < 0))
  goto err;




 *VAR_3 = VAR_1->device_base + (VAR_6 << VAR_0);
 VAR_7 = VAR_1->virt_base + (VAR_6 << VAR_0);
 FUNC_4(&VAR_1->spinlock, VAR_5);
 FUNC_2(VAR_7, 0, VAR_2);
 return VAR_7;
err:
 FUNC_4(&VAR_1->spinlock, VAR_5);
 return ((void*)0);
}
