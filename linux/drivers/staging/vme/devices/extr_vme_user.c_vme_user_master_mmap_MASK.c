
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vme_user_vma_priv {unsigned int minor; int refcnt; } ;
struct vm_area_struct {struct vme_user_vma_priv* vm_private_data; int * vm_ops; } ;
struct TYPE_2__ {int mutex; int mmap_count; int resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct vme_user_vma_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,struct vm_area_struct*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_4, struct vm_area_struct *VAR_5)
{
 int VAR_6;
 struct vme_user_vma_priv *VAR_7;

 FUNC_1(&VAR_2[VAR_4].mutex);

 VAR_6 = FUNC_4(VAR_2[VAR_4].resource, VAR_5);
 if (VAR_6) {
  FUNC_2(&VAR_2[VAR_4].mutex);
  return VAR_6;
 }

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_2(&VAR_2[VAR_4].mutex);
  return -VAR_0;
 }

 VAR_7->minor = VAR_4;
 FUNC_3(&VAR_7->refcnt, 1);
 VAR_5->vm_ops = &VAR_3;
 VAR_5->vm_private_data = VAR_7;

 VAR_2[VAR_4].mmap_count++;

 FUNC_2(&VAR_2[VAR_4].mutex);

 return 0;
}
