
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ hdr_type; scalar_t__ is_busmaster; scalar_t__ msi_enabled; scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (struct pci_dev*,int) ;

void FUNC_7(struct pci_dev *VAR_3)
{
 u16 VAR_4;

 FUNC_6(VAR_3, 1 );


 if (VAR_3->hdr_type == VAR_2) {
  if (FUNC_3(VAR_3))
   FUNC_0(VAR_3);

  VAR_3->is_busmaster = 0;
 } else {
  FUNC_4(VAR_3, VAR_0, &VAR_4);
  if (VAR_4 & (VAR_1)) {
   VAR_4 &= ~(VAR_1);
   FUNC_5(VAR_3, VAR_0, VAR_4);

   VAR_3->is_busmaster = 0;
  }
 }
}
