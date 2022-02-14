
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int set_divisor; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_private {int dev; } ;
struct pciserial_board {unsigned int first_offset; int flags; int uart_offset; int reg_shift; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (struct serial_private*,struct uart_8250_port*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct serial_private *VAR_3,
    const struct pciserial_board *VAR_4,
    struct uart_8250_port *VAR_5, int VAR_6)
{
 unsigned int VAR_7, VAR_8 = VAR_4->first_offset, VAR_9;

 VAR_7 = FUNC_0(VAR_4->flags);
 if (VAR_4->flags & VAR_0)
  VAR_7 += VAR_6;
 else
  VAR_8 += VAR_6 * VAR_4->uart_offset;


 VAR_9 = (FUNC_1(VAR_3->dev, VAR_7) - VAR_4->first_offset) >>
  (VAR_4->reg_shift + 3);

 if (VAR_4->flags & VAR_1 && VAR_6 >= VAR_9)
  return 1;

 VAR_5->port.set_divisor = VAR_2;

 return FUNC_2(VAR_3, VAR_5, VAR_7, VAR_8, VAR_4->reg_shift);
}
