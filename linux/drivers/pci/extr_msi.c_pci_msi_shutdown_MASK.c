
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int irq; scalar_t__ msi_enabled; int dev; } ;
struct TYPE_2__ {int default_irq; int multi_cap; } ;
struct msi_desc {TYPE_1__ msi_attrib; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct msi_desc*,int ,int ) ;
 int FUNC_2 (int *) ;
 struct msi_desc* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int VAR_0 ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_1)
{
 struct msi_desc *VAR_2;
 u32 VAR_3;

 if (!VAR_0 || !VAR_1 || !VAR_1->msi_enabled)
  return;

 FUNC_0(FUNC_4(FUNC_2(&VAR_1->dev)));
 VAR_2 = FUNC_3(VAR_1);

 FUNC_7(VAR_1, 0);
 FUNC_6(VAR_1, 1);
 VAR_1->msi_enabled = 0;


 VAR_3 = FUNC_5(VAR_2->msi_attrib.multi_cap);

 FUNC_1(VAR_2, VAR_3, ~VAR_3);


 VAR_1->irq = VAR_2->msi_attrib.default_irq;
 FUNC_8(VAR_1);
}
