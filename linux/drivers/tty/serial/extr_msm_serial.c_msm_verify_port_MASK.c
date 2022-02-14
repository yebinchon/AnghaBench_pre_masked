
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ irq; } ;
struct serial_struct {scalar_t__ type; scalar_t__ irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_3, struct serial_struct *VAR_4)
{
 if (FUNC_0(VAR_4->type != VAR_2 && VAR_4->type != VAR_1))
  return -VAR_0;
 if (FUNC_0(VAR_3->irq != VAR_4->irq))
  return -VAR_0;
 return 0;
}
