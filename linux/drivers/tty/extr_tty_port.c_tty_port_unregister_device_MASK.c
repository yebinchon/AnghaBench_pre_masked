
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct tty_driver {int dummy; } ;


 int FUNC_0 (struct tty_port*) ;
 int FUNC_1 (struct tty_driver*,unsigned int) ;

void FUNC_2(struct tty_port *VAR_0,
  struct tty_driver *VAR_1, unsigned VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == 0)
  return;

 FUNC_1(VAR_1, VAR_2);
}
