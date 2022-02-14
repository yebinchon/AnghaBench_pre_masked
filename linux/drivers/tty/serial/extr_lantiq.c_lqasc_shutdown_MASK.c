
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ membase; } ;
struct ltq_uart_port {int clk; int lock; TYPE_1__* soc; } ;
struct TYPE_2__ {int (* free_irq ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct uart_port*) ;
 struct ltq_uart_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_8(struct uart_port *VAR_7)
{
 struct ltq_uart_port *VAR_8 = FUNC_7(VAR_7);
 unsigned long VAR_9;

 VAR_8->soc->free_irq(VAR_7);

 FUNC_4(&VAR_8->lock, VAR_9);
 FUNC_1(0, VAR_7->membase + VAR_4);
 FUNC_2(VAR_0, VAR_1,
  VAR_7->membase + VAR_5);
 FUNC_2(VAR_2, VAR_3,
  VAR_7->membase + VAR_6);
 FUNC_5(&VAR_8->lock, VAR_9);
 if (!FUNC_0(VAR_8->clk))
  FUNC_3(VAR_8->clk);
}
