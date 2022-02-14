
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int private_data; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct pci_dev {scalar_t__ vendor; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_2,
      struct uart_8250_port *VAR_3)
{
 if (VAR_2->vendor == VAR_0)
  VAR_3->port.private_data =
   FUNC_0(VAR_2, VAR_1);

 return 0;
}
