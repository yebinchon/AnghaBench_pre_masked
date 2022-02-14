
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct intel_ntb_dev {int ntb; } ;


 int FUNC_0 (struct intel_ntb_dev*) ;
 int FUNC_1 (struct intel_ntb_dev*) ;
 int FUNC_2 (struct intel_ntb_dev*) ;
 int FUNC_3 (int *) ;
 struct intel_ntb_dev* FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct intel_ntb_dev*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct intel_ntb_dev *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(&VAR_1->ntb);
 FUNC_2(VAR_1);
 if (FUNC_5(VAR_0) || FUNC_6(VAR_0))
  FUNC_7(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
