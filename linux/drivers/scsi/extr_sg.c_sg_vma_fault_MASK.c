
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int pgoff; struct page* page; struct vm_area_struct* vma; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; scalar_t__ vm_private_data; } ;
struct page {int dummy; } ;
struct TYPE_3__ {unsigned long bufflen; int k_use_sg; int page_order; int * pages; } ;
struct TYPE_4__ {int parentdp; TYPE_1__ reserve; } ;
typedef TYPE_1__ Sg_scatter_hold ;
typedef TYPE_2__ Sg_fd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,int ,char*,unsigned long,int) ;

__attribute__((used)) static vm_fault_t
FUNC_4(struct vm_fault *VAR_3)
{
 struct vm_area_struct *VAR_4 = VAR_3->vma;
 Sg_fd *VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8;
 Sg_scatter_hold *VAR_9;
 int VAR_10, VAR_11;

 if ((((void*)0) == VAR_4) || (!(VAR_5 = (Sg_fd *) VAR_4->vm_private_data)))
  return VAR_2;
 VAR_9 = &VAR_5->reserve;
 VAR_6 = VAR_3->pgoff << VAR_1;
 if (VAR_6 >= VAR_9->bufflen)
  return VAR_2;
 FUNC_0(3, FUNC_3(VAR_0, VAR_5->parentdp,
          "sg_vma_fault: offset=%lu, scatg=%d\n",
          VAR_6, VAR_9->k_use_sg));
 VAR_8 = VAR_4->vm_start;
 VAR_11 = 1 << (VAR_1 + VAR_9->page_order);
 for (VAR_10 = 0; VAR_10 < VAR_9->k_use_sg && VAR_8 < VAR_4->vm_end; VAR_10++) {
  VAR_7 = VAR_4->vm_end - VAR_8;
  VAR_7 = (VAR_7 < VAR_11) ? VAR_7 : VAR_11;
  if (VAR_6 < VAR_7) {
   struct page *VAR_12 = FUNC_2(VAR_9->pages[VAR_10],
           VAR_6 >> VAR_1);
   FUNC_1(VAR_12);
   VAR_3->page = VAR_12;
   return 0;
  }
  VAR_8 += VAR_7;
  VAR_6 -= VAR_7;
 }

 return VAR_2;
}
