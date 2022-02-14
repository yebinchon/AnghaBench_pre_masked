
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ error_state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct pci_dev *VAR_1)
{
 return VAR_1->error_state == VAR_0;
}
