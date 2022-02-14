
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bdc_pci {int bdc; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct bdc_pci* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct bdc_pci *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->bdc);
 FUNC_0(VAR_0);
}
