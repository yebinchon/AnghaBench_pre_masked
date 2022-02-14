
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;
struct file_lock {int fl_pid; } ;
typedef int pid_t ;


 scalar_t__ FUNC_0 (struct file_lock*) ;
 scalar_t__ FUNC_1 (struct file_lock*) ;
 struct pid* FUNC_2 (int,struct pid_namespace*) ;
 struct pid_namespace VAR_0 ;
 int FUNC_3 (struct pid*,struct pid_namespace*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static pid_t FUNC_6(struct file_lock *VAR_1, struct pid_namespace *VAR_2)
{
 pid_t VAR_3;
 struct pid *VAR_4;

 if (FUNC_0(VAR_1))
  return -1;
 if (FUNC_1(VAR_1))
  return VAR_1->fl_pid;





 if (VAR_2 == &VAR_0)
  return (pid_t)VAR_1->fl_pid;

 FUNC_4();
 VAR_4 = FUNC_2(VAR_1->fl_pid, &VAR_0);
 VAR_3 = FUNC_3(VAR_4, VAR_2);
 FUNC_5();
 return VAR_3;
}
