
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {struct tty_struct* tty; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct tty_struct*) ;

void FUNC_3(struct task_struct *VAR_0)
{
 unsigned long VAR_1;
 struct tty_struct *VAR_2;
 FUNC_0(&VAR_0->sighand->siglock, VAR_1);
 VAR_2 = VAR_0->signal->tty;
 VAR_0->signal->tty = ((void*)0);
 FUNC_1(&VAR_0->sighand->siglock, VAR_1);
 FUNC_2(VAR_2);
}
