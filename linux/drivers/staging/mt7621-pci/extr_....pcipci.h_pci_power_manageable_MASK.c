
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ bridge_d3; } ;


 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static inline bool FUNC_1(struct pci_dev *VAR_0)
{




 return !FUNC_0(VAR_0) || VAR_0->bridge_d3;
}
