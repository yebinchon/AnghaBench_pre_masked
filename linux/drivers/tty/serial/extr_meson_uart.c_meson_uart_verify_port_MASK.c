
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; scalar_t__ irq; } ;
struct serial_struct {scalar_t__ irq; int baud_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct uart_port *VAR_2,
      struct serial_struct *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->type != VAR_1)
  VAR_4 = -VAR_0;
 if (VAR_2->irq != VAR_3->irq)
  VAR_4 = -VAR_0;
 if (VAR_3->baud_base < 9600)
  VAR_4 = -VAR_0;
 return VAR_4;
}
