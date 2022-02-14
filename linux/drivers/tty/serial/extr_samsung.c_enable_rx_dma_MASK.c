
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
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct s3c24xx_uart_port *VAR_11)
{
 struct uart_port *VAR_12 = &VAR_11->port;
 unsigned int VAR_13;


 VAR_13 = FUNC_0(VAR_12, VAR_0);
 VAR_13 &= ~(VAR_5 |
   VAR_9 |
   VAR_3 |
   VAR_2 |
   VAR_8 |
   VAR_7);
 VAR_13 |= VAR_4 |
   0xf << VAR_10 |
   VAR_3 |
   VAR_8 |
   VAR_6;
 FUNC_1(VAR_12, VAR_0, VAR_13);

 VAR_11->rx_mode = VAR_1;
}
