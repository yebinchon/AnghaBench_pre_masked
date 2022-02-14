
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;






__attribute__((used)) static unsigned long FUNC_0(struct pci_dev *VAR_5, u8 VAR_6)
{
 unsigned long VAR_7 = VAR_3 | VAR_2;

 switch (VAR_6) {
 case 131:
 case 129:
  VAR_7 |= VAR_1;
  break;
 case 130:
 case 128:
  VAR_7 |= VAR_1 | VAR_4;
  break;
 case 132:
  VAR_7 |= VAR_0;
  break;
 default:
  return 0;
 }

 return VAR_7;
}
