
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct s3c24xx_uart_port {int tx_mode; int tx_irq; struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct uart_port*,int ) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int ,int ) ;
 int FUNC_5 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct s3c24xx_uart_port *VAR_9)
{
 struct uart_port *VAR_10 = &VAR_9->port;
 u32 VAR_11;


 if (FUNC_3(VAR_10))
  FUNC_4(VAR_10, VAR_8, VAR_7);
 else
  FUNC_0(VAR_9->tx_irq);


 VAR_11 = FUNC_2(VAR_10, VAR_0);
 VAR_11 &= ~(VAR_4 | VAR_6);
 VAR_11 |= (FUNC_1() >= 16) ?
  VAR_3 : VAR_2;
 VAR_11 |= VAR_5;
 FUNC_5(VAR_10, VAR_0, VAR_11);

 VAR_9->tx_mode = VAR_1;
}
