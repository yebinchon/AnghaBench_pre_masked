
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; } ;
struct tty_struct {TYPE_1__ termios; struct moxa_port* driver_data; } ;
struct moxa_port {int port; int cflag; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct moxa_port *VAR_2 = VAR_0->driver_data;
 VAR_2->cflag = VAR_0->termios.c_cflag;
 FUNC_0(&VAR_2->port, VAR_0, VAR_1);
}
