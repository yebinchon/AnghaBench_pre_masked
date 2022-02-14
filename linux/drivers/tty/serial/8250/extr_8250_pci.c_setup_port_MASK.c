
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regshift; int * membase; void* mapbase; void* iobase; int iotype; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial_private {struct pci_dev* dev; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,int) ;
 void* FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int,int ) ;
 int ** FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_4(struct serial_private *VAR_6, struct uart_8250_port *VAR_7,
    int VAR_8, int VAR_9, int VAR_10)
{
 struct pci_dev *VAR_11 = VAR_6->dev;

 if (VAR_8 >= VAR_3)
  return -VAR_0;

 if (FUNC_0(VAR_11, VAR_8) & VAR_2) {
  if (!FUNC_2(VAR_11, VAR_8, 0) && !FUNC_3(VAR_11))
   return -VAR_1;

  VAR_7->port.iotype = VAR_4;
  VAR_7->port.iobase = 0;
  VAR_7->port.mapbase = FUNC_1(VAR_11, VAR_8) + VAR_9;
  VAR_7->port.membase = FUNC_3(VAR_11)[VAR_8] + VAR_9;
  VAR_7->port.regshift = VAR_10;
 } else {
  VAR_7->port.iotype = VAR_5;
  VAR_7->port.iobase = FUNC_1(VAR_11, VAR_8) + VAR_9;
  VAR_7->port.mapbase = 0;
  VAR_7->port.membase = ((void*)0);
  VAR_7->port.regshift = 0;
 }
 return 0;
}
