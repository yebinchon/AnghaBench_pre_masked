
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct file*,struct vm_area_struct*) ;
 int FUNC_6 () ;

int FUNC_7(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct inode *VAR_5 = FUNC_3(VAR_1);

 VAR_3 = FUNC_6();

 if (!FUNC_0(FUNC_1(VAR_5)))
  VAR_4 = FUNC_2(VAR_5);
 if (!VAR_4)
  VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (!VAR_4)
  VAR_2->vm_ops = &VAR_0;

 FUNC_4(VAR_3);
 return VAR_4;
}
