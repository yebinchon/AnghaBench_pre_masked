
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {struct xhci_slot_priv* debugfs_private; } ;
struct xhci_slot_priv {struct xhci_slot_priv** eps; int root; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_slot_priv*) ;

void FUNC_2(struct xhci_hcd *VAR_0, int VAR_1)
{
 int VAR_2;
 struct xhci_slot_priv *VAR_3;
 struct xhci_virt_device *VAR_4 = VAR_0->devs[VAR_1];

 if (!VAR_4 || !VAR_4->debugfs_private)
  return;

 VAR_3 = VAR_4->debugfs_private;

 FUNC_0(VAR_3->root);

 for (VAR_2 = 0; VAR_2 < 31; VAR_2++)
  FUNC_1(VAR_3->eps[VAR_2]);

 FUNC_1(VAR_3);
 VAR_4->debugfs_private = ((void*)0);
}
