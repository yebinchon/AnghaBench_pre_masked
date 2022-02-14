
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_5)
  return;







 FUNC_1(VAR_3, VAR_5 + VAR_0, &VAR_4);
 VAR_4 |= VAR_1;
 FUNC_2(VAR_3, VAR_5 + VAR_0, VAR_4);
}
