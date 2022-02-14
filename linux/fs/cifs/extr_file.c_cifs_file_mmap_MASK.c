
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct file*,struct vm_area_struct*) ;
 int FUNC_4 () ;

int FUNC_5(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_4();

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  FUNC_0(VAR_0, "Validation prior to mmap failed, error=%d\n",
    VAR_4);
 if (!VAR_4)
  VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_4)
  VAR_3->vm_ops = &VAR_1;

 FUNC_2(VAR_5);
 return VAR_4;
}
