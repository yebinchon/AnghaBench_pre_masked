
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_port {int rx_mode; struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct s3c24xx_uart_port *VAR_9)
{
 struct uart_port *VAR_10 = &VAR_9->port;
 unsigned int VAR_11;


 VAR_11 = FUNC_0(VAR_10, VAR_0);
 VAR_11 &= ~(VAR_7 |
   VAR_3 |
   VAR_2 |
   VAR_6 |
   VAR_5);
 VAR_11 |= 0xf << VAR_8 |
   VAR_6 |
   VAR_4;
 FUNC_1(VAR_10, VAR_0, VAR_11);

 VAR_9->rx_mode = VAR_1;
}
