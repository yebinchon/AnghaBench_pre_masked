
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device {int * dma_ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_2 ;
 struct pci_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,struct pci_dev*,int*,int *,int *) ;
 int FUNC_5 (struct pci_dev*,struct pci_dev*,int*) ;

int FUNC_6(struct pci_dev *VAR_3, struct device **VAR_4,
        int VAR_5, bool VAR_6)
{
 bool VAR_7 = 0;
 struct pci_dev *VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11, VAR_12;

 if (VAR_5 == 0)
  return -1;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  if (FUNC_0(VAR_0) &&
      VAR_4[VAR_11]->dma_ops == &VAR_2) {
   if (VAR_6)
    FUNC_1(VAR_4[VAR_11],
      "cannot be used for peer-to-peer DMA because the driver makes use of dma_virt_ops\n");
   return -1;
  }

  VAR_8 = FUNC_2(VAR_4[VAR_11]);
  if (!VAR_8) {
   if (VAR_6)
    FUNC_1(VAR_4[VAR_11],
      "cannot be used for peer-to-peer DMA as it is not a PCI device\n");
   return -1;
  }

  if (VAR_6)
   VAR_12 = FUNC_5(VAR_3,
     VAR_8, &VAR_10);
  else
   VAR_12 = FUNC_4(VAR_3, VAR_8,
             &VAR_10, ((void*)0), ((void*)0));

  FUNC_3(VAR_8);

  if (VAR_12 == VAR_1)
   VAR_7 = 1;

  if (VAR_7 && !VAR_6)
   break;

  VAR_9 += VAR_10;
 }

 if (VAR_7)
  return -1;

 return VAR_9;
}
