
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {TYPE_1__* eps; struct xhci_slot_priv* debugfs_private; } ;
struct xhci_slot_priv {struct xhci_ep_priv** eps; int root; } ;
struct xhci_hcd {int dummy; } ;
struct xhci_ep_priv {int name; int root; } ;
struct TYPE_2__ {int ring; } ;


 int VAR_0 ;
 struct xhci_ep_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (struct xhci_hcd*,int *,int ,int ) ;

void FUNC_3(struct xhci_hcd *VAR_1,
      struct xhci_virt_device *VAR_2,
      int VAR_3)
{
 struct xhci_ep_priv *VAR_4;
 struct xhci_slot_priv *VAR_5 = VAR_2->debugfs_private;

 if (!VAR_5)
  return;

 if (VAR_5->eps[VAR_3])
  return;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 FUNC_1(VAR_4->name, sizeof(VAR_4->name), "ep%02d", VAR_3);
 VAR_4->root = FUNC_2(VAR_1,
         &VAR_2->eps[VAR_3].ring,
         VAR_4->name,
         VAR_5->root);
 VAR_5->eps[VAR_3] = VAR_4;
}
