
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ irq; scalar_t__ uartclk; scalar_t__ mapbase; } ;
struct serial_struct {scalar_t__ type; scalar_t__ irq; scalar_t__ io_type; scalar_t__ baud_base; void* iomem_base; scalar_t__ hub6; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct uart_port *VAR_4, struct serial_struct *VAR_5)
{
 if (VAR_5->type != VAR_2 && VAR_5->type != VAR_1)
  return -VAR_0;

 if ((VAR_5->irq != VAR_4->irq) ||
     (VAR_5->io_type != VAR_3) ||
     (VAR_5->baud_base != VAR_4->uartclk) ||
     (VAR_5->iomem_base != (void *)VAR_4->mapbase) ||
     (VAR_5->hub6 != 0))
  return -VAR_0;

 return 0;
}
