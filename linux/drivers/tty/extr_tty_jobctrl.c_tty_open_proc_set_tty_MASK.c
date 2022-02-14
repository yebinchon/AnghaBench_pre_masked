
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int * session; } ;
struct file {int f_mode; } ;
struct TYPE_6__ {TYPE_1__* sighand; TYPE_2__* signal; } ;
struct TYPE_5__ {int tty; scalar_t__ leader; } ;
struct TYPE_4__ {int siglock; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

void FUNC_5(struct file *VAR_3, struct tty_struct *VAR_4)
{
 FUNC_1(&VAR_2);
 FUNC_3(&VAR_1->sighand->siglock);
 if (VAR_1->signal->leader &&
     !VAR_1->signal->tty &&
     VAR_4->session == ((void*)0)) {
  if (VAR_3->f_mode & VAR_0)
   FUNC_0(VAR_4);
 }
 FUNC_4(&VAR_1->sighand->siglock);
 FUNC_2(&VAR_2);
}
