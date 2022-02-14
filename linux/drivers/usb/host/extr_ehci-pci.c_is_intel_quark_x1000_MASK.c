
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct pci_dev *VAR_2)
{
 return VAR_2->vendor == VAR_1 &&
  VAR_2->device == VAR_0;
}
