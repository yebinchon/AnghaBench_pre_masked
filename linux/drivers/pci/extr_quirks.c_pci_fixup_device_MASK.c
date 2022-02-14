
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_fixup {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef enum pci_fixup_pass { ____Placeholder_pci_fixup_pass } pci_fixup_pass ;


 struct pci_fixup* VAR_0 ;
 struct pci_fixup* VAR_1 ;
 struct pci_fixup* VAR_2 ;
 struct pci_fixup* VAR_3 ;
 struct pci_fixup* VAR_4 ;
 struct pci_fixup* VAR_5 ;
 struct pci_fixup* VAR_6 ;
 struct pci_fixup* VAR_7 ;
 struct pci_fixup* VAR_8 ;
 struct pci_fixup* VAR_9 ;
 struct pci_fixup* VAR_10 ;
 struct pci_fixup* VAR_11 ;
 struct pci_fixup* VAR_12 ;
 struct pci_fixup* VAR_13 ;
 struct pci_fixup* VAR_14 ;
 struct pci_fixup* VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct pci_dev*,struct pci_fixup*,struct pci_fixup*) ;
void FUNC_1(enum pci_fixup_pass VAR_17, struct pci_dev *VAR_18)
{
 struct pci_fixup *VAR_19, *VAR_20;

 switch (VAR_17) {
 case 135:
  VAR_19 = VAR_8;
  VAR_20 = VAR_0;
  break;

 case 132:
  VAR_19 = VAR_11;
  VAR_20 = VAR_3;
  break;

 case 133:
  if (!VAR_16)
   return;
  VAR_19 = VAR_10;
  VAR_20 = VAR_2;
  break;

 case 134:
  VAR_19 = VAR_9;
  VAR_20 = VAR_1;
  break;

 case 131:
  VAR_19 = VAR_12;
  VAR_20 = VAR_4;
  break;

 case 130:
  VAR_19 = VAR_13;
  VAR_20 = VAR_5;
  break;

 case 129:
  VAR_19 = VAR_14;
  VAR_20 = VAR_6;
  break;

 case 128:
  VAR_19 = VAR_15;
  VAR_20 = VAR_7;
  break;

 default:

  return;
 }
 FUNC_0(VAR_18, VAR_19, VAR_20);
}
