
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int devfn; int bus; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

u8 FUNC_2(const struct pci_dev *VAR_0, u8 VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_0->bus))
  VAR_2 = 0;
 else
  VAR_2 = FUNC_0(VAR_0->devfn);

 return (((VAR_1 - 1) + VAR_2) % 4) + 1;
}
