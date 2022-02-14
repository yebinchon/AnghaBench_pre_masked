
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,struct vm_area_struct*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_3->vm_ops = &VAR_1;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_2);

 return 0;
}
