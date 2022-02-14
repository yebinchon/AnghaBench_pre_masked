
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
typedef int pid_t ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (int ) ;
 struct task_struct* FUNC_1 (int ,int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (char const*,unsigned long*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(int VAR_5, const char **VAR_6)
{
 struct task_struct *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_5 > 1)
  return VAR_0;

 if (VAR_5) {
  if (FUNC_5(VAR_6[1], "R") == 0) {
   VAR_7 = FUNC_0(VAR_4);
  } else {
   VAR_9 = FUNC_4(VAR_6[1], &VAR_8);
   if (VAR_9)
    return VAR_1;

   VAR_7 = FUNC_1((pid_t)VAR_8, &VAR_2);
   if (!VAR_7) {
    FUNC_2("No task with pid=%d\n", (pid_t)VAR_8);
    return 0;
   }
  }
  FUNC_3(VAR_7);
 }
 FUNC_2("KDB current process is %s(pid=%d)\n",
     VAR_3->comm,
     VAR_3->pid);

 return 0;
}
