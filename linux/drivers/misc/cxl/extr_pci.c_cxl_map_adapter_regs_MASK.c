
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct cxl {TYPE_1__* native; } ;
struct TYPE_2__ {int * p1_mmio; void* p2_mmio; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int,char*) ;
 int FUNC_8 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct cxl *VAR_1, struct pci_dev *VAR_2)
{
 if (FUNC_7(VAR_2, 2, "priv 2 regs"))
  goto err1;
 if (FUNC_7(VAR_2, 0, "priv 1 regs"))
  goto err2;

 FUNC_8("cxl_map_adapter_regs: p1: %#016llx %#llx, p2: %#016llx %#llx",
   FUNC_2(VAR_2), FUNC_3(VAR_2), FUNC_4(VAR_2), FUNC_5(VAR_2));

 if (!(VAR_1->native->p1_mmio = FUNC_0(FUNC_2(VAR_2), FUNC_3(VAR_2))))
  goto err3;

 if (!(VAR_1->native->p2_mmio = FUNC_0(FUNC_4(VAR_2), FUNC_5(VAR_2))))
  goto err4;

 return 0;

err4:
 FUNC_1(VAR_1->native->p1_mmio);
 VAR_1->native->p1_mmio = ((void*)0);
err3:
 FUNC_6(VAR_2, 0);
err2:
 FUNC_6(VAR_2, 2);
err1:
 return -VAR_0;
}
