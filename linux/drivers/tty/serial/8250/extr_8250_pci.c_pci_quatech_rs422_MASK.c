
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_8250_port {int dummy; } ;


 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*,int) ;

__attribute__((used)) static int FUNC_3(struct uart_8250_port *VAR_0)
{
 u8 VAR_1;
 int VAR_2 = 0;

 if (!FUNC_0(VAR_0))
  return 0;
 VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_0, 0xFF);
 if (FUNC_1(VAR_0))
  VAR_2 = 1;
 FUNC_2(VAR_0, VAR_1);
 return VAR_2;
}
