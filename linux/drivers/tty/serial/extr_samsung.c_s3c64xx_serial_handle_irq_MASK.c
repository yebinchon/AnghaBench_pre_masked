
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_port {struct uart_port port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct s3c24xx_uart_port *VAR_6 = VAR_5;
 struct uart_port *VAR_7 = &VAR_6->port;
 unsigned int VAR_8 = FUNC_0(VAR_7, VAR_3);
 irqreturn_t VAR_9 = VAR_0;

 if (VAR_8 & VAR_1) {
  VAR_9 = FUNC_1(VAR_4, VAR_5);
  FUNC_3(VAR_7, VAR_3, VAR_1);
 }
 if (VAR_8 & VAR_2) {
  VAR_9 = FUNC_2(VAR_4, VAR_5);
  FUNC_3(VAR_7, VAR_3, VAR_2);
 }
 return VAR_9;
}
