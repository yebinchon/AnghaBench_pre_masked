
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct serial_struct {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct uart_port *VAR_2,
          struct serial_struct *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->type != VAR_1)
  VAR_4 = -VAR_0;

 return VAR_4;
}
