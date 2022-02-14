
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int (* get_divisor ) (struct uart_port*,unsigned int,unsigned int*) ;} ;


 unsigned int FUNC_0 (struct uart_port*,unsigned int,unsigned int*) ;
 unsigned int FUNC_1 (struct uart_port*,unsigned int,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_0,
        unsigned int VAR_1,
        unsigned int *VAR_2)
{
 if (VAR_0->get_divisor)
  return VAR_0->get_divisor(VAR_0, VAR_1, VAR_2);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
