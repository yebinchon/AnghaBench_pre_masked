
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 if (!(VAR_5->vm_flags & (VAR_2 | VAR_1)))
  return -VAR_0;

 FUNC_0(VAR_4);
 VAR_5->vm_ops = &VAR_3;
 return 0;
}
