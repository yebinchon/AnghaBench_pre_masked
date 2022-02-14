
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {struct pci_dev* pdev; } ;
struct pci_dev {int revision; scalar_t__ subsystem_device; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct rvu *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;

 return (VAR_2->revision == 0x00) &&
  (VAR_2->subsystem_device == VAR_0);
}
