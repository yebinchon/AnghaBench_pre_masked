
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ msix_enabled; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct alx_priv {int num_napi; struct alx_priv** qnapi; TYPE_1__ hw; } ;


 int FUNC_0 (int ,struct alx_priv*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct alx_priv *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->hw.pdev;
 int VAR_2;

 FUNC_0(FUNC_2(VAR_1, 0), VAR_0);
 if (VAR_0->hw.pdev->msix_enabled) {
  for (VAR_2 = 0; VAR_2 < VAR_0->num_napi; VAR_2++)
   FUNC_0(FUNC_2(VAR_1, VAR_2 + 1), VAR_0->qnapi[VAR_2]);
 }

 FUNC_1(VAR_1);
}
