
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int dev; } ;
struct pci_dev {int dummy; } ;
struct lpss8250 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct lpss8250*,struct uart_port*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct lpss8250 *VAR_1, struct uart_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_4(VAR_2->dev);
 int VAR_4;

 FUNC_2(VAR_3);

 VAR_4 = FUNC_0(VAR_3, 1, 1, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->irq = FUNC_1(VAR_3, 0);

 FUNC_3(VAR_1, VAR_2);
 return 0;
}
