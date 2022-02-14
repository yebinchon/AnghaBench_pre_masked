
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct serial_struct {scalar_t__ irq; int baud_base; scalar_t__ type; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct uart_port *VAR_6, struct serial_struct *VAR_7)
{
 if (VAR_7->irq >= VAR_4 || VAR_7->irq < 0 ||
     VAR_7->baud_base < 9600 || VAR_7->type < VAR_3 ||
     VAR_7->type >= FUNC_0(VAR_5) || VAR_7->type == VAR_1 ||
     VAR_7->type == VAR_2)
  return -VAR_0;
 return 0;
}
