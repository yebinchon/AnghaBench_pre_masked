
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int handle_irq; int dev; } ;
struct pci_dev {int bus; int devfn; } ;
struct mid8250 {int dma_index; int dma_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mid8250 *VAR_2, struct uart_port *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_3->dev);
 int VAR_5 = FUNC_1(VAR_4->devfn);






 if (VAR_5-- == 0)
  return -VAR_0;

 VAR_2->dma_index = VAR_5;
 VAR_2->dma_dev = FUNC_2(VAR_4->bus, FUNC_0(5, 0));

 VAR_3->handle_irq = VAR_1;
 return 0;
}
