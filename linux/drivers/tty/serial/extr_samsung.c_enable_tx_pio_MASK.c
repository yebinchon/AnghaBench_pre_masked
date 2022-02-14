
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct s3c24xx_uart_port {void* tx_mode; int tx_irq; void* tx_in_progress; struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,int ) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct s3c24xx_uart_port *VAR_7)
{
 struct uart_port *VAR_8 = &VAR_7->port;
 u32 VAR_9, VAR_10;


 VAR_7->tx_in_progress = VAR_2;
 VAR_10 = FUNC_1(VAR_8, VAR_1);
 FUNC_4(VAR_8, VAR_1, VAR_10);


 VAR_9 = FUNC_1(VAR_8, VAR_0);
 VAR_9 &= ~(VAR_4);
 VAR_9 |= VAR_3;
 FUNC_4(VAR_8, VAR_0, VAR_9);


 if (FUNC_3(VAR_8))
  FUNC_2(VAR_8, VAR_6,
      VAR_5);
 else
  FUNC_0(VAR_7->tx_irq);

 VAR_7->tx_mode = VAR_2;
}
