
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_match {TYPE_2__* port; TYPE_1__* driver; } ;
struct tty_driver {int minor_start; int major; } ;
struct device {scalar_t__ devt; } ;
typedef scalar_t__ dev_t ;
struct TYPE_4__ {scalar_t__ line; } ;
struct TYPE_3__ {struct tty_driver* tty_driver; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct uart_match *VAR_2 = VAR_1;
 struct tty_driver *VAR_3 = VAR_2->driver->tty_driver;
 dev_t VAR_4 = FUNC_0(VAR_3->major, VAR_3->minor_start) +
  VAR_2->port->line;

 return VAR_0->devt == VAR_4;
}
