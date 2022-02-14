
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ f_version; } ;
struct dir_context {scalar_t__ pos; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct dir_context*) ;
 struct inode* FUNC_1 (struct file*) ;
 struct task_struct* FUNC_2 (int ,int,scalar_t__,struct pid_namespace*) ;
 struct task_struct* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct file*,struct dir_context*,char*,unsigned int,int ,struct task_struct*,int *) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 struct pid_namespace* FUNC_7 (struct inode*) ;
 int VAR_1 ;
 int FUNC_8 (struct task_struct*) ;
 unsigned int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (struct task_struct*,struct pid_namespace*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_2, struct dir_context *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2);
 struct task_struct *VAR_5;
 struct pid_namespace *VAR_6;
 int VAR_7;

 if (FUNC_5(VAR_4))
  return -VAR_0;

 if (!FUNC_0(VAR_2, VAR_3))
  return 0;




 VAR_6 = FUNC_7(VAR_4);
 VAR_7 = (int)VAR_2->f_version;
 VAR_2->f_version = 0;
 for (VAR_5 = FUNC_2(FUNC_6(VAR_4), VAR_7, VAR_3->pos - 2, VAR_6);
      VAR_5;
      VAR_5 = FUNC_3(VAR_5), VAR_3->pos++) {
  char VAR_8[10 + 1];
  unsigned int VAR_9;
  VAR_7 = FUNC_10(VAR_5, VAR_6);
  VAR_9 = FUNC_9(VAR_8, sizeof(VAR_8), "%u", VAR_7);
  if (!FUNC_4(VAR_2, VAR_3, VAR_8, VAR_9,
    VAR_1, VAR_5, ((void*)0))) {


   VAR_2->f_version = (u64)VAR_7;
   FUNC_8(VAR_5);
   break;
  }
 }

 return 0;
}
