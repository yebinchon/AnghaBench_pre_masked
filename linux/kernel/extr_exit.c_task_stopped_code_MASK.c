
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int jobctl; int exit_code; TYPE_1__* signal; } ;
struct TYPE_2__ {int flags; int group_exit_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static int *FUNC_1(struct task_struct *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  if (FUNC_0(VAR_2) && !(VAR_2->jobctl & VAR_0))
   return &VAR_2->exit_code;
 } else {
  if (VAR_2->signal->flags & VAR_1)
   return &VAR_2->signal->group_exit_code;
 }
 return ((void*)0);
}
