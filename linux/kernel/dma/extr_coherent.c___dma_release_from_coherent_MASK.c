
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {void* virt_base; int size; int spinlock; int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct dma_coherent_mem *VAR_1,
           int VAR_2, void *VAR_3)
{
 if (VAR_1 && VAR_3 >= VAR_1->virt_base && VAR_3 <
     (VAR_1->virt_base + (VAR_1->size << VAR_0))) {
  int VAR_4 = (VAR_3 - VAR_1->virt_base) >> VAR_0;
  unsigned long VAR_5;

  FUNC_1(&VAR_1->spinlock, VAR_5);
  FUNC_0(VAR_1->bitmap, VAR_4, VAR_2);
  FUNC_2(&VAR_1->spinlock, VAR_5);
  return 1;
 }
 return 0;
}
