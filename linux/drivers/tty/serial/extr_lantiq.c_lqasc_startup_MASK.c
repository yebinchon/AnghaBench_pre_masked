
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ membase; int uartclk; } ;
struct ltq_uart_port {TYPE_1__* soc; int lock; int freqclk; int clk; } ;
struct TYPE_2__ {int (* request_irq ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct uart_port*) ;
 struct ltq_uart_port* FUNC_8 (struct uart_port*) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct uart_port *VAR_26)
{
 struct ltq_uart_port *VAR_27 = FUNC_8(VAR_26);
 int VAR_28;
 unsigned long VAR_29;

 if (!FUNC_0(VAR_27->clk))
  FUNC_4(VAR_27->clk);
 VAR_26->uartclk = FUNC_3(VAR_27->freqclk);

 FUNC_5(&VAR_27->lock, VAR_29);
 FUNC_2(VAR_0 | VAR_1, (1 << VAR_2),
  VAR_26->membase + VAR_18);

 FUNC_1(0, VAR_26->membase + VAR_21);
 FUNC_1(
  ((VAR_25 << VAR_14) & VAR_13) |
  VAR_11 | VAR_12,
  VAR_26->membase + VAR_23);
 FUNC_1(
  ((VAR_24 << VAR_10) & VAR_9)
  | VAR_7 | VAR_8,
  VAR_26->membase + VAR_22);



 FUNC_9();
 FUNC_2(0, VAR_4 | VAR_3 | VAR_6 |
  VAR_5, VAR_26->membase + VAR_19);

 FUNC_6(&VAR_27->lock, VAR_29);

 VAR_28 = VAR_27->soc->request_irq(VAR_26);
 if (VAR_28)
  return VAR_28;

 FUNC_1(VAR_16 | VAR_15 | VAR_17,
  VAR_26->membase + VAR_20);
 return VAR_28;
}
