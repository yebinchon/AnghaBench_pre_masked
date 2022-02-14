
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int (* get_mctrl ) (struct uart_port*) ;} ;


 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_0)
{
 if (VAR_0->get_mctrl)
  return VAR_0->get_mctrl(VAR_0);
 return FUNC_0(VAR_0);
}
