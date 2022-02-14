
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_2 (struct pci_dev*,int) ;

int FUNC_3(struct pci_dev *VAR_1, int VAR_2, u16 VAR_3)
{
 if (VAR_2 & 1)
  return -VAR_0;

 if (!FUNC_2(VAR_1, VAR_2))
  return 0;

 return FUNC_1(VAR_1, FUNC_0(VAR_1) + VAR_2, VAR_3);
}
