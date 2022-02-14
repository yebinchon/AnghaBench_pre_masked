
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int irq; scalar_t__ read_status_mask; } ;
struct TYPE_2__ {int (* cw_disable_ints ) (struct uart_port*) ;int (* clock ) (struct uart_port*,int ) ;int (* set_imr ) (struct uart_port*,scalar_t__) ;int (* command ) (struct uart_port*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct uart_port*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,scalar_t__) ;
 int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_7(struct uart_port *VAR_3)
{

 VAR_2->command(VAR_3, VAR_0);
 if (!FUNC_6(VAR_3))
  VAR_2->command(VAR_3, VAR_1);

 VAR_3->read_status_mask = 0;
 VAR_2->set_imr(VAR_3, VAR_3->read_status_mask);

 if (VAR_2->clock)
  VAR_2->clock(VAR_3, 0);


 VAR_2->cw_disable_ints(VAR_3);


 FUNC_0(VAR_3->irq, VAR_3);
}
