
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int ctrl_lock; struct pid* pgrp; } ;
struct pid {int dummy; } ;
struct TYPE_5__ {TYPE_1__* signal; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct pid*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct pid* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct tty_struct*,char*,int) ;

int FUNC_10(struct tty_struct *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 struct pid *VAR_8, *VAR_9;
 int VAR_10 = 0;

 if (VAR_4->signal->tty != VAR_5)
  return 0;

 FUNC_3();
 VAR_8 = FUNC_8(VAR_4);

 FUNC_6(&VAR_5->ctrl_lock, VAR_7);
 VAR_9 = VAR_5->pgrp;
 FUNC_7(&VAR_5->ctrl_lock, VAR_7);

 if (VAR_9 && VAR_8 != VAR_9) {
  if (FUNC_1(VAR_6)) {
   if (VAR_6 == VAR_2)
    VAR_10 = -VAR_0;
  } else if (FUNC_0())
   VAR_10 = -VAR_0;
  else {
   FUNC_2(VAR_8, VAR_6, 1);
   FUNC_5(VAR_3);
   VAR_10 = -VAR_1;
  }
 }
 FUNC_4();

 if (!VAR_9)
  FUNC_9(VAR_5, "sig=%d, tty->pgrp == NULL!\n", VAR_6);

 return VAR_10;
}
