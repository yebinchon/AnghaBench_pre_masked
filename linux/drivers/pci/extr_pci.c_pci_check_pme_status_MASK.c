
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int pm_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

bool FUNC_2(struct pci_dev *VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 bool VAR_6 = 0;

 if (!VAR_3->pm_cap)
  return 0;

 VAR_4 = VAR_3->pm_cap + VAR_0;
 FUNC_0(VAR_3, VAR_4, &VAR_5);
 if (!(VAR_5 & VAR_2))
  return 0;


 VAR_5 |= VAR_2;
 if (VAR_5 & VAR_1) {

  VAR_5 &= ~VAR_1;
  VAR_6 = 1;
 }

 FUNC_1(VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
