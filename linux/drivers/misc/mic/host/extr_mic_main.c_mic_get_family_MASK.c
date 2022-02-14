
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; } ;
typedef enum mic_hw_family { ____Placeholder_mic_hw_family } mic_hw_family ;


 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static enum mic_hw_family FUNC_0(struct pci_dev *VAR_2)
{
 enum mic_hw_family VAR_3;

 switch (VAR_2->device) {
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_3 = VAR_1;
  break;
 default:
  VAR_3 = VAR_0;
  break;
 }
 return VAR_3;
}
