
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int membase; int dev; } ;
struct TYPE_2__ {int base; } ;
struct qcom_geni_serial_port {TYPE_1__ se; } ;
struct platform_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*,int ) ;
 struct qcom_geni_serial_port* FUNC_3 (struct uart_port*,struct uart_port*) ;
 struct platform_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_4(VAR_0->dev);
 struct qcom_geni_serial_port *VAR_2 = FUNC_3(VAR_0, VAR_0);

 VAR_0->membase = FUNC_2(VAR_1, 0);
 if (FUNC_0(VAR_0->membase))
  return FUNC_1(VAR_0->membase);
 VAR_2->se.base = VAR_0->membase;
 return 0;
}
