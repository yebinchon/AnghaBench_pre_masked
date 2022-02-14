
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;
struct sci_port {int rx_trigger; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct uart_port* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,long*) ;
 int FUNC_2 (struct uart_port*,int) ;
 struct sci_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct uart_port *VAR_6 = FUNC_0(VAR_2);
 struct sci_port *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;
 long VAR_9;

 VAR_8 = FUNC_1(VAR_4, 0, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_7->rx_trigger = FUNC_2(VAR_6, VAR_9);
 if (VAR_6->type == VAR_0 || VAR_6->type == VAR_1)
  FUNC_2(VAR_6, 1);

 return VAR_5;
}
