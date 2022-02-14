
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct pci_dev *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 return VAR_3 == VAR_1 ||
        VAR_3 == VAR_0;
}
