
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int regshift; scalar_t__ membase; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct uart_8250_port *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->port.membase + (VAR_1 << VAR_0->port.regshift));
}
