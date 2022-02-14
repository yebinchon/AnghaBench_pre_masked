
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;
struct sci_port {int hscif_tot; int rx_fifo_timeout; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct uart_port* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sci_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3,
          char *VAR_4)
{
 struct uart_port *VAR_5 = FUNC_0(VAR_2);
 struct sci_port *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (VAR_5->type == VAR_1)
  VAR_7 = VAR_6->hscif_tot >> VAR_0;
 else
  VAR_7 = VAR_6->rx_fifo_timeout;

 return FUNC_1(VAR_4, "%d\n", VAR_7);
}
