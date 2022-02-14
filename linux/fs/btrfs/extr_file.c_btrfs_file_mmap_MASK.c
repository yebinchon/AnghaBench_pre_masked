
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int * vm_ops; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int readpage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct address_space *VAR_4 = VAR_2->f_mapping;

 if (!VAR_4->a_ops->readpage)
  return -VAR_0;

 FUNC_0(VAR_2);
 VAR_3->vm_ops = &VAR_1;

 return 0;
}
