
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct privcmd_buf_vma_private* vm_private_data; } ;
struct privcmd_buf_vma_private {int users; struct privcmd_buf_private* file_priv; } ;
struct privcmd_buf_private {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct privcmd_buf_vma_private*) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_0)
{
 struct privcmd_buf_vma_private *VAR_1 = VAR_0->vm_private_data;
 struct privcmd_buf_private *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->file_priv;

 FUNC_0(&VAR_2->lock);

 VAR_1->users--;
 if (!VAR_1->users)
  FUNC_2(VAR_1);

 FUNC_1(&VAR_2->lock);
}
