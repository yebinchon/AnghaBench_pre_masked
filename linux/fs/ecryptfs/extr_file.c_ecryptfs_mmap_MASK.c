
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int mmap; } ;


 int VAR_0 ;
 struct file* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct file *VAR_3 = FUNC_0(VAR_1);





 if (!VAR_3->f_op->mmap)
  return -VAR_0;
 return FUNC_1(VAR_1, VAR_2);
}
