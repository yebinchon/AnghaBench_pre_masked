
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct privcmd_buf_vma_private* vm_private_data; } ;
struct privcmd_buf_vma_private {TYPE_1__* file_priv; int users; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 struct privcmd_buf_vma_private *VAR_1 = VAR_0->vm_private_data;

 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->file_priv->lock);
 VAR_1->users++;
 FUNC_1(&VAR_1->file_priv->lock);
}
