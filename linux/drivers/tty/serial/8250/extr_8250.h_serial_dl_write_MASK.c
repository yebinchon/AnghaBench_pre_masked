
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int (* dl_write ) (struct uart_8250_port*,int) ;} ;


 int FUNC_0 (struct uart_8250_port*,int) ;

__attribute__((used)) static inline void FUNC_1(struct uart_8250_port *VAR_0, int VAR_1)
{
 VAR_0->dl_write(VAR_0, VAR_1);
}
