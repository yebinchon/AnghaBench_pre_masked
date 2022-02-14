
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {scalar_t__ msi_cap; int irq; int msi_enabled; } ;
struct TYPE_2__ {int multiple; int multi_cap; } ;
struct msi_desc {TYPE_1__ msi_attrib; int masked; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 struct msi_desc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct msi_desc*,int ,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_3)
{
 u16 VAR_4;
 struct msi_desc *VAR_5;

 if (!VAR_3->msi_enabled)
  return;

 VAR_5 = FUNC_1(VAR_3->irq);

 FUNC_4(VAR_3, 0);
 FUNC_5(VAR_3, 0);
 FUNC_0(VAR_3);

 FUNC_6(VAR_3, VAR_3->msi_cap + VAR_0, &VAR_4);
 FUNC_3(VAR_5, FUNC_2(VAR_5->msi_attrib.multi_cap),
       VAR_5->masked);
 VAR_4 &= ~VAR_2;
 VAR_4 |= (VAR_5->msi_attrib.multiple << 4) | VAR_1;
 FUNC_7(VAR_3, VAR_3->msi_cap + VAR_0, VAR_4);
}
