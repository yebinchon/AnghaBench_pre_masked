
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {struct cdns_uart* private_data; } ;
struct cdns_uart {scalar_t__ cts_override; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(struct uart_port *VAR_3)
{
 struct cdns_uart *VAR_4 = VAR_3->private_data;

 if (VAR_4->cts_override)
  return 0;

 return VAR_1 | VAR_2 | VAR_0;
}
