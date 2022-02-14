
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ktermios {int c_ospeed; int c_ispeed; int c_line; } ;
struct tty_struct {int index; struct ktermios termios; TYPE_1__* driver; } ;
struct TYPE_2__ {int flags; struct ktermios init_termios; struct ktermios** termios; } ;


 int VAR_0 ;
 int FUNC_0 (struct ktermios*) ;
 int FUNC_1 (struct ktermios*) ;

void FUNC_2(struct tty_struct *VAR_1)
{
 struct ktermios *VAR_2;
 int VAR_3 = VAR_1->index;

 if (VAR_1->driver->flags & VAR_0)
  VAR_1->termios = VAR_1->driver->init_termios;
 else {

  VAR_2 = VAR_1->driver->termios[VAR_3];
  if (VAR_2 != ((void*)0)) {
   VAR_1->termios = *VAR_2;
   VAR_1->termios.c_line = VAR_1->driver->init_termios.c_line;
  } else
   VAR_1->termios = VAR_1->driver->init_termios;
 }

 VAR_1->termios.c_ispeed = FUNC_1(&VAR_1->termios);
 VAR_1->termios.c_ospeed = FUNC_0(&VAR_1->termios);
}
