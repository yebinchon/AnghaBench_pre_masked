
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 & (1 << 4))
  return VAR_0;
 else
  return 0;
}
