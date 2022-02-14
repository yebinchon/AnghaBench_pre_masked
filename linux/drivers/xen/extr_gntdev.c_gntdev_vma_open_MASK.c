
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct gntdev_grant_map* vm_private_data; } ;
struct gntdev_grant_map {int users; } ;


 int FUNC_0 (char*,struct vm_area_struct*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 struct gntdev_grant_map *VAR_1 = VAR_0->vm_private_data;

 FUNC_0("gntdev_vma_open %p\n", VAR_0);
 FUNC_1(&VAR_1->users);
}
