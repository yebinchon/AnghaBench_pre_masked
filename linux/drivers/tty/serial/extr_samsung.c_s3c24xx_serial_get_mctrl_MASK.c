
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_5, VAR_0);

 if (VAR_6 & VAR_1)
  return VAR_2 | VAR_4 | VAR_3;
 else
  return VAR_2 | VAR_4;
}
