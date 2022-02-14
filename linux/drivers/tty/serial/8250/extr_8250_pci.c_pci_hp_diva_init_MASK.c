
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; } ;
__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_0)
{
 int VAR_1 = 0;

 switch (VAR_0->subsystem_device) {
 case 129:
 case 134:
 case 132:
 case 135:
  VAR_1 = 3;
  break;
 case 128:
  VAR_1 = 2;
  break;
 case 131:
  VAR_1 = 4;
  break;
 case 130:
 case 133:
  VAR_1 = 1;
  break;
 }

 return VAR_1;
}
