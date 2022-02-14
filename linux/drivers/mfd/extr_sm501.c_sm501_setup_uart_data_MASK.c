
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm501_devdata {int irq; TYPE_1__* io_res; scalar_t__ regs; } ;
struct plat_serial8250_port {int flags; int regshift; int uartclk; int irq; int iotype; scalar_t__ mapbase; scalar_t__ membase; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct sm501_devdata *VAR_4,
      struct plat_serial8250_port *VAR_5,
      unsigned int VAR_6)
{
 VAR_5->membase = VAR_4->regs + VAR_6;
 VAR_5->mapbase = VAR_4->io_res->start + VAR_6;
 VAR_5->iotype = VAR_3;
 VAR_5->irq = VAR_4->irq;
 VAR_5->flags = VAR_0 | VAR_2 | VAR_1;
 VAR_5->regshift = 2;
 VAR_5->uartclk = (9600 * 16);
}
