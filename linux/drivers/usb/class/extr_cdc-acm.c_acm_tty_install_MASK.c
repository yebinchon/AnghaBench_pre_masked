
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_lflag; } ;
struct tty_struct {struct acm* driver_data; TYPE_1__ termios; int index; } ;
struct tty_driver {int dummy; } ;
struct acm {int quirks; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acm* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_3(struct tty_driver *VAR_3, struct tty_struct *VAR_4)
{
 struct acm *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4->index);
 if (!VAR_5)
  return -VAR_2;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6)
  goto error_init_termios;





 if (VAR_5->quirks & VAR_0)
  VAR_4->termios.c_lflag &= ~VAR_1;

 VAR_4->driver_data = VAR_5;

 return 0;

error_init_termios:
 FUNC_1(&VAR_5->port);
 return VAR_6;
}
