
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;

void FUNC_2(struct pci_dev *VAR_1, int VAR_2, int VAR_3)
{
 u8 VAR_4;

 FUNC_0(VAR_1, VAR_2 + VAR_0, &VAR_4);
 if (VAR_3)
  VAR_4 |= 1;
 else
  VAR_4 &= 0xFE;
 FUNC_1(VAR_1, VAR_2 + VAR_0, VAR_4);
}
