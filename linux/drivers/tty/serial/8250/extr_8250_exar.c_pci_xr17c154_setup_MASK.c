
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int uartclk; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct pci_dev {int dummy; } ;
struct exar8250 {int dummy; } ;


 int FUNC_0 (struct exar8250*,struct pci_dev*,int,unsigned int,struct uart_8250_port*) ;

__attribute__((used)) static int
FUNC_1(struct exar8250 *VAR_0, struct pci_dev *VAR_1,
     struct uart_8250_port *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_3 * 0x200;
 unsigned int VAR_5 = 921600;

 VAR_2->port.uartclk = VAR_5 * 16;
 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_2);
}
