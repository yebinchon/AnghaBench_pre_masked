
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct coredump_params {TYPE_1__* siginfo; } ;
struct TYPE_4__ {int pid; int comm; } ;
struct TYPE_3__ {int si_signo; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct coredump_params *VAR_1)
{
 FUNC_0("Process %s:%d received signr %d and should have core dumped\n",
  VAR_0->comm, VAR_0->pid, VAR_1->siginfo->si_signo);
 return 1;
}
