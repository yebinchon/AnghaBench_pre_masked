
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct tty_driver {unsigned int num; struct tty_port** ports; } ;


 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct tty_port *VAR_0,
  struct tty_driver *VAR_1, unsigned VAR_2)
{
 if (FUNC_0(VAR_2 >= VAR_1->num))
  return;
 VAR_1->ports[VAR_2] = VAR_0;
}
