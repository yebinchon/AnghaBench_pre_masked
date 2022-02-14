
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int c_ospeed; int c_ispeed; } ;
struct tty_struct {int termios_rwsem; TYPE_2__ termios; TYPE_1__* driver; } ;
struct TYPE_4__ {TYPE_2__ init_termios; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 FUNC_0(&VAR_0->termios_rwsem);
 VAR_0->termios = VAR_0->driver->init_termios;
 VAR_0->termios.c_ispeed = FUNC_2(&VAR_0->termios);
 VAR_0->termios.c_ospeed = FUNC_1(&VAR_0->termios);
 FUNC_3(&VAR_0->termios_rwsem);
}
