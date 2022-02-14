
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid_namespace {scalar_t__ hide_pid; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*,int) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct pid_namespace*,struct task_struct*,int ) ;
 struct pid_namespace* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, int VAR_6)
{
 struct pid_namespace *VAR_7 = FUNC_3(VAR_5);
 struct task_struct *VAR_8;
 bool VAR_9;

 VAR_8 = FUNC_1(VAR_5);
 if (!VAR_8)
  return -VAR_2;
 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_4);
 FUNC_4(VAR_8);

 if (!VAR_9) {
  if (VAR_7->hide_pid == VAR_3) {






   return -VAR_0;
  }

  return -VAR_1;
 }
 return FUNC_0(VAR_5, VAR_6);
}
