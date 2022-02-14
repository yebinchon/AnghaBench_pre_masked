
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_private_data; int * vm_ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_6, struct vm_area_struct *VAR_7)
{


 VAR_7->vm_flags |= VAR_3 | VAR_4 | VAR_0 |
    VAR_2 | VAR_1;
 VAR_7->vm_ops = &VAR_5;
 VAR_7->vm_private_data = ((void*)0);

 return 0;
}
