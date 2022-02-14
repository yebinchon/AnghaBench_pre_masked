
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_8250_port {int dummy; } ;
struct serial_private {TYPE_1__* dev; } ;
struct pciserial_board {unsigned int first_offset; int uart_offset; int reg_shift; int flags; } ;
struct TYPE_2__ {int subsystem_device; } ;


 unsigned int FUNC_0 (int ) ;


 int FUNC_1 (struct serial_private*,struct uart_8250_port*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_2(struct serial_private *VAR_0,
  const struct pciserial_board *VAR_1,
  struct uart_8250_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_1->first_offset;
 unsigned int VAR_5 = FUNC_0(VAR_1->flags);

 switch (VAR_0->dev->subsystem_device) {
 case 128:
  if (VAR_3 == 3)
   VAR_3++;
  break;
 case 129:
  if (VAR_3 > 0)
   VAR_3++;
  if (VAR_3 > 2)
   VAR_3++;
  break;
 }
 if (VAR_3 > 2)
  VAR_4 = 0x18;

 VAR_4 += VAR_3 * VAR_1->uart_offset;

 return FUNC_1(VAR_0, VAR_2, VAR_5, VAR_4, VAR_1->reg_shift);
}
