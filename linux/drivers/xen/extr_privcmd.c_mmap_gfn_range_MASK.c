
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; int vm_page_prot; } ;
struct privcmd_mmap_entry {int npages; unsigned long va; int mfn; } ;
struct mmap_gfn_state {unsigned long va; int domain; struct vm_area_struct* vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vm_area_struct*,int,int ,int,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_4, void *VAR_5)
{
 struct privcmd_mmap_entry *VAR_6 = VAR_4;
 struct mmap_gfn_state *VAR_7 = VAR_5;
 struct vm_area_struct *VAR_8 = VAR_7->vma;
 int VAR_9;


 if ((VAR_6->npages > (VAR_1 >> VAR_3)) ||
     ((unsigned long)(VAR_6->npages << VAR_3) >= -VAR_7->va))
  return -VAR_0;


 if ((VAR_6->va != VAR_7->va) ||
     ((VAR_6->va+(VAR_6->npages<<VAR_3)) > VAR_8->vm_end))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8,
     VAR_6->va & VAR_2,
     VAR_6->mfn, VAR_6->npages,
     VAR_8->vm_page_prot,
     VAR_7->domain, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->va += VAR_6->npages << VAR_3;

 return 0;
}
