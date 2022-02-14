
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct seq_file {struct inode* private; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct task_struct* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct seq_file*,struct task_struct*,int) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct inode *VAR_3 = VAR_1->private;
 struct task_struct *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_4, 0);
 FUNC_3(VAR_1, '\n');

 FUNC_2(VAR_4);

 return 0;
}
