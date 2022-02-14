
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int handle_irq; int membase; void* irq; int dev; } ;
struct pci_dev {int dev; } ;
struct hsu_dma_chip {int offset; int length; int regs; void* irq; int * dev; } ;
struct mid8250 {struct pci_dev* dma_dev; TYPE_1__* board; struct hsu_dma_chip dma_chip; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hsu_dma_chip*) ;
 int FUNC_2 (struct pci_dev*,int,int,int ) ;
 void* FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,unsigned int) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mid8250 *VAR_3, struct uart_port *VAR_4)
{
 struct hsu_dma_chip *VAR_5 = &VAR_3->dma_chip;
 struct pci_dev *VAR_6 = FUNC_6(VAR_4->dev);
 unsigned int VAR_7 = FUNC_0(VAR_3->board->flags);
 int VAR_8;

 FUNC_5(VAR_6);

 VAR_8 = FUNC_2(VAR_6, 1, 1, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4->irq = FUNC_3(VAR_6, 0);

 VAR_5->dev = &VAR_6->dev;
 VAR_5->irq = FUNC_3(VAR_6, 0);
 VAR_5->regs = VAR_4->membase;
 VAR_5->length = FUNC_4(VAR_6, VAR_7);
 VAR_5->offset = VAR_0;


 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  return 0;

 VAR_3->dma_dev = VAR_6;

 VAR_4->handle_irq = VAR_2;
 return 0;
}
