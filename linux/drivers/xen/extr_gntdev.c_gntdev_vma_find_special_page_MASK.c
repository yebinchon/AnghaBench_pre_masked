
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct gntdev_grant_map* vm_private_data; } ;
struct page {int dummy; } ;
struct gntdev_grant_map {unsigned long pages_vm_start; struct page** pages; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static struct page *FUNC_0(struct vm_area_struct *VAR_1,
       unsigned long VAR_2)
{
 struct gntdev_grant_map *VAR_3 = VAR_1->vm_private_data;

 return VAR_3->pages[(VAR_2 - VAR_3->pages_vm_start) >> VAR_0];
}
