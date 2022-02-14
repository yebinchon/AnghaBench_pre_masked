
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* serial_out ) (TYPE_1__*,int,int) ;} ;
struct uart_8250_port {TYPE_1__ port; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct uart_8250_port *VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->port.serial_out(&VAR_0->port, VAR_1, VAR_2);
}
