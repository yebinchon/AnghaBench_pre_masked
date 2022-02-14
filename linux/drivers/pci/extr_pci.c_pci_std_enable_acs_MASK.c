
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_7)
{
 int VAR_8;
 u16 VAR_9;
 u16 VAR_10;

 VAR_8 = FUNC_0(VAR_7, VAR_6);
 if (!VAR_8)
  return;

 FUNC_1(VAR_7, VAR_8 + VAR_0, &VAR_9);
 FUNC_1(VAR_7, VAR_8 + VAR_2, &VAR_10);


 VAR_10 |= (VAR_9 & VAR_4);


 VAR_10 |= (VAR_9 & VAR_3);


 VAR_10 |= (VAR_9 & VAR_1);


 VAR_10 |= (VAR_9 & VAR_5);

 FUNC_2(VAR_7, VAR_8 + VAR_2, VAR_10);
}
