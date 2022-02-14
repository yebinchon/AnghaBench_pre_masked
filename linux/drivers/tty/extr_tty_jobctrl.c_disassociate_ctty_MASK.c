
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tty_struct {int ctrl_lock; struct pid* pgrp; struct pid* session; TYPE_1__* driver; } ;
struct pid {int dummy; } ;
struct TYPE_9__ {TYPE_3__* sighand; TYPE_2__* signal; } ;
struct TYPE_8__ {int siglock; } ;
struct TYPE_7__ {int tty; struct pid* tty_old_pgrp; int leader; } ;
struct TYPE_6__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 struct tty_struct* FUNC_0 () ;
 int FUNC_1 (struct pid*,int ,int) ;
 int FUNC_2 (struct pid*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_4__*) ;
 int VAR_4 ;
 struct pid* FUNC_11 (struct tty_struct*) ;
 struct tty_struct* FUNC_12 (int ) ;
 int FUNC_13 (struct tty_struct*) ;
 int FUNC_14 (struct tty_struct*) ;

void FUNC_15(int VAR_5)
{
 struct tty_struct *VAR_6;

 if (!VAR_3->signal->leader)
  return;

 VAR_6 = FUNC_0();
 if (VAR_6) {
  if (VAR_5 && VAR_6->driver->type != VAR_2) {
   FUNC_14(VAR_6);
  } else {
   struct pid *VAR_7 = FUNC_11(VAR_6);
   if (VAR_7) {
    FUNC_1(VAR_7, VAR_1, VAR_5);
    if (!VAR_5)
     FUNC_1(VAR_7, VAR_0, VAR_5);
    FUNC_2(VAR_7);
   }
  }
  FUNC_13(VAR_6);

 } else if (VAR_5) {
  struct pid *VAR_8;
  FUNC_6(&VAR_3->sighand->siglock);
  VAR_8 = VAR_3->signal->tty_old_pgrp;
  VAR_3->signal->tty_old_pgrp = ((void*)0);
  FUNC_8(&VAR_3->sighand->siglock);
  if (VAR_8) {
   FUNC_1(VAR_8, VAR_1, VAR_5);
   FUNC_1(VAR_8, VAR_0, VAR_5);
   FUNC_2(VAR_8);
  }
  return;
 }

 FUNC_6(&VAR_3->sighand->siglock);
 FUNC_2(VAR_3->signal->tty_old_pgrp);
 VAR_3->signal->tty_old_pgrp = ((void*)0);

 VAR_6 = FUNC_12(VAR_3->signal->tty);
 if (VAR_6) {
  unsigned long VAR_9;
  FUNC_7(&VAR_6->ctrl_lock, VAR_9);
  FUNC_2(VAR_6->session);
  FUNC_2(VAR_6->pgrp);
  VAR_6->session = ((void*)0);
  VAR_6->pgrp = ((void*)0);
  FUNC_9(&VAR_6->ctrl_lock, VAR_9);
  FUNC_13(VAR_6);
 }

 FUNC_8(&VAR_3->sighand->siglock);

 FUNC_3(&VAR_4);
 FUNC_5(FUNC_10(VAR_3));
 FUNC_4(&VAR_4);
}
