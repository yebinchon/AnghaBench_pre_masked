
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_private_data; int * vm_ops; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, struct vm_area_struct *VAR_4)
{

 VAR_4->vm_ops = &VAR_2;
 VAR_4->vm_flags |= VAR_1 | VAR_0;
 VAR_4->vm_private_data = VAR_3->private_data;
 FUNC_0(VAR_4);
 return 0;
}
