
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct AdapterControlBlock {scalar_t__ adapter_type; struct pci_dev* pdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct AdapterControlBlock *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pdev;

 if (VAR_2) {
  if (((VAR_4->adapter_type == VAR_0) && !VAR_3) ||
      FUNC_2(&VAR_5->dev, FUNC_0(64)))
   goto dma32;
  if (FUNC_1(&VAR_5->dev, FUNC_0(64)) ||
      FUNC_3(&VAR_5->dev, FUNC_0(64))) {
   FUNC_4("arcmsr: set DMA 64 mask failed\n");
   return -VAR_1;
  }
 } else {
dma32:
  if (FUNC_2(&VAR_5->dev, FUNC_0(32)) ||
      FUNC_1(&VAR_5->dev, FUNC_0(32)) ||
      FUNC_3(&VAR_5->dev, FUNC_0(32))) {
   FUNC_4("arcmsr: set DMA 32-bit mask failed\n");
   return -VAR_1;
  }
 }
 return 0;
}
