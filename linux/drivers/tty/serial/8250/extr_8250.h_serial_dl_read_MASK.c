
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int (* dl_read ) (struct uart_8250_port*) ;} ;


 int FUNC_0 (struct uart_8250_port*) ;

__attribute__((used)) static inline int FUNC_1(struct uart_8250_port *VAR_0)
{
 return VAR_0->dl_read(VAR_0);
}
