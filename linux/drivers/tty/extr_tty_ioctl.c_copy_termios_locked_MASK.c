
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {int dummy; } ;
struct tty_struct {int termios_rwsem; struct ktermios termios_locked; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, struct ktermios *VAR_1)
{
 FUNC_0(&VAR_0->termios_rwsem);
 *VAR_1 = VAR_0->termios_locked;
 FUNC_1(&VAR_0->termios_rwsem);
}
