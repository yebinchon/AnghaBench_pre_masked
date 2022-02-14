
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pci_dev {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,unsigned long*) ;

int FUNC_1(struct pci_dev *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = 0;
 u32 VAR_5;

 switch (VAR_3) {
 case 0:
  VAR_4 = 0;
  break;
 case 1:
  FUNC_0(VAR_2, VAR_1, &VAR_5);
  VAR_4 = VAR_5 + VAR_0;
  break;
 }
 return VAR_4;
}
