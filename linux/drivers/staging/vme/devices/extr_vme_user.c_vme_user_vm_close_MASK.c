
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vme_user_vma_priv {unsigned int minor; int refcnt; } ;
struct vm_area_struct {struct vme_user_vma_priv* vm_private_data; } ;
struct TYPE_2__ {int mutex; int mmap_count; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct vme_user_vma_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_1)
{
 struct vme_user_vma_priv *VAR_2 = VAR_1->vm_private_data;
 unsigned int VAR_3 = VAR_2->minor;

 if (!FUNC_3(&VAR_2->refcnt))
  return;

 FUNC_1(&VAR_0[VAR_3].mutex);
 VAR_0[VAR_3].mmap_count--;
 FUNC_2(&VAR_0[VAR_3].mutex);

 FUNC_0(VAR_2);
}
