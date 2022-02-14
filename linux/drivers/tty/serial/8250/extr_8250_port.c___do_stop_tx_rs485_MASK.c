
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ rs485; } ;
struct uart_8250_port {int ier; TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct uart_8250_port *VAR_4)
{
 FUNC_1(VAR_4);






 if (!(VAR_4->port.rs485.flags & VAR_0)) {
  FUNC_0(VAR_4);

  VAR_4->ier |= VAR_3 | VAR_2;
  FUNC_2(&VAR_4->port, VAR_1, VAR_4->ier);
 }
}
