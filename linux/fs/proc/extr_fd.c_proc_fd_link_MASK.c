
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct path {int dummy; } ;
struct files_struct {int file_lock; } ;
struct file {struct path f_path; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 struct file* FUNC_1 (struct files_struct*,unsigned int) ;
 struct files_struct* FUNC_2 (struct task_struct*) ;
 struct task_struct* FUNC_3 (int ) ;
 int FUNC_4 (struct path*) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct files_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_1, struct path *VAR_2)
{
 struct files_struct *VAR_3 = ((void*)0);
 struct task_struct *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_3(FUNC_0(VAR_1));
 if (VAR_4) {
  VAR_3 = FUNC_2(VAR_4);
  FUNC_7(VAR_4);
 }

 if (VAR_3) {
  unsigned int VAR_6 = FUNC_5(FUNC_0(VAR_1));
  struct file *VAR_7;

  FUNC_8(&VAR_3->file_lock);
  VAR_7 = FUNC_1(VAR_3, VAR_6);
  if (VAR_7) {
   *VAR_2 = VAR_7->f_path;
   FUNC_4(&VAR_7->f_path);
   VAR_5 = 0;
  }
  FUNC_9(&VAR_3->file_lock);
  FUNC_6(VAR_3);
 }

 return VAR_5;
}
