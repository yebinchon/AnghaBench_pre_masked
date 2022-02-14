
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct s3c24xx_uart_port {struct uart_port port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct s3c24xx_uart_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(void *VAR_1)
{
 struct s3c24xx_uart_port *VAR_2 = VAR_1;
 struct uart_port *VAR_3 = &VAR_2->port;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_3->lock, VAR_4);

 return VAR_0;
}
