
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int) ;

void FUNC_1(struct pci_dev *VAR_2, int VAR_3, u32 VAR_4,
   u32 VAR_5)
{
 u32 VAR_6;

 VAR_6 = (VAR_4 & VAR_0) << 16;
 VAR_6 |= VAR_5 & VAR_0;
 FUNC_0(VAR_2, VAR_3 + VAR_1,
   VAR_6);
}
