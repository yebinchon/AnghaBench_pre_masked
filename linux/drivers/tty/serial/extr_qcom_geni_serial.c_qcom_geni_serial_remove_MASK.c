
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_driver {int dummy; } ;
struct TYPE_2__ {struct uart_driver* private_data; } ;
struct qcom_geni_serial_port {TYPE_1__ uport; } ;
struct platform_device {int dummy; } ;


 struct qcom_geni_serial_port* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct uart_driver*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct qcom_geni_serial_port *VAR_1 = FUNC_0(VAR_0);
 struct uart_driver *VAR_2 = VAR_1->uport.private_data;

 FUNC_1(VAR_2, &VAR_1->uport);
 return 0;
}
