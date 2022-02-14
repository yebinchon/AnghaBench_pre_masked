
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int (* set_rts ) (struct uart_port*,unsigned int) ;} ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct uart_port *VAR_2, unsigned int VAR_3)
{
 VAR_1->set_rts(VAR_2, VAR_3 & VAR_0);
}
