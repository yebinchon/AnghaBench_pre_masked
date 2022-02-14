
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct task_struct*,unsigned int,int *) ;
 int FUNC_5 (struct task_struct*,struct inode*,int ) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_2, unsigned int VAR_3)
{
 struct task_struct *VAR_4;
 struct inode *VAR_5;
 unsigned int VAR_6;

 if (VAR_3 & VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_5);
 VAR_6 = FUNC_2(VAR_5);

 if (VAR_4) {
  fmode_t VAR_7;
  if (FUNC_4(VAR_4, VAR_6, &VAR_7)) {
   FUNC_5(VAR_4, VAR_5, VAR_7);
   FUNC_3(VAR_4);
   return 1;
  }
  FUNC_3(VAR_4);
 }
 return 0;
}
