
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct path {int dummy; } ;
struct file {struct path f_path; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct file*) ;
 struct task_struct* FUNC_2 (int ) ;
 struct file* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct path*) ;
 int FUNC_5 (struct task_struct*) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_1, struct path *VAR_2)
{
 struct task_struct *VAR_3;
 struct file *VAR_4;

 VAR_3 = FUNC_2(FUNC_0(VAR_1));
 if (!VAR_3)
  return -VAR_0;
 VAR_4 = FUNC_3(VAR_3);
 FUNC_5(VAR_3);
 if (VAR_4) {
  *VAR_2 = VAR_4->f_path;
  FUNC_4(&VAR_4->f_path);
  FUNC_1(VAR_4);
  return 0;
 } else
  return -VAR_0;
}
