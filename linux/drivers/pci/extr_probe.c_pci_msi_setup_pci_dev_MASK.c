
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {void* msix_cap; void* msi_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3)
{





 VAR_3->msi_cap = FUNC_0(VAR_3, VAR_0);
 if (VAR_3->msi_cap)
  FUNC_1(VAR_3, 0);

 VAR_3->msix_cap = FUNC_0(VAR_3, VAR_1);
 if (VAR_3->msix_cap)
  FUNC_2(VAR_3, VAR_2, 0);
}
