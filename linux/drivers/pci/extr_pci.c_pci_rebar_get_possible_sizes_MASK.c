
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,int) ;

u32 FUNC_2(struct pci_dev *VAR_2, int VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return 0;

 FUNC_0(VAR_2, VAR_4 + VAR_0, &VAR_5);
 return (VAR_5 & VAR_1) >> 4;
}
