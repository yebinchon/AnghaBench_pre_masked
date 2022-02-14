
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev const*) ;
 scalar_t__ FUNC_1 (struct pci_dev const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct pci_dev *VAR_1)
{
 return FUNC_1(VAR_1) &&
        FUNC_0(VAR_1) & VAR_0;
}
