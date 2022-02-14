
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct sifive_serial_port {int clk_notifier; int clk; TYPE_1__ port; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct sifive_serial_port*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct sifive_serial_port*) ;
 struct sifive_serial_port* FUNC_3 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct sifive_serial_port *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_2);
 FUNC_4(&VAR_0, &VAR_2->port);
 FUNC_2(VAR_2->port.irq, VAR_2);
 FUNC_1(VAR_2->clk, &VAR_2->clk_notifier);

 return 0;
}
