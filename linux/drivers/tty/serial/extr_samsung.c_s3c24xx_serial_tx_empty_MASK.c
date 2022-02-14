
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_info {unsigned long tx_fifomask; unsigned long tx_fifofull; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct uart_port*,int ) ;
 struct s3c24xx_uart_info* FUNC_1 (struct uart_port*) ;
 unsigned int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_3)
{
 struct s3c24xx_uart_info *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5 = FUNC_0(VAR_3, VAR_2);
 unsigned long VAR_6 = FUNC_0(VAR_3, VAR_0);

 if (VAR_6 & VAR_1) {
  if ((VAR_5 & VAR_4->tx_fifomask) != 0 ||
      (VAR_5 & VAR_4->tx_fifofull))
   return 0;

  return 1;
 }

 return FUNC_2(VAR_3);
}
