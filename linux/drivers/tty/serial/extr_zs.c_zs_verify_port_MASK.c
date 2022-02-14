
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_port {int clk_mode; } ;
struct uart_port {scalar_t__ irq; int uartclk; } ;
struct serial_struct {scalar_t__ type; scalar_t__ irq; int baud_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct zs_port* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_3, struct serial_struct *VAR_4)
{
 struct zs_port *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = 0;

 if (VAR_4->type != VAR_1 && VAR_4->type != VAR_2)
  VAR_6 = -VAR_0;
 if (VAR_4->irq != VAR_3->irq)
  VAR_6 = -VAR_0;
 if (VAR_4->baud_base != VAR_3->uartclk / VAR_5->clk_mode / 4)
  VAR_6 = -VAR_0;
 return VAR_6;
}
