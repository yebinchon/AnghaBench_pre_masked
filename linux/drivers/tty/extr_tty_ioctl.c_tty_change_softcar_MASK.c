
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ktermios {int c_cflag; } ;
struct tty_struct {int termios_rwsem; TYPE_1__* ops; struct ktermios termios; } ;
struct TYPE_2__ {int (* set_termios ) (struct tty_struct*,struct ktermios*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*,struct ktermios*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = VAR_3 ? VAR_0 : 0;
 struct ktermios VAR_6;

 FUNC_1(&VAR_2->termios_rwsem);
 VAR_6 = VAR_2->termios;
 VAR_2->termios.c_cflag &= ~VAR_0;
 VAR_2->termios.c_cflag |= VAR_5;
 if (VAR_2->ops->set_termios)
  VAR_2->ops->set_termios(VAR_2, &VAR_6);
 if (FUNC_0(VAR_2) != VAR_5)
  VAR_4 = -VAR_1;
 FUNC_3(&VAR_2->termios_rwsem);
 return VAR_4;
}
