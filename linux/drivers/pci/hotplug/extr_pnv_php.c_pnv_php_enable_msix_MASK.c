
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pnv_php_slot {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct msix_entry {int entry; int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,struct msix_entry*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,char*,int) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct pnv_php_slot *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct msix_entry VAR_5;
 int VAR_6, VAR_7;
 u16 VAR_8;


 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_3(VAR_4, VAR_1, &VAR_8);
 VAR_5.entry = (VAR_8 & VAR_2) >> 9;
 if (VAR_5.entry >= VAR_6)
  return -VAR_0;


 VAR_7 = FUNC_0(VAR_4, &VAR_5, 1);
 if (VAR_7) {
  FUNC_2(VAR_4, "Error %d enabling MSIx\n", VAR_7);
  return VAR_7;
 }

 return VAR_5.vector;
}
