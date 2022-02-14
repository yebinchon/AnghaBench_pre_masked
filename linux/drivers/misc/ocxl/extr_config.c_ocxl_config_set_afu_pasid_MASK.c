
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

void FUNC_3(struct pci_dev *VAR_4, int VAR_5, int VAR_6,
   u32 VAR_7)
{
 u8 VAR_8;
 u32 VAR_9;

 VAR_8 = VAR_7 & VAR_2;
 FUNC_1(VAR_4, VAR_5 + VAR_1, VAR_8);

 FUNC_0(VAR_4, VAR_5 + VAR_0,
   &VAR_9);
 VAR_9 &= ~VAR_3;
 VAR_9 |= VAR_6 & VAR_3;
 FUNC_2(VAR_4, VAR_5 + VAR_0,
   VAR_9);
}
