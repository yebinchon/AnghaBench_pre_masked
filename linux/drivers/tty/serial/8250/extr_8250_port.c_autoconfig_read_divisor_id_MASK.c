
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*,unsigned int) ;
 unsigned char FUNC_2 (struct uart_8250_port*,int ) ;
 int FUNC_3 (struct uart_8250_port*,int ,unsigned char) ;

__attribute__((used)) static unsigned int FUNC_4(struct uart_8250_port *VAR_2)
{
 unsigned char VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_0, VAR_1);
 VAR_5 = FUNC_0(VAR_2);
 FUNC_1(VAR_2, 0);
 VAR_4 = FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_5);

 FUNC_3(VAR_2, VAR_0, VAR_3);

 return VAR_4;
}
