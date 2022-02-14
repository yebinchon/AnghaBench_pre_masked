
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {int c_cflag; } ;
struct tty_struct {struct ktermios termios; } ;
struct serport {struct tty_struct* tty; } ;
struct serdev_controller {int dummy; } ;


 int VAR_0 ;
 struct serport* FUNC_0 (struct serdev_controller*) ;
 int FUNC_1 (struct tty_struct*,struct ktermios*) ;

__attribute__((used)) static void FUNC_2(struct serdev_controller *VAR_1, bool VAR_2)
{
 struct serport *VAR_3 = FUNC_0(VAR_1);
 struct tty_struct *VAR_4 = VAR_3->tty;
 struct ktermios VAR_5 = VAR_4->termios;

 if (VAR_2)
  VAR_5.c_cflag |= VAR_0;
 else
  VAR_5.c_cflag &= ~VAR_0;

 FUNC_1(VAR_4, &VAR_5);
}
