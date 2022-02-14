
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; } ;
struct pci_config_window {TYPE_1__ busr; } ;
struct pci_bus {scalar_t__ number; struct pci_config_window* sysdata; } ;


 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct pci_bus *VAR_0, unsigned int VAR_1)
{
 struct pci_config_window *VAR_2 = VAR_0->sysdata;







 if (VAR_0->number == VAR_2->busr.start && FUNC_0(VAR_1) > 0)
  return 0;

 return 1;
}
