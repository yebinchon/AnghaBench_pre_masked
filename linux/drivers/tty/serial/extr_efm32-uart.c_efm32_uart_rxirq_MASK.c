
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int overrun; } ;
struct uart_port {int lock; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct efm32_uart_port {struct uart_port port; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct efm32_uart_port*,int ) ;
 int FUNC_1 (struct efm32_uart_port*) ;
 int FUNC_2 (struct efm32_uart_port*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_port*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct efm32_uart_port *VAR_9 = VAR_8;
 u32 VAR_10 = FUNC_0(VAR_9, VAR_3);
 int VAR_11 = VAR_1;
 struct uart_port *VAR_12 = &VAR_9->port;
 struct tty_port *VAR_13 = &VAR_12->state->port;

 FUNC_3(&VAR_12->lock);

 if (VAR_10 & VAR_5) {
  FUNC_2(VAR_9, VAR_5, VAR_4);
  FUNC_1(VAR_9);

  VAR_11 = VAR_0;
 }

 if (VAR_10 & VAR_6) {
  FUNC_2(VAR_9, VAR_6, VAR_4);
  VAR_12->icount.overrun++;
  FUNC_6(VAR_13, 0, VAR_2);

  VAR_11 = VAR_0;
 }

 FUNC_4(&VAR_12->lock);

 FUNC_5(VAR_13);

 return VAR_11;
}
