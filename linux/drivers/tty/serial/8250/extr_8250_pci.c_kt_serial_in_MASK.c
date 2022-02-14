
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ iobase; } ;
struct uart_8250_port {unsigned int ier; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct uart_8250_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_1, int VAR_2)
{
 struct uart_8250_port *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;
 VAR_4 = FUNC_0(VAR_1->iobase + VAR_2);
 if (VAR_2 == VAR_0) {
  if (VAR_4 == 0)
   VAR_4 = VAR_3->ier;
 }
 return VAR_4;
}
