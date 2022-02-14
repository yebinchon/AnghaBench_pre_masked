
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct gntalloc_vma_private_data* vm_private_data; } ;
struct gntalloc_vma_private_data {int users; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_1)
{
 struct gntalloc_vma_private_data *VAR_2 = VAR_1->vm_private_data;

 if (!VAR_2)
  return;

 FUNC_0(&VAR_0);
 VAR_2->users++;
 FUNC_1(&VAR_0);
}
