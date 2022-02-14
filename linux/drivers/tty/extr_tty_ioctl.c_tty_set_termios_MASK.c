
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ktermios {int dummy; } ;
struct tty_struct {int termios_rwsem; struct ktermios termios; TYPE_2__* ops; TYPE_1__* driver; } ;
struct tty_ldisc {TYPE_3__* ops; } ;
struct TYPE_6__ {int (* set_termios ) (struct tty_struct*,struct ktermios*) ;} ;
struct TYPE_5__ {int (* set_termios ) (struct tty_struct*,struct ktermios*) ;} ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ subtype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*,struct ktermios*) ;
 int FUNC_3 (struct tty_struct*,struct ktermios*) ;
 int FUNC_4 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct ktermios*,struct ktermios*) ;
 int FUNC_7 (struct tty_struct*,struct ktermios*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct tty_struct *VAR_2, struct ktermios *VAR_3)
{
 struct ktermios VAR_4;
 struct tty_ldisc *VAR_5;

 FUNC_0(VAR_2->driver->type == VAR_1 &&
  VAR_2->driver->subtype == VAR_0);







 FUNC_1(&VAR_2->termios_rwsem);
 VAR_4 = VAR_2->termios;
 VAR_2->termios = *VAR_3;
 FUNC_7(VAR_2, &VAR_4);

 if (VAR_2->ops->set_termios)
  VAR_2->ops->set_termios(VAR_2, &VAR_4);
 else
  FUNC_6(&VAR_2->termios, &VAR_4);

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5 != ((void*)0)) {
  if (VAR_5->ops->set_termios)
   VAR_5->ops->set_termios(VAR_2, &VAR_4);
  FUNC_4(VAR_5);
 }
 FUNC_8(&VAR_2->termios_rwsem);
 return 0;
}
