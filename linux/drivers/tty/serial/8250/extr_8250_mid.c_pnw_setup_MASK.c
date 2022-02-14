
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct pci_dev {int device; int devfn; int bus; } ;
struct mid8250 {int dma_index; int dma_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mid8250 *VAR_1, struct uart_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_2->dev);

 switch (VAR_3->device) {
 case 130:
  VAR_1->dma_index = 0;
  break;
 case 129:
  VAR_1->dma_index = 1;
  break;
 case 128:
  VAR_1->dma_index = 2;
  break;
 default:
  return -VAR_0;
 }

 VAR_1->dma_dev = FUNC_2(VAR_3->bus,
        FUNC_0(FUNC_1(VAR_3->devfn), 3));
 return 0;
}
