
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int regshift; int type; int iotype; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_private {int dummy; } ;
struct pciserial_board {int reg_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct serial_private*,struct uart_8250_port*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct serial_private *VAR_4,
    const struct pciserial_board *VAR_5,
    struct uart_8250_port *VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_7, 0, VAR_5->reg_shift);
 VAR_6->port.iotype = VAR_3;
 VAR_6->port.type = VAR_0;
 VAR_6->port.flags = (VAR_6->port.flags | VAR_1 | VAR_2);
 VAR_6->port.regshift = 2;

 return VAR_8;
}
