
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct msix_entry {unsigned int entry; } ;


 int FUNC_0 (int *,char*,unsigned int,unsigned int,int) ;
 int FUNC_1 (int *,char*,unsigned int,int) ;
 int FUNC_2 (struct pci_dev*,struct msix_entry*,unsigned int,unsigned int) ;

unsigned int
FUNC_3(struct pci_dev *VAR_0, struct msix_entry *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_1[VAR_4].entry = VAR_4;

 VAR_5 = FUNC_2(VAR_0, VAR_1,
      VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_0->dev, "Failed to enable %d-%d MSI-X (err=%d)\n",
   VAR_2, VAR_3, VAR_5);
  return 0;
 }

 if (VAR_5 < VAR_3)
  FUNC_1(&VAR_0->dev, "Unable to allocate %d IRQs got only %d\n",
    VAR_3, VAR_5);

 return VAR_5;
}
