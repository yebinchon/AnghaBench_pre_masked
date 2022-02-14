
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct pci_dev* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,char*,int ) ;
 int FUNC_3 (struct pci_dev*,char*) ;
 int FUNC_4 (struct pci_dev*,int ,int,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_1(VAR_3);

 if (!VAR_4) {
  FUNC_3(VAR_3, "PCIe Completion erratum may cause device errors\n");
  return;
 }

 FUNC_2(VAR_4, "Disabling No Snoop/Relaxed Ordering Attributes to avoid PCIe Completion erratum in %s\n",
   FUNC_0(&VAR_3->dev));
 FUNC_4(VAR_4, VAR_0,
        VAR_2 |
        VAR_1, 0);
}
