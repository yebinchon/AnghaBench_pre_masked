
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quirks; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct uart_8250_port *VAR_2)
{
 VAR_2->port.quirks |= VAR_1 ? VAR_0 : 0;
}
