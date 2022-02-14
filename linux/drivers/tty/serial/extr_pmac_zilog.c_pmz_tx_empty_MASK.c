
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_2)
{
 unsigned char VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_2));
 if (VAR_3 & VAR_1)
  return VAR_0;
 return 0;
}
