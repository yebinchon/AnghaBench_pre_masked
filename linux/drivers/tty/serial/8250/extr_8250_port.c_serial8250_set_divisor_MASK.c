
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int (* set_divisor ) (struct uart_port*,unsigned int,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct uart_port*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct uart_port*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 if (VAR_0->set_divisor)
  VAR_0->set_divisor(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
