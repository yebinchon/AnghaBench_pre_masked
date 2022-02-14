
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct gntdev_grant_map* vm_private_data; struct file* vm_file; } ;
struct gntdev_priv {int lock; } ;
struct gntdev_grant_map {int * vma; } ;
struct file {struct gntdev_priv* private_data; } ;


 int FUNC_0 (struct gntdev_priv*,struct gntdev_grant_map*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct vm_area_struct*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_1)
{
 struct gntdev_grant_map *VAR_2 = VAR_1->vm_private_data;
 struct file *VAR_3 = VAR_1->vm_file;
 struct gntdev_priv *VAR_4 = VAR_3->private_data;

 FUNC_3("gntdev_vma_close %p\n", VAR_1);
 if (VAR_0) {







  FUNC_1(&VAR_4->lock);
  VAR_2->vma = ((void*)0);
  FUNC_2(&VAR_4->lock);
 }
 VAR_1->vm_private_data = ((void*)0);
 FUNC_0(VAR_4, VAR_2);
}
