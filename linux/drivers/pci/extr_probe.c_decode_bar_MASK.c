
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct pci_dev *VAR_10, u32 VAR_11)
{
 u32 VAR_12;
 unsigned long VAR_13;

 if ((VAR_11 & VAR_8) == VAR_9) {
  VAR_13 = VAR_11 & ~VAR_4;
  VAR_13 |= VAR_0;
  return VAR_13;
 }

 VAR_13 = VAR_11 & ~VAR_5;
 VAR_13 |= VAR_1;
 if (VAR_13 & VAR_6)
  VAR_13 |= VAR_3;

 VAR_12 = VAR_11 & VAR_7;
 switch (VAR_12) {
 case 129:
  break;
 case 130:

  break;
 case 128:
  VAR_13 |= VAR_2;
  break;
 default:

  break;
 }
 return VAR_13;
}
