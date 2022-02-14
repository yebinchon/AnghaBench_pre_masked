
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* serial_in ) (TYPE_1__*,int) ;} ;
struct uart_8250_port {TYPE_1__ port; } ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_1(struct uart_8250_port *VAR_0, int VAR_1)
{
 return VAR_0->port.serial_in(&VAR_0->port, VAR_1);
}
