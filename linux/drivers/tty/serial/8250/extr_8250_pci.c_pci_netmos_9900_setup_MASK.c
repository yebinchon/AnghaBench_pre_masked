
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_8250_port {int dummy; } ;
struct serial_private {TYPE_1__* dev; } ;
struct pciserial_board {int reg_shift; } ;
struct TYPE_2__ {scalar_t__ device; int subsystem_device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct serial_private*,struct pciserial_board const*,struct uart_8250_port*,int) ;
 int FUNC_1 (struct serial_private*,struct uart_8250_port*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct serial_private *VAR_1,
    const struct pciserial_board *VAR_2,
    struct uart_8250_port *VAR_3, int VAR_4)
{
 unsigned int VAR_5;

 if ((VAR_1->dev->device != VAR_0) &&
     (VAR_1->dev->subsystem_device & 0xff00) == 0x3000) {



  VAR_5 = 3 * VAR_4;

  return FUNC_1(VAR_1, VAR_3, VAR_5, 0, VAR_2->reg_shift);
 } else {
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
