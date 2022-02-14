
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mantis_pci {int dummy; } ;


 int FUNC_0 (struct mantis_pci*) ;
 int FUNC_1 (struct mantis_pci*) ;
 int FUNC_2 (struct mantis_pci*) ;
 int FUNC_3 (struct mantis_pci*) ;
 int FUNC_4 (struct mantis_pci*) ;
 struct mantis_pci* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct mantis_pci *VAR_1 = FUNC_5(VAR_0);

 if (VAR_1) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
  FUNC_0(VAR_1);
 }
 return;

}
