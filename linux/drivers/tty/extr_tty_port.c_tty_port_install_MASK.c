
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty_port* port; } ;
struct tty_port {int dummy; } ;
struct tty_driver {int dummy; } ;


 int FUNC_0 (struct tty_driver*,struct tty_struct*) ;

int FUNC_1(struct tty_port *VAR_0, struct tty_driver *VAR_1,
  struct tty_struct *VAR_2)
{
 VAR_2->port = VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
