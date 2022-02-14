
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct sci_port {int rx_trigger; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct uart_port* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sci_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct uart_port *VAR_3 = FUNC_0(VAR_0);
 struct sci_port *VAR_4 = FUNC_2(VAR_3);

 return FUNC_1(VAR_2, "%d\n", VAR_4->rx_trigger);
}
