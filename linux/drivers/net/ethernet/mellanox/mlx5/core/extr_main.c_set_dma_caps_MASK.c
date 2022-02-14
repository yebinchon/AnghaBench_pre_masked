
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_5(VAR_0, FUNC_0(64));
 if (VAR_1) {
  FUNC_2(&VAR_0->dev, "Warning: couldn't set 64-bit PCI DMA mask\n");
  VAR_1 = FUNC_5(VAR_0, FUNC_0(32));
  if (VAR_1) {
   FUNC_1(&VAR_0->dev, "Can't set PCI DMA mask, aborting\n");
   return VAR_1;
  }
 }

 VAR_1 = FUNC_4(VAR_0, FUNC_0(64));
 if (VAR_1) {
  FUNC_2(&VAR_0->dev,
    "Warning: couldn't set 64-bit consistent PCI DMA mask\n");
  VAR_1 = FUNC_4(VAR_0, FUNC_0(32));
  if (VAR_1) {
   FUNC_1(&VAR_0->dev,
    "Can't set consistent PCI DMA mask, aborting\n");
   return VAR_1;
  }
 }

 FUNC_3(&VAR_0->dev, 2u * 1024 * 1024 * 1024);
 return VAR_1;
}
