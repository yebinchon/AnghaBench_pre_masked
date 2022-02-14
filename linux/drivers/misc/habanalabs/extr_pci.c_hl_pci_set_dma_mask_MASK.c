
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct hl_device {int dev; int dma_mask; struct pci_dev* pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;

int FUNC_5(struct hl_device *VAR_0, u8 VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;
 int VAR_3;


 VAR_3 = FUNC_4(VAR_2, FUNC_0(VAR_1));
 if (VAR_3) {
  FUNC_2(VAR_0->dev,
   "Failed to set pci dma mask to %d bits, error %d\n",
   VAR_1, VAR_3);

  VAR_1 = VAR_0->dma_mask;

  VAR_3 = FUNC_4(VAR_2, FUNC_0(VAR_1));
  if (VAR_3) {
   FUNC_1(VAR_0->dev,
    "Failed to set pci dma mask to %d bits, error %d\n",
    VAR_1, VAR_3);
   return VAR_3;
  }
 }






 VAR_0->dma_mask = VAR_1;

 VAR_3 = FUNC_3(VAR_2, FUNC_0(VAR_1));
 if (VAR_3) {
  FUNC_1(VAR_0->dev,
   "Failed to set pci consistent dma mask to %d bits, error %d\n",
   VAR_1, VAR_3);
  return VAR_3;
 }

 return 0;
}
