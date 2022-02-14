
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ msi_cap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct pci_dev *VAR_2, int VAR_3)
{
 u16 VAR_4;

 FUNC_0(VAR_2, VAR_2->msi_cap + VAR_0, &VAR_4);
 VAR_4 &= ~VAR_1;
 if (VAR_3)
  VAR_4 |= VAR_1;
 FUNC_1(VAR_2, VAR_2->msi_cap + VAR_0, VAR_4);
}
