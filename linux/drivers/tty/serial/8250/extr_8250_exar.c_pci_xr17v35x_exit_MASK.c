
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct platform_device* private_data; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct platform_device {int dummy; } ;
struct pci_dev {int dummy; } ;
struct exar8250 {int * line; } ;


 struct exar8250* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct platform_device*) ;
 struct uart_8250_port* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct exar8250 *VAR_1 = FUNC_0(VAR_0);
 struct uart_8250_port *VAR_2 = FUNC_2(VAR_1->line[0]);
 struct platform_device *VAR_3 = VAR_2->port.private_data;

 FUNC_1(VAR_3);
 VAR_2->port.private_data = ((void*)0);
}
