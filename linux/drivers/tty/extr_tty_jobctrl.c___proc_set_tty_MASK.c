
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tty_struct {int * session; int ctrl_lock; int * pgrp; } ;
struct TYPE_9__ {TYPE_1__* signal; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int * tty_old_pgrp; TYPE_2__* tty; } ;


 TYPE_4__* VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct tty_struct*,char*,int ) ;
 TYPE_2__* FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->ctrl_lock, VAR_2);




 FUNC_1(VAR_1->session);
 FUNC_1(VAR_1->pgrp);
 VAR_1->pgrp = FUNC_0(FUNC_4(VAR_0));
 FUNC_3(&VAR_1->ctrl_lock, VAR_2);
 VAR_1->session = FUNC_0(FUNC_5(VAR_0));
 if (VAR_0->signal->tty) {
  FUNC_6(VAR_1, "current tty %s not NULL!!\n",
     VAR_0->signal->tty->name);
  FUNC_8(VAR_0->signal->tty);
 }
 FUNC_1(VAR_0->signal->tty_old_pgrp);
 VAR_0->signal->tty = FUNC_7(VAR_1);
 VAR_0->signal->tty_old_pgrp = ((void*)0);
}
