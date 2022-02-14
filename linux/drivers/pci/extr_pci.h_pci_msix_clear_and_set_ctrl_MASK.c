
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ msix_cap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct pci_dev *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4;

 FUNC_0(VAR_1, VAR_1->msix_cap + VAR_0, &VAR_4);
 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;
 FUNC_1(VAR_1, VAR_1->msix_cap + VAR_0, VAR_4);
}
