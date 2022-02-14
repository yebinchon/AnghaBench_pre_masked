
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {int c_cflag; } ;
struct tty_struct {struct ktermios termios; } ;
struct serport {struct tty_struct* tty; } ;
struct serdev_controller {int dummy; } ;
typedef enum serdev_parity { ____Placeholder_serdev_parity } serdev_parity ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct serport* FUNC_0 (struct serdev_controller*) ;
 int FUNC_1 (struct tty_struct*,struct ktermios*) ;

__attribute__((used)) static int FUNC_2(struct serdev_controller *VAR_6,
         enum serdev_parity VAR_7)
{
 struct serport *VAR_8 = FUNC_0(VAR_6);
 struct tty_struct *VAR_9 = VAR_8->tty;
 struct ktermios VAR_10 = VAR_9->termios;

 VAR_10.c_cflag &= ~(VAR_2 | VAR_3 | VAR_0);
 if (VAR_7 != VAR_4) {
  VAR_10.c_cflag |= VAR_2;
  if (VAR_7 == VAR_5)
   VAR_10.c_cflag |= VAR_3;
 }

 FUNC_1(VAR_9, &VAR_10);

 if ((VAR_9->termios.c_cflag & (VAR_2 | VAR_3 | VAR_0)) !=
     (VAR_10.c_cflag & (VAR_2 | VAR_3 | VAR_0)))
  return -VAR_1;

 return 0;
}
