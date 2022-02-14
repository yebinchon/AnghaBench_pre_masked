
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; struct vm_area_struct* vm_next; int vm_page_prot; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 while (VAR_1 && FUNC_0(VAR_1->vm_page_prot)) {
  if (VAR_1->vm_end >= VAR_2)
   return 0;
  VAR_1 = VAR_1->vm_next;
 }

 return -VAR_0;
}
