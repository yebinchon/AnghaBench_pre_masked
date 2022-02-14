
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_dev {int irq; struct rtsx_chip* chip; } ;
struct rtsx_chip {scalar_t__ msi_en; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct rtsx_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct rtsx_dev *VAR_2 = FUNC_3(VAR_1);
 struct rtsx_chip *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->chip;

 FUNC_4(VAR_3, VAR_0);

 if (VAR_2->irq >= 0) {
  FUNC_0(VAR_2->irq, (void *)VAR_2);
  VAR_2->irq = -1;
 }

 if (VAR_3->msi_en)
  FUNC_2(VAR_1);

 FUNC_1(VAR_1);
}
