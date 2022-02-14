
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;

void FUNC_2(struct pci_dev *VAR_3, int VAR_4, int VAR_5,
   int VAR_6)
{
 u16 VAR_7;

 VAR_7 = VAR_6 & VAR_0;
 FUNC_0(VAR_3, VAR_4 + VAR_2, VAR_7);

 VAR_7 = VAR_5 & VAR_0;
 FUNC_1(VAR_3, VAR_4 + VAR_1, VAR_7);
}
