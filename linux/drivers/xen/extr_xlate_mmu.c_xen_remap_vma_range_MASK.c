
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; int vm_page_prot; int vm_private_data; } ;
struct remap_pfn {int prot; int pages; int mm; } ;


 int FUNC_0 (int ,unsigned long,unsigned long,int ,struct remap_pfn*) ;
 int VAR_0 ;

int FUNC_1(struct vm_area_struct *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 struct remap_pfn VAR_4 = {
  .mm = VAR_1->vm_mm,
  .pages = VAR_1->vm_private_data,
  .prot = VAR_1->vm_page_prot,
 };

 return FUNC_0(VAR_1->vm_mm, VAR_2, VAR_3, VAR_0, &VAR_4);
}
