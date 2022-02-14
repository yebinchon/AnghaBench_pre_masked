
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct serial_struct {scalar_t__ type; } ;
struct s3c24xx_uart_info {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct s3c24xx_uart_info* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static int
FUNC_1(struct uart_port *VAR_2, struct serial_struct *VAR_3)
{
 struct s3c24xx_uart_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->type != VAR_1 && VAR_3->type != VAR_4->type)
  return -VAR_0;

 return 0;
}
