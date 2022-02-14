
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct serial_struct {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct uart_port *VAR_3, struct serial_struct *VAR_4)
{
 if ((VAR_4->type != VAR_2) && (VAR_4->type != VAR_1))
  return -VAR_0;
 return 0;
}
