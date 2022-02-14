
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; int vm_flags; int * vm_ops; int vm_page_prot; } ;
struct ocxlflash_context {int psn_size; } ;
struct file {struct ocxlflash_context* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 struct ocxlflash_context *VAR_7 = VAR_5->private_data;

 if ((FUNC_1(VAR_6) + VAR_6->vm_pgoff) >
     (VAR_7->psn_size >> VAR_1))
  return -VAR_0;

 VAR_6->vm_flags |= VAR_2 | VAR_3;
 VAR_6->vm_page_prot = FUNC_0(VAR_6->vm_page_prot);
 VAR_6->vm_ops = &VAR_4;
 return 0;
}
