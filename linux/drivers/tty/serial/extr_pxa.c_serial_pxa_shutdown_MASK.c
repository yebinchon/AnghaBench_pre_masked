
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int mctrl; int irq; } ;
struct uart_pxa_port {TYPE_1__ port; scalar_t__ ier; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct uart_pxa_port*) ;
 int FUNC_1 (struct uart_pxa_port*,int ) ;
 int FUNC_2 (struct uart_pxa_port*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_8)
{
 struct uart_pxa_port *VAR_9 = (struct uart_pxa_port *)VAR_8;
 unsigned long VAR_10;

 FUNC_0(VAR_9->port.irq, VAR_9);




 VAR_9->ier = 0;
 FUNC_2(VAR_9, VAR_5, 0);

 FUNC_4(&VAR_9->port.lock, VAR_10);
 VAR_9->port.mctrl &= ~VAR_0;
 FUNC_3(&VAR_9->port, VAR_9->port.mctrl);
 FUNC_5(&VAR_9->port.lock, VAR_10);




 FUNC_2(VAR_9, VAR_6, FUNC_1(VAR_9, VAR_6) & ~VAR_7);
 FUNC_2(VAR_9, VAR_1, VAR_4 |
      VAR_2 |
      VAR_3);
 FUNC_2(VAR_9, VAR_1, 0);
}
