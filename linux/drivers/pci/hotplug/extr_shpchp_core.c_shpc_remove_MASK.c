
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ shpc_managed; } ;
struct controller {TYPE_1__* hpc_ops; } ;
struct TYPE_2__ {int (* release_ctlr ) (struct controller*) ;} ;


 int FUNC_0 (struct controller*) ;
 struct controller* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct controller*) ;
 int FUNC_3 (struct controller*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct controller *VAR_1 = FUNC_1(VAR_0);

 VAR_0->shpc_managed = 0;
 FUNC_2(VAR_1);
 VAR_1->hpc_ops->release_ctlr(VAR_1);
 FUNC_0(VAR_1);
}
