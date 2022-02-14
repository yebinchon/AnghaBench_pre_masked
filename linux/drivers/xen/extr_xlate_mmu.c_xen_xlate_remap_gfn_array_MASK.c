
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_pfn_t ;
struct vm_area_struct {int vm_flags; int vm_mm; } ;
struct remap_data {int nr_fgfn; unsigned int domid; int* err_ptr; int mapped; scalar_t__ index; struct page** pages; struct vm_area_struct* vma; int prot; int * fgfn; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,unsigned long,unsigned long,int ,struct remap_data*) ;
 int VAR_4 ;

int FUNC_3(struct vm_area_struct *VAR_5,
         unsigned long VAR_6,
         xen_pfn_t *VAR_7, int VAR_8,
         int *VAR_9, pgprot_t VAR_10,
         unsigned VAR_11,
         struct page **VAR_12)
{
 int VAR_13;
 struct remap_data VAR_14;
 unsigned long VAR_15 = FUNC_1(VAR_8, VAR_3) << VAR_0;



 FUNC_0(!((VAR_5->vm_flags & (VAR_2 | VAR_1)) == (VAR_2 | VAR_1)));

 VAR_14.fgfn = VAR_7;
 VAR_14.nr_fgfn = VAR_8;
 VAR_14.prot = VAR_10;
 VAR_14.domid = VAR_11;
 VAR_14.vma = VAR_5;
 VAR_14.pages = VAR_12;
 VAR_14.index = 0;
 VAR_14.err_ptr = VAR_9;
 VAR_14.mapped = 0;

 VAR_13 = FUNC_2(VAR_5->vm_mm, VAR_6, VAR_15,
      VAR_4, &VAR_14);
 return VAR_13 < 0 ? VAR_13 : VAR_14.mapped;
}
