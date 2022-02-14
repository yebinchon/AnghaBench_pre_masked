
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (struct device*) ;

void FUNC_3(struct device *VAR_0, int VAR_1)
{
 u16 VAR_2;
 struct pci_dev *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_3, 0x50, &VAR_2);
 if (VAR_1 == 0)
  FUNC_1(VAR_3, 0x50, VAR_2 & 0xfcff);
 else
  FUNC_1(VAR_3, 0x50, VAR_2 | 0x0300);
}
