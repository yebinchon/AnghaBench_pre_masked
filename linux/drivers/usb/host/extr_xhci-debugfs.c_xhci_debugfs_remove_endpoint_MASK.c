
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {struct xhci_slot_priv* debugfs_private; } ;
struct xhci_slot_priv {struct xhci_ep_priv** eps; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_priv {int root; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xhci_ep_priv*) ;

void FUNC_2(struct xhci_hcd *VAR_0,
      struct xhci_virt_device *VAR_1,
      int VAR_2)
{
 struct xhci_ep_priv *VAR_3;
 struct xhci_slot_priv *VAR_4 = VAR_1->debugfs_private;

 if (!VAR_4 || !VAR_4->eps[VAR_2])
  return;

 VAR_3 = VAR_4->eps[VAR_2];
 FUNC_0(VAR_3->root);
 VAR_4->eps[VAR_2] = ((void*)0);
 FUNC_1(VAR_3);
}
