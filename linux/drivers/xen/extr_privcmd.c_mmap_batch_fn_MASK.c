
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_pfn_t ;
struct vm_area_struct {int vm_page_prot; struct page** vm_private_data; } ;
struct page {int dummy; } ;
struct mmap_batch_state {size_t index; int va; int global_error; int domain; struct vm_area_struct* vma; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,int,int *,int,int*,int ,int ,struct page**) ;

__attribute__((used)) static int FUNC_3(void *VAR_5, int VAR_6, void *VAR_7)
{
 xen_pfn_t *VAR_8 = VAR_5;
 struct mmap_batch_state *VAR_9 = VAR_7;
 struct vm_area_struct *VAR_10 = VAR_9->vma;
 struct page **VAR_11 = VAR_10->vm_private_data;
 struct page **VAR_12 = ((void*)0);
 int VAR_13;

 if (FUNC_1(VAR_2))
  VAR_12 = &VAR_11[VAR_9->index];

 FUNC_0(VAR_6 < 0);
 VAR_13 = FUNC_2(VAR_9->vma, VAR_9->va & VAR_1, VAR_8, VAR_6,
      (int *)VAR_8, VAR_9->vma->vm_page_prot,
      VAR_9->domain, VAR_12);


 if (VAR_13 != VAR_6) {
  if (VAR_13 == -VAR_0)
   VAR_9->global_error = -VAR_0;
  else {

   if (VAR_9->global_error == 0)
    VAR_9->global_error = 1;
  }
 }
 VAR_9->va += VAR_3 * VAR_6;
 VAR_9->index += VAR_6 / VAR_4;

 return 0;
}
