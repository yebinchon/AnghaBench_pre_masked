
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_user_vma_priv {int refcnt; } ;
struct vm_area_struct {struct vme_user_vma_priv* vm_private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_0)
{
 struct vme_user_vma_priv *VAR_1 = VAR_0->vm_private_data;

 FUNC_0(&VAR_1->refcnt);
}
