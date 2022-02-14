
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct intel_ntb_dev {int self_mmio; int peer_mmio; TYPE_1__ ntb; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_5(struct intel_ntb_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->ntb.pdev;

 if (VAR_0->peer_mmio && VAR_0->peer_mmio != VAR_0->self_mmio)
  FUNC_2(VAR_1, VAR_0->peer_mmio);
 FUNC_2(VAR_1, VAR_0->self_mmio);

 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_4(VAR_1, ((void*)0));
}
