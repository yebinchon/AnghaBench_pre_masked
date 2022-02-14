
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_driver {int minor; int nr; TYPE_1__* tty_driver; } ;
struct TYPE_2__ {int name_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_driver*) ;

int FUNC_1(struct uart_driver *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 VAR_1->minor = VAR_0;
 VAR_1->nr += VAR_2;

 if (VAR_1->nr == VAR_2)
  VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == 0) {
  VAR_0 += VAR_2;
  VAR_1->tty_driver->name_base = VAR_1->minor - 64;
 }
 return VAR_3;
}
