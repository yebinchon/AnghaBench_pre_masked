
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct flexcop_pci {int fc_dev; int irq_check_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct flexcop_pci*) ;
 int FUNC_4 (struct flexcop_pci*) ;
 scalar_t__ VAR_0 ;
 struct flexcop_pci* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct flexcop_pci *VAR_2 = FUNC_5(VAR_1);

 if (VAR_0 > 0)
  FUNC_0(&VAR_2->irq_check_work);

 FUNC_3(VAR_2);
 FUNC_1(VAR_2->fc_dev);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2->fc_dev);
}
