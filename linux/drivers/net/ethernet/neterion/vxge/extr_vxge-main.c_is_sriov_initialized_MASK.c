
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4) {
  FUNC_1(VAR_3, VAR_4 + VAR_1, &VAR_5);
  if (VAR_5 & VAR_2)
   return 1;
 }
 return 0;
}
