
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uartlite_data {int ulite_uart_driver; } ;
struct uart_port {scalar_t__ mapbase; struct uartlite_data* private_data; } ;
struct device {int dummy; } ;


 struct uart_port* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (int ,struct uart_port*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct uart_port *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 if (VAR_1) {
  struct uartlite_data *VAR_3 = VAR_1->private_data;

  VAR_2 = FUNC_2(VAR_3->ulite_uart_driver, VAR_1);
  FUNC_1(VAR_0, ((void*)0));
  VAR_1->mapbase = 0;
 }

 return VAR_2;
}
