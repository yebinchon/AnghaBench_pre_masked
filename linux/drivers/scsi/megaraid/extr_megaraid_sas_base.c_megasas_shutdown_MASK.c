
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct megasas_instance {int unload; int pdev; scalar_t__ msix_vectors; TYPE_1__* instancet; } ;
struct TYPE_2__ {int (* disable_intr ) (struct megasas_instance*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct megasas_instance*) ;
 int FUNC_1 (struct megasas_instance*) ;
 int FUNC_2 (struct megasas_instance*,int ) ;
 scalar_t__ FUNC_3 (struct megasas_instance*) ;
 int FUNC_4 (int ) ;
 struct megasas_instance* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct megasas_instance*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct megasas_instance *VAR_2 = FUNC_5(VAR_1);

 if (!VAR_2)
  return;

 VAR_2->unload = 1;

 if (FUNC_3(VAR_2))
  goto skip_firing_dcmds;

 FUNC_1(VAR_2);
 FUNC_2(VAR_2, VAR_0);

skip_firing_dcmds:
 VAR_2->instancet->disable_intr(VAR_2);
 FUNC_0(VAR_2);

 if (VAR_2->msix_vectors)
  FUNC_4(VAR_2->pdev);
}
