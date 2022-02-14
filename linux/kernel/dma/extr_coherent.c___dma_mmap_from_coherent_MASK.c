
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; int vm_page_prot; int vm_start; } ;
struct dma_coherent_mem {void* virt_base; int size; int pfn_base; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (struct vm_area_struct*,int ,unsigned long,int,int ) ;
 int FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct dma_coherent_mem *VAR_2,
  struct vm_area_struct *VAR_3, void *VAR_4, size_t VAR_5, int *VAR_6)
{
 if (VAR_2 && VAR_4 >= VAR_2->virt_base && VAR_4 + VAR_5 <=
     (VAR_2->virt_base + (VAR_2->size << VAR_1))) {
  unsigned long VAR_7 = VAR_3->vm_pgoff;
  int VAR_8 = (VAR_4 - VAR_2->virt_base) >> VAR_1;
  int VAR_9 = FUNC_2(VAR_3);
  int VAR_10 = FUNC_0(VAR_5) >> VAR_1;

  *VAR_6 = -VAR_0;
  if (VAR_7 < VAR_10 && VAR_9 <= VAR_10 - VAR_7) {
   unsigned long VAR_11 = VAR_2->pfn_base + VAR_8 + VAR_7;
   *VAR_6 = FUNC_1(VAR_3, VAR_3->vm_start, VAR_11,
            VAR_9 << VAR_1,
            VAR_3->vm_page_prot);
  }
  return 1;
 }
 return 0;
}
