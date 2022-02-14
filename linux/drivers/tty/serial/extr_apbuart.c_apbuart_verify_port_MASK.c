
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct serial_struct {scalar_t__ type; scalar_t__ irq; int baud_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct uart_port *VAR_4,
          struct serial_struct *VAR_5)
{
 int VAR_6 = 0;
 if (VAR_5->type != VAR_3 && VAR_5->type != VAR_2)
  VAR_6 = -VAR_0;
 if (VAR_5->irq < 0 || VAR_5->irq >= VAR_1)
  VAR_6 = -VAR_0;
 if (VAR_5->baud_base < 9600)
  VAR_6 = -VAR_0;
 return VAR_6;
}
