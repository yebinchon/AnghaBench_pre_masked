
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_ops; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct file*) ;
 struct inode* FUNC_4 (struct file*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct inode *VAR_4 = FUNC_4(VAR_2);
 int VAR_5;

 if (FUNC_5(FUNC_2(FUNC_0(VAR_4))))
  return -VAR_0;


 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_2);
 VAR_3->vm_ops = &VAR_1;
 return 0;
}
