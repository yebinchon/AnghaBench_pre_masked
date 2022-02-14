
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ rs485; } ;
struct uart_8250_port {TYPE_2__ port; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*,unsigned char) ;

__attribute__((used)) static inline void FUNC_2(struct uart_8250_port *VAR_2)
{
 unsigned char VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->port.rs485.flags & VAR_0)
  VAR_3 |= VAR_1;
 else
  VAR_3 &= ~VAR_1;
 FUNC_1(VAR_2, VAR_3);
}
