
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct task_struct*,struct inode*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4;
 struct task_struct *VAR_5;

 if (VAR_3 & VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_4);

 if (VAR_5) {
  FUNC_2(VAR_5, VAR_4);
  FUNC_3(VAR_5);
  return 1;
 }
 return 0;
}
