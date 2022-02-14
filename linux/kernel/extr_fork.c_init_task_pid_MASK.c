
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; struct pid* thread_pid; } ;
struct pid {int dummy; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_2__ {struct pid** pids; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct task_struct *VAR_1, enum pid_type VAR_2, struct pid *VAR_3)
{
 if (VAR_2 == VAR_0)
  VAR_1->thread_pid = VAR_3;
 else
  VAR_1->signal->pids[VAR_2] = VAR_3;
}
