
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int * vm_ops; } ;
struct TYPE_2__ {int mnt; } ;
struct file {TYPE_1__ f_path; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;

 VAR_3 = FUNC_2(FUNC_0(VAR_1),
        VAR_1->f_path.mnt, &VAR_4, 1);
 if (VAR_3 < 0) {
  FUNC_1(VAR_3);
  goto out;
 }
 FUNC_3(FUNC_0(VAR_1), VAR_4);
out:
 VAR_2->vm_ops = &VAR_0;
 return 0;
}
