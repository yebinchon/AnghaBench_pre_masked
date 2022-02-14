
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ktermios {int dummy; } ;
struct tty_struct {int index; struct ktermios termios; TYPE_1__* driver; } ;
struct TYPE_2__ {int flags; struct ktermios** termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ktermios* FUNC_0 (int,int ) ;

void FUNC_1(struct tty_struct *VAR_2)
{
 struct ktermios *VAR_3;
 int VAR_4 = VAR_2->index;


 if (VAR_2->driver->flags & VAR_1)
  return;


 VAR_3 = VAR_2->driver->termios[VAR_4];
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(sizeof(struct ktermios), VAR_0);
  if (VAR_3 == ((void*)0))
   return;
  VAR_2->driver->termios[VAR_4] = VAR_3;
 }
 *VAR_3 = VAR_2->termios;
}
