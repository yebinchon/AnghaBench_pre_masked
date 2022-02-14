
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_1__* sighand; } ;
struct TYPE_4__ {scalar_t__ sa_handler; } ;
struct k_sigaction {TYPE_2__ sa; } ;
typedef int sigset_t ;
struct TYPE_3__ {struct k_sigaction* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_3, sigset_t *VAR_4,
        sigset_t *VAR_5)
{
 struct k_sigaction *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->sighand->action;
 for (VAR_7 = 1; VAR_7 <= VAR_2; ++VAR_7, ++VAR_6) {
  if (VAR_6->sa.sa_handler == VAR_1)
   FUNC_0(VAR_4, VAR_7);
  else if (VAR_6->sa.sa_handler != VAR_0)
   FUNC_0(VAR_5, VAR_7);
 }
}
