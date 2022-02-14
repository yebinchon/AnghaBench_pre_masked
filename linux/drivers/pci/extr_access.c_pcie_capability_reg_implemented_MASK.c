
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_5(struct pci_dev *VAR_0, int VAR_1)
{
 if (!FUNC_0(VAR_0))
  return 0;

 switch (VAR_1) {
 case 140:
  return 1;
 case 145:
 case 143:
 case 141:
  return 1;
 case 139:
 case 137:
 case 135:
  return FUNC_1(VAR_0);
 case 130:
 case 129:
 case 128:
  return FUNC_3(VAR_0);
 case 132:
 case 133:
 case 131:
  return FUNC_2(VAR_0);
 case 144:
 case 142:
 case 138:
 case 136:
 case 134:
  return FUNC_4(VAR_0) > 1;
 default:
  return 0;
 }
}
