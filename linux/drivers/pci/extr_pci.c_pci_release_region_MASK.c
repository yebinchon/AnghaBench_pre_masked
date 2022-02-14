
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {int region_mask; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_devres* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(struct pci_dev *VAR_2, int VAR_3)
{
 struct pci_devres *VAR_4;

 if (FUNC_2(VAR_2, VAR_3) == 0)
  return;
 if (FUNC_1(VAR_2, VAR_3) & VAR_0)
  FUNC_5(FUNC_3(VAR_2, VAR_3),
    FUNC_2(VAR_2, VAR_3));
 else if (FUNC_1(VAR_2, VAR_3) & VAR_1)
  FUNC_4(FUNC_3(VAR_2, VAR_3),
    FUNC_2(VAR_2, VAR_3));

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  VAR_4->region_mask &= ~(1 << VAR_3);
}
